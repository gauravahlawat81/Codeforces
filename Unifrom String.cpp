#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int j=1;
		string answer="";
		for(char i='a';i<='z'&& answer.length()!=n;i++,j++)
		{
			answer+=i;
			if(j==k)
			{
				i='a'-1;
				j=0;
			}

		}
		cout<<answer<<"\n";

	}
	return 0;
}