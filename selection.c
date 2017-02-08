#include<iostream>
using namespace std;

void display(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void selection(int a[], int n)
{
	int imin;
	for(int i=0;i<n-1;i++)
	{
		imin = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[imin])
				imin = j;
		}
		swap(a[imin],a[i]);
	}
	display(a,n);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)	
	{
		cin>>a[i];
	}
	selection(a,n);
}
