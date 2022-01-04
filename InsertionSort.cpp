#include <iostream>
using namespace std;

void insertionSort(int a[100],int n)
{
	int i,j=0,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		
	
		a[j+1]=temp;
	}
	cout<<"Sorted Array :";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

main()
{
	int a[100],n;
	cout<<"Enter the total number of elements : ";
	cin>>n;
	cout<<"Enter the array elements :";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insertionSort(a,n);
}

