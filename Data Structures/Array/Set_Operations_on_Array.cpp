//set operations: union,intersection and difference
#include<iostream>
using namespace std;

class SetOperations
{
	private: 
	
	 int arr[50],length;
	 
	public:

	 void arrUnion(int arr1[],int l1,int arr2[],int l2);
	 void intersection(int arr1[],int l1,int arr2[],int l2);
	 void difference(int arr1[],int l1,int arr2[],int l2);
	
};


	void SetOperations::arrUnion(int arr1[],int l1,int arr2[],int l2)
	{
	  int arr3[100],i,j,k,l3;
	  i=j=k=0;
	  while(i<l1 &&j<l2)
	  {
	  	if(arr1[i]<arr2[j])
	  	{
	  		arr3[k]=arr1[i];
	  		k++;i++;
	    }
	    else if(arr2[j]<arr1[i])
	    {
	    	arr3[k]=arr2[j];
	    	k++;j++;
		}
		else
		{
			arr3[k]=arr1[i];
			k++;i++;j++;
		}
	  }
	  for(;i<l1;i++)
	  {
	  	arr3[k++]=arr1[i];
	  }
	  for(;j<l2;j++)
	  {
	  	arr3[k++]=arr2[j];
	  }
	  
	 l3=k; 
	  cout<<"Union of the arrays is: ";
	for(int x=0;x<l3;x++)
	{
		cout<<"|"<<arr3[x];
	}
	cout<<"|"<<endl;
	  	
	}
	void SetOperations::intersection(int arr1[],int l1,int arr2[],int l2)
	{
		 int i,j,k,arr3[100],l3;
		 i=j=k=0;
				
		 while(i<l2 && j<l2)
		{
		 if(arr1[i]<arr2[j])
		 i++;
		 else if(arr2[j]<arr1[i])
		 j++;
		 else if(arr1[i]==arr2[j])
		 {
		  arr3[k]=arr1[i];
		  k++;i++;j++;
		 }
		}
		
		l3=k;
	cout<<"Intersection of two arrays is: ";
	for(int x=0;x<l3;x++)
	{
		cout<<"|"<<arr3[x];
	}
	cout<<"|"<<endl;
			
	}
	void SetOperations::difference(int arr1[],int l1,int arr2[],int l2)
	{
	  	int arr3[100],flag,l3,k=0;
    for(int i=0;i<l1;i++)
   {
      flag=0;
       for(int j=0;j<l3;j++)
        {
          if(arr1[i]==arr2[j])
          {
            flag=1;
            break;
          }
        }  
     if(flag==0)
      { 
        arr3[k]=arr1[i];
        k++;       
      }      
    }
    l3=k;	  
	cout<<"Difference (A-B): ";
	for(int x=0;x<l3;x++)
	{
		cout<<"|"<<arr3[x];
	}
	cout<<"|"<<endl;
	  	
	}


int main()
 {  
    int a1[50],a2[50],s1,s2,ch;
 	SetOperations a;
 	cout<<"Enter the size of first array"<<endl;
    cin>>s1;
    	cout<<"Enter the elements of the array in sorted order"<<endl;
    	for(int i=0;i<s1;i++)
    	{
    		cin>>a1[i];
		}
 	cout<<"Enter the size of second array"<<endl;
    cin>>s2;
    	cout<<"Enter the elements of the array in sorted order"<<endl;
    	for(int j=0;j<s2;j++)
    	{
    		cin>>a2[j];
		}
	do
	{
	   cout<<"------Set Operations------"<<endl;
	   cout<<"\n1.Union \n2.Intersection \n3.Difference (A-B) \n4.Difference (B-A) \n5.Exit "<<endl;
	   cout<<"\nEnter the number corresponding to your desire operation: "<<endl;
	   cin>>ch;
	   switch(ch)
	   {
	   	 case 1:
	   	 	a.arrUnion(a1,s1,a2,s2);
	   	 	break;
	   	 case 2:
	   	 	a.intersection(a1,s1,a2,s2);
	   	 	break;
	   	 case 3:
	   	 	a.difference(a1,s1,a2,s2);
	   	 	break;
	   	 case 4:
	   	 	a.difference(a2,s2,a1,s1);
	   	 case 5:
	   	 	exit(1);
	   	 default:
			{
		    	cout<<"Invalid choice"<<endl;
			}
	   }
	   	
	}while(1);				 	
 }



