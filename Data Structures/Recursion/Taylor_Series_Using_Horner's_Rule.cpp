//taylor series of e^x=1+(x/1)+(x^2/2!)+(x^3/3!).....+ n times, to get more accurate solution
#include<iostream>
using namespace std;
class taylorSeries
{
  public:
  double recursion(int x,int n)	
  { 
    static double s=1;
  	if(n==0)
  	  return s;	 
  	else
  	  {
  	   s=1+((s/n)*x);
  	  }
  	return recursion(x,n-1);
  }
  double loops(int x,int n) 
   {
   	double s=1;
   	for(n>0;n--;)
   	 s=1+((x/n)*s);
   	return s;
   }
  
};

int main()
{
	int x,n;
	int ch;
	taylorSeries t;
	cout<<"taylor series is: e^x=1+(x/1)+(x^2/2!)+(x^3/3!).....+ n times "<<endl;
	cout<<"Enter the value of x and n for finding the solution of taylor series: "<<endl;
	cin>>x>>n;
	cout<<"1.By Recursion \n2.By Loops "<<endl;
	cin>>ch;
	if(ch=1)
	{
	 cout<<"Solution is: "<<t.recursion(x,n );
	}
	else if (ch=2)
	{
	 cout<<"Solution is: "<<t.loops(x,n);
	}
	else
	 cout<<"Invalid choice"<<endl;
}
