#include<iostream>
#include<string>
using namespace std;
string r(string s,int i)
{
	if(i==s.length())
		return "";
	r(s,i+1);
	cout<<s[i];
	
}
int main()
{
	string s=r("xmuskaan",0);
	cout<<s;
	return 0;
}