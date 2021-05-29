#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i;i<n;i++)
	{
		cin>>a[i];
	}
	int fl=1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			fl=0;
			break;
		}
	}
	if(fl==1)
	{
		cout<<"sorted order";
	}
	else
	{
		cout<<"not a sorted order";
	}
	return 0;
}
