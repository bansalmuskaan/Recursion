#include<iostream>
#include<string>
using namespace std;
void r(string s,string ans)
{
	if(s.length()==0)
	{	cout<<ans<<endl;
		return ;
	}
	char ch=s[0];
	string ros=s.substr(1);
	int as=ch;
	r(ros,ans);
	r(ros,ans+ch);
	r(ros,ans+to_string(as));
}
int main()
{
	r("ab","");
	return 0;
}