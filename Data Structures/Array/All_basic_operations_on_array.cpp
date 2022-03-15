//Display,add,avg,append,insert,delete,Linear search,get,set,max,min,reverse,shift,rotate.
#include<iostream>
using namespace std;

class array
{
	private:
	int arr[100],length;
	//pos=index+1
	
	public:
	void input();
	void display();
	void add();  //sum of all the elements
	void average();
	void insert(); //inserting at any index
	void append(); //insertinf in the end
	void checkLength();
	void eleDelete();
	void linearSearch();
	void get();
	void set();
	void max();
	void min();
	int reverse();
	void reReverse();
	void LeftShift();
	void RightShift();
	void LeftRotate();
	void RightRotate();
};


void array::input()
{
	cout<<"Enter the size of the array"<<endl;
	cin>>length;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<length;i++)
	{
		cin>>arr[i];
	}
	
}
void array::display()
{
	cout<<"Elements of the array are"<<endl;
	for(int i=0;i<length;i++)
	{
		cout<<"|"<<arr[i];
	}
	cout<<"|"<<endl;
}
void array::add()
{
	int sum=0;
	for(int i=0;i<length;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"Sum of all the elements of array is: "<<sum<<endl;
}
void array::average()
{    
    int avg,sum=0;
	for(int i=0;i<length;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/length;
	cout<<"Average of all the elements of the array is: "<<avg<<endl;
		
}
void array::insert()
{
	int x,index;
	cout<<"Enter the element you want to insert"<<endl;
	cin>>x;
	cout<<"Enter the index"<<endl;
	cin>>index;
	for(int i=length;i>index;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[index]=x;
	length++;
	display();
}
void array::append()
{  
    int x;
	cout<<"Enter the value you want to append"<<endl;
	cin>>x;
	arr[length]=x;
	length++;
	display();
}
void array::checkLength()
{
	cout<<"Current length of array: "<<length<<endl;
	display();
}
void array::eleDelete()
{
	int index;
	display();
    cout<<"Enter the index of the element you want to delete: "<<endl;
    cin>>index;
    for(int i=index;i<length-1;i++)
    {
    	arr[i]=arr[i+1];
	}
	length--;
	display();
}
void array::linearSearch()
{
  int key,t;
  cout<<"Enter the element you want to search: ";
  cin>>key;
  for(int i=0;i<length;i++)
  {
  	if(key==arr[i])
  	{
  	 	cout<<"Element found at position "<<i+1<<" or index "<<i;	
  	 	t=0;
	}	
  }
    if (t == -1)
    cout <<"Element not Found"<< endl;
		
}
void array::get()
{
	int index;
	cout<<"Enter the index of element needed: "<<endl;
	cin>>index;
	if(index>=1 && index<length)
	cout<<"|"<<arr[index]<<"|"<<endl; 
	else
	cout<<"Invalid index"<<endl;	
}
void array::set()
{
	int index,x;
	cout<<"Enter the element"<<endl;
	cin>>x;
	cout<<"Enter the index where you want to set the element: "<<endl;
	cin>>index;
	if(index>=1 && index<length)
	{
		arr[index]=x; 
	}
	
	else
	{
		cout<<"Invalid index"<<endl;
	}
	display();
	
}

void array::max()
{  
    int m,i;
	m=arr[0];
	for(i=1;i<length;i++)
	{
		if(arr[i]>m)
		 m=arr[i];
	}
	cout<<"Max element of the array is: "<<m<<endl;
}
void array::min()
{ 
    int m,i;
	m=arr[0];
	for(i=1;i<length;i++)
	{
		if(arr[i]<m)
		 m=arr[i];
	}
	cout<<"Min element of the array is: "<<m<<endl;
}

int array::reverse()
{  
    int ch=0,temp;
	for(int i=0,j=length-1;i<j;i++,j--)	
    {
    	temp=arr[i];
    	arr[i]=arr[j];
    	arr[j]=temp;
	}
	cout<<"Reversed array is: "<<endl;
	display();
	cout<<"\n Press 1 if you want to Re-Reverse the array into original one.\n Press 2 if not.\n";
	cin>>ch;
	if(ch=1)
	{
	   reReverse();
	}	
	else
	{
		cout<<"New array: "<<endl;
		display();
	}
}

void array::reReverse()
{
 	 int temp;
	for(int i=0,j=length-1;i<j;i++,j--)	
    {
    	temp=arr[i];
    	arr[i]=arr[j];
    	arr[j]=temp;
	}
	cout<<"original array was: "<<endl;
	for(int i=0;i<length;i++)
	{
		cout<<"|"<<arr[i];
	}
	cout<<"|"<<endl;
}

void array:: LeftShift()
{

    for (int i=0;i<length-1;i++)
	{
        arr[i] = arr[i+1];
    }
    length--;
 
}
void array::RightShift()
{
    for (int i=length-1;i>0;i--)
	{
        arr[i] = arr[i-1];
    }
    length--;
    
}
void array::LeftRotate()
{
	int first;
    first = arr[0];
    for (int i=0;i<length-1;i++)
	{
        arr[i] = arr[i+1];
    }
    arr[length-1]=first;
  
}
void array::RightRotate()
{
	int last;
    last = arr[length-1];
    for (int i=length-1;i>0;i--)
	{
        arr[i] = arr[i-1];
    }
   arr[0] = last;
   ;	
}
	
int main()
{
	int choice;
	array a;
	a.input();
	do
	{ 
	    cout<<"\n--------Operations on Array--------"<<endl;
	    cout<<"\n1.Display the elements of the array \n2.Sum of the Elements \n3.Find Average";
	    cout<<"\n4.Insert an Element \n5.Append an Element \n6.Check the length of your Array";
	    cout<<"\n7.Delete an Element \n8.Search for an Element \n9.Get the Element \n10.Set the Element";
	    cout<<"\n11.Max Element \n12.Min Element \n13.Reverse your Array \n14.Left Shift \n15.Right Shift";
	    cout<<"\n16.Left Rotate \n17.Right Rotate \n18.Exit";
		cout<<"\nEnter the number corresponding to your desire operation: "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				a.display();
			    break;
			case 2:
		    	a.add();
		    	break;
			case 3:
				a.average();
				break;
			case 4:
				a.insert();
				break;
			case 5:
				a.append();
				break;
			case 6:
				a.checkLength();
				break;
			case 7:
				a.eleDelete();
				break;
			case 8:
				a.linearSearch();
				break;
			case 9:
				a.get();
				break;
			case 10:
				a.set();
				break;
			case 11:
				a.max();
				break;
			case 12:
				a.min();
				break;
			case 13:
				a.reverse();
				break;
			case 14:
				{
				 int m,i;
				 cout<<"\nEnter number of times you want to left shift: ";
				 cin>>m;			
				 for(int i=1;i<=m;i++)
				 {
				     a.LeftShift();
				 }
				 a.display();
				 break;	
				}				
			
			case 15:
				{
				 int m,i;
				 cout<<"\nEnter number of times you want to right shift: ";
				 cin>>m;			
				 for(int i=1;i<=m;i++)
				 {
				     a.RightShift();
				 }
				  a.display();	
				 break;	
				}						
			case 16:
			   	{
				 int m,i;
				 cout<<"\nEnter number of times you want to left rotate: ";
				 cin>>m;			
				 for(int i=1;i<=m;i++)
				 {
				     a.LeftRotate();
				 }	
				  a.display();
				 break;	
				}											
			case 17:
				{
				 int m,i;
				 cout<<"\nEnter number of times you want to right rotate: ";
				 cin>>m;			
				 for(int i=1;i<=m;i++)
				 {
				     a.RightRotate();
				 }	
				  a.display();
				 break;	
				}				
			case 18:
				exit(1);
				break;
			default:
				{
					cout<<"Invalid choice"<<endl;
				}
		}
       
	}while(1);
    
    return 0;
}


