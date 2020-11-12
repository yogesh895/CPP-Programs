#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,n,count=0,p,rev=0,t=0;
	cout<<"Enter a No. to reverse: ";
	cin>>n;
	t=n;
	while(t!=0)
	{
		a=t%10;
		t= t/10;
		count++;
	}
	a=0;
	p=count-1;
	while(n!=0)
	{
		a=n%10;
		rev=rev + (a * pow(10,p));
		n=n/10;
		p--;
	}
	cout<<"The reversed number is "<<rev;
}
