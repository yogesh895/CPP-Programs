#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,n;
	for (i=1;i<=5;i++)
	{   
		cout<<"Number "<<  i<<" ";  
		cin>>n;
		sum+=n;
	}
	cout<<sum;
}
