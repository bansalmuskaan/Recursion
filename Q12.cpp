#include<iostream>
#include<string>
using namespace std;
string r(string s,string ans)
{
	if(s.length()==0)
	{	cout<<ans<<endl;
		return "";
	}
	char ch=s[0];
	string ros=s.substr(1);
	r(ros,ans);
	r(ros,ans+ch);
	
}
int main()
{
	string s=r("abc","");
	cout<<s;
	return 0;
}