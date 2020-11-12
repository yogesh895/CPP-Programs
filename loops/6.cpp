#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	for(i=1;i<=5;i++)
	{
		cout<<"Number "<<i<<" ";
		cin>>n;
		if(n%2==0 && n>=99 && n<=1000)
		count+=1;
	}
	cout<<"The Count of 3 digit even number is "<<count;
	
}

