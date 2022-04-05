#include<iostream>
using namespace std;
class add
{
  int s;
  public:
  int sum(int n)	
  { 
  	if(n==0)
  	  return 0;	 
  	else
  	  return sum(n-1) + n;  	 
  }
};

int main()
{
	int x;
	add a;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"Submission of first "<<x<<" natural number is: "<<a.sum(x)<<endl;
}
