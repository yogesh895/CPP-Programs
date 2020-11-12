#include<iostream>
using namespace std;
int main()
{
	int i,max=0,n;
	for (i=1;i<=5;i++)
	{
		cout <<"Number "<<i<<" ";
		cin>>n;
		if(n>max)
		max=n;
	}
	cout<<"The maximum number is "<<max;
	return 0;
}
