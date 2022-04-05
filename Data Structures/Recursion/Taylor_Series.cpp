//taylor series of e^x=1+(x/1)+(x^2/2!)+(x^3/3!).....+ n times, to get more accurate solution
#include<iostream>
using namespace std;
class taylorSeries
{
  double r;
  public:
  double e(int x,int n)	
  { 
    static double power=1,factorial=1;
  	if(n==0)
  	  return 1;	 
  	else
  	  r=e(x,n-1);
  	  power=power*x;
  	  factorial=factorial*n;
  	  return r+(power/factorial);  	 
  }
};

int main()
{
	double x,n;
	taylorSeries t;
	cout<<"taylor series is: e^x=1+(x/1)+(x^2/2!)+(x^3/3!).....+ n times "<<endl;
	cout<<"Enter the value of x and n for finding the solution of taylor series: ";
	cin>>x>>n;
	cout<<"Solution is: "<<t.e(x,n );
}
