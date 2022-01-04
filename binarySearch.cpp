#include <iostream>
using namespace std;


int binarySearch(int a[],int left, int right,int ele)
{ 
	int mid;
	while(left<=right)
	{
		mid=left+(right-left)/2;
		if(a[mid]==ele)
		{
			return mid;
		}
		else if(a[mid]<ele)	
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	return -1;
}

main()
{
	int a[10],n,ele,result;
	cout<<"Enter the total number of elements : ";
	cin>>n;
	cout<<"Enter the array elements :";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched from the array : ";
	cin>>ele;
	result=binarySearch(a,0,n-1,ele);
	if(result==-1)
	{
		cout<<"Element not found";
	}
	else
	{
		cout<<"Element found at index : "<<result;
	}
}

