#include<iostream>
using namespace std;

void display(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void bubble(int a[], int n)
{
	int flag;
	for(int j=0;j<n;j++)
	{
		flag=0;
		for(int i=0;i<n-j-1;i++)
		{
			if(a[i]>a[i+1])
			{
				swap(a[i],a[i+1]);
				flag=1;
			}
		}
		if(flag==0)
			break;
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
	bubble(a,n);
}
