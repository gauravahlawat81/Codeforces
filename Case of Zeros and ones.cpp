#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char arr[n];
	int one=0,zero=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]=='0')
			zero++;
		else
			one++;
	}
	int min1=min(one,zero);
	min1*=2;
	cout<<n-min1<<endl;
}