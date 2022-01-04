#include <iostream>
using namespace std;


void linearSearch(int a[],int n,int ele)
{ int temp=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			cout<<"Element found @ position "<<i+1<<" and index "<<i;
			temp=0;
		}
	}
	if(temp==-1)
	{
		cout<<"Element not found";
	}
}

main()
{
	int a[10],n,ele;
	cout<<"Enter the total number of elements : ";
	cin>>n;
	cout<<"Enter the array elements :";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched from the array : ";
	cin>>ele;
	linearSearch(a,n,ele);
	
}

