#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);

	int arr[5][5],m,n;

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]==1)
			{
				m=i;
				n=j;
			}
		}
	}

	int result=abs(m-2)+abs(n-2);
	cout<<result<<"\n";
	return 0;
}