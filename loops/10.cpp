#include<iostream>
using namespace std;
int main()
{
	int n,i,pcount=0,ncount=0,zcount=0;
	for(i=1;i<=5;i++)
	{
		cout<<"Number "<<i<<" ";
		cin>>n;
		
		if(n>0)
		pcount+=1;
		
		if(n<0)
		ncount+=1;
		
		if(n==0)
		zcount+=1;
		
	}
	cout<<"positive "<<pcount<<endl;
	cout<<"negative "<<ncount<<endl;
	cout<<"zero "<<zcount<<endl;
}
