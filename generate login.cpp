#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	string s1,s2;
	cin>>s1>>s2;
	string answer;
	answer+=s1[0];
	for(int i=1;i<s1.length();i++)
	{
		if(s1[i]>=s2[0])
		{
			break;
		}
		else
		{
			answer+=s1[i];
		}
	}
	answer+=s2[0];
	cout<<answer<<endl;
	return 0;
}