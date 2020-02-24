#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	char arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	int count=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(arr[i][j]=='W')
			{
				if(((i-1)>=0) and arr[i-1][j]=='P')
				{
					count++;
				}
				else if(((i+1)<r) and arr[i+1][j]=='P')
				{
					count++;
				}
				else if(((j-1)>=0) and arr[i][j-1]=='P')
				{
					count++;
				}
				else if(((j+1)<c) and arr[i][j+1]=='P')
				{
					count++;
				}
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}