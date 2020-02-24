#include<bits/stdc++.h>
using namespace std;
bool check(int n,int length)
{
	int number=10;
	for(int i=1;i<=length;i++)
	{
		if(n%number==0 or n%number==1)
		{
			return true;
		}
		n/=10;
	}
	return false;
}
int main()
{
	int n,length;
	cin>>length>>n;
	bool flag=check(n,length);
	if(flag)
	{
		string s=to_string(n);
		string answer="";
		sort(s.begin(),s.end());
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0' or s[i]==1)
			{
				continue;
			}
			else if(s[i]=='2')
			{
				answer+="2";
			}
			else if(s[i]=='3')
			{
				answer+="3";
			}
			else if(s[i]=='4')
			{
				answer+="322";
			}
			else if(s[i]=='5')
			{
				answer+="5";
			}
			else if(s[i]=='6')
			{
				answer+="53";
			}
			else if(s[i]=='7')
			{
				answer+="7";
			}
			else if(s[i]=='8')
			{
				answer+="7222";
			}
			else if(s[i]=='9')
			{
				answer+="7332";
			}
			cout<<answer<<endl;

		}
	}
	else
	{
		cout<<n<<endl;
	}

	return 0;

}