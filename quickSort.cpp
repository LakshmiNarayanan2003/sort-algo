#include <iostream>
using namespace std;

int partition(int a[],int lb, int ub)
{
	int pivot=a[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			int temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
	}
	int temp1=a[lb];
	a[lb]=a[end];
	a[end]=temp1;
	return end;
}

void quickSort(int a[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=partition(a,lb,ub);
		quickSort(a,lb,loc-1);
		quickSort(a,loc+1,ub);
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
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

