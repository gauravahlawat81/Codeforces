#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int arr[3];
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	sort(arr,arr+3);
	int count=0;
	while(n!=0)
	{

		for(int i=arr[0];n>0;i+=arr[0])
		{
			int x = n-arr[0];
			if(x%arr[0]==0 or x%arr[1]==0 or x%arr[2]==0)
			{
				count++;
				n=x;
			}
			else
			{
				break;
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}