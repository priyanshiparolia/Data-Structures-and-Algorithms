//factorial of n=1*2*3*.....*(n-1)*n i.e n!=(n-1)!*n
#include<iostream>
using namespace std;
class factorial
{
  int s;
  public:
  int fact(int n)	
  { 
  	if(n==0)
  	  return 1;	 
  	else
  	  return fact(n-1) * n;  	 
  }
};

int main()
{
	int x;
	factorial a;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"factorial of "<<x<<" is: "<<a.fact(x)<<endl;
}
