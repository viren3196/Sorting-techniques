#include<iostream>
using namespace std;

void display(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void combine(int a[], int l, int m, int r)
{
    int n1=m-l+1, n2=r-m;
    int left[n1], right[n2];
    
    for(int i=0;i<n1;i++)
        left[i] = a[l+i];
    
    for(int i=0;i<n2;i++)
        right[i] = a[m+i+1];
        
    int p=0,q=0,k=l;
    
    while(p<n1 && q<n2)
    {
        if(left[p]<right[q])
        {
            a[k] = left[p];
            p++;
        }
        else
        {
            a[k] = right[q];
            q++;
        }
        k++;
    }
    
    while(p<n1)
    {
        a[k] = left[p];
        p++;
        k++;
    }
    while(q<n2)
    {
        a[k] = right[q];
        q++;
        k++;
    }
}

void merge(int arr[], int l, int m, int r)
{
     if(l<r)
     {
         merge(arr,l,(l+m)/2,m);
         merge(arr,m+1,(m+1+r)/2,r);
         combine(arr,l,m,r);
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
	merge(a,0,(n-1)/2,n-1);
	display(a,n);
}
