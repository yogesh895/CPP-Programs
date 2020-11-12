#include<iostream>
using namespace std;
int main()
{
	int i,n=0,count=0,sum=0;
	for(i=1;i<=5;i++)
	{
		cout<<"Number "<<i<<" ";
		cin>>n;
		
		if(n%2==0)
		count+=1;
		
		if(n%2!=0)
		sum+=n;
	}
	cout<<"The count of even number is "<<count<<endl;
	cout<<"The sum of odd number is "<<sum;
	return 0;
}
