#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter a positive interger:";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		sum=sum+i;
	}
	cout<<"The sum of the number from 1 to"<<n<<"is "<<sum<<endl;
	return 0;	
}
