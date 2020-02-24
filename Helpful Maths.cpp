#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,answer;
	cin>>s;
	sort(s.begin(),s.end());
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1' or s[i]=='2' or s[i]=='3')
		{
			answer=s.substr(i,s.length());
			break;
		}
	}
	//cout<<answer.length()<<"\n";
	cout<<answer[0];
	for(int i=1;i<answer.length();i++)
	{
		cout<<"+"<<answer[i];
	}
	cout<<"\n";
	return 0;
}