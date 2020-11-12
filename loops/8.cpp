#include<iostream>
using namespace std;
int main()
{
	int i,n,count=0;
	float avg,sum;
	cout<<"Enter Any Number ";
	cin>>n;
	
	while(n!=0)
	{
		sum=sum + n%10;
		n=n/10;
		count+=1;
	}
	cout<<"Sum is "<<sum<<endl;
	cout<<"Count is "<<count<<endl;
	avg= sum/count;
	cout<<"The average of digits is "<<avg;
}
