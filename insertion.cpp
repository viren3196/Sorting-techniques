#include<iostream>
using namespace std;

void display(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void insertion(int a[], int n)
{
	int hole, value;
	for(int i=0;i<n;i++)
	{
		value = a[i];
		hole = i;
		while(hole>0 && a[hole-1]>value)
		{
			a[hole] = a[hole-1];
			hole--;
		}
		a[hole] = value;
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
	insertion(a,n);
}
