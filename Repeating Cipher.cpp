#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	string s,answer="";
	cin>>s;
	for(int i=1,j=1;i<=s.length();)
	{
		answer+=s[i-1];
		i=i+j;
		j++;

	}
	cout<<answer<<endl;
}