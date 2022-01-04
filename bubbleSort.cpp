#include <iostream>
using namespace std;

void bubbleSort(int a[],int n)
{
	int i,j,temp,flag;
	for(i=0;i<n-1;i++)
	{flag=0;
		for(j=0;i<n-1-i;j++)
		{ 
			if(a[j]>a[j+1])
			{
			    temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	cout<<"Sorted Array :";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
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
	bubbleSort(a,n);
}

