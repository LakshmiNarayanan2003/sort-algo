#include <iostream>
using namespace std;

void merge(int a[],int mid,int lb, int ub)
{
	int i,j,k;
	int b[100];
	i=lb;
	j=mid+1;
	k=lb;	
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;		
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
			while(i<=mid)
			{
				b[k]=a[i];
				i++;
				k++;
			}
	}
	for(int l=0;l<=ub;l++)
	{
		a[l]=b[l];
	}
		
}

void mergeSort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergeSort(a,lb,mid);
		mergeSort(a,mid+1,ub);
		merge(a,mid,lb,ub);
	}
	

}

main()
{
	int a[10],n;
	cout<<"Enter the total number of elements : ";
	cin>>n;
	cout<<"Enter the array elements :";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

