#include<iostream>
using namespace std;
int main()
{
	int i,n,count;
	float avg,sum;
	cout<<"Enter a Number ";
	cin>>n;
	while(n!=0)
	{
		if(n%2==0)
		{
			sum=sum + n%10;
			count+=1;
		}
		n=n/10;
	}
	avg=sum/count;
	cout<<"The sum of even digit is "<<sum<<endl;
	cout<<"The count of even digi is "<<count<<endl;
	cout<<"The average of even digit is "<<avg;
	
}
