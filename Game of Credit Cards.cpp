#include<bits/stdc++.h>
using namespace std;
bool flag1;
bool flag2;
int main()
{
	ios_base::sync_with_stdio(false);
	int digits;
	cin>>digits;
	int flick_moriarity=0,flick_sherlock=0;
	int sherlock[digits],moriarity[digits];
	for(int i=0;i<digits;i++)
	{
		cin>>sherlock[i];
	}
	for(int i=0;i<digits;i++)
	{
		cin>>moriarity[i];
	}
	sort(moriarity,moriarity+digits);
	for(int i=0;i<digits;i++)
	{
		flag1=false;
		flag2=false;
		for(int j=0;j<digits;j++)
		{
			if(moriarity[j]>sherlock[i])
			{
				flick_moriarity++;
				break;
				flag1=true;
			}
		}
		for(int k=0;k<digits;k++)
		{
			if(moriarity[k]==sherlock[i])
			{
				flag2=true;
				break;
			}
		}
		if(flag1==false and flag2==false)
		{
			flick_sherlock++;
		}
	}
}