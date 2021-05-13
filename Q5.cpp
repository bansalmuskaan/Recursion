//Find the first and last occurrence of an element using recursion

#include<iostream>
using namespace std;
int f(int a[],int n,int key,int i)
	{
		if(i==n)
			return -1;
		if(a[i]==key)
			return i;
		return f(a,n,key,i+1);
		
	}
int l(int a[],int n,int key,int i)
	{
		if(i==n)
			return-1;
		int restArray=l(a,n,key,i+1);
		if (restArray != -1) 
			return restArray;
		if(a[i]==key)
			return i;
		else
			return -1;
		
	}
int main()
	{
		int n,key,i=0;
		cout<<"enter the number of elements:";
		cin>>n;
		int *a=new int(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<"enter the number u want to search for:";
		cin>>key;
		cout<<f(a,n,key,i)<<endl;
		cout<<l(a,n,key,i)<<endl;
		return 0;
	}