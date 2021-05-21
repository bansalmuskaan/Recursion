#include<iostream>
#include<string>
using namespace std;
void r(int n,char src,char d,char h)
{
	if(n==0)
		return;	
	r(n-1,src,h,d);
	cout<<"move from "<<src<<" to "<<d<<endl;
	r(n-1,h,d,src);
}
int main()
{
	r(3,'A','C','B');
	return 0;
}