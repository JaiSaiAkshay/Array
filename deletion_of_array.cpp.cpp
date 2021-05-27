#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ele,ind=-1,n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"element to be deleted";
	cin>>ele;
	for(int i=0;i<n;i++)
	{
        if(arr[i]==ele)
        {
        	ind=i;
        	break;
		}
	}
	if(ind==-1)
	{
		cout<<"element not found";
		return 0;
    }
    for(int i=ind;i<n;i++)
    {
    	arr[i]=arr[i+1];
	}
	n--;
	cout<<"array after deletion";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
