#include<iostream>
using namespace std;

void display(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int partition(int a[], int l, int r)
{
	int pivot = a[r], pindex=l;
	for(int i=l;i<r-1;i++)
	{
		if(a[i]<pivot)
		{
			swap(a[i],a[pindex]);
			pindex++;
		}
	}
	swap(a[r],a[pindex]);
	return pindex;
}

void quick(int a[], int l, int r)
{
	if(l<r)
	{
		int pindex = partition(a,l,r);
		quick(a,l,pindex-1);
		quick(a,pindex+1,r);
	}
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
	quick(a,0,n-1);
	display(a,n);
}
