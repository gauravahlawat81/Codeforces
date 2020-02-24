#include<bits/stdc++.h>
using namespace std;
int main()
{
	string st,answer="";
	cin>>st;
	transform(st.begin(),st.end(),st.begin(),::tolower);
	//cout<<st<<"\n";
	for(int i=0;i<st.length();)
	{
		if(st[i]=='a' or st[i]=='e' or st[i]=='i' or st[i]=='o' or st[i]=='u' or st[i]=='y')
		{
			i++;
		}
		else
		{
			answer+=".";
			answer+=st[i];
			i++;
		}
	}
	cout<<answer<<"\n";
	return 0;
	
}