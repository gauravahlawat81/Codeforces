#include<bits/stdc++.h>
using namespace std;
void rem(string &s,const string &c)
{
	auto position=s.find(c);
	if(position==-1)
	{
		cout<<"-1\n";
		exit(0);
	}
	s.erase(0,position+1);
}
int main()
{
	#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin>>s;
	rem(s,"[");
	rem(s,":");
	reverse(s.begin(),s.end());
	rem(s,"]");
	rem(s,":");
	cout<<count(s.begin(),s.end(),'|')+4<<endl;
	return 0;
}