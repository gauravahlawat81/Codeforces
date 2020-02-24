#include<bits/stdc++.h>
using namespace std;

bool isComposite(int n)
{
	if(n<=1)
	{
		return false;
	}
	else
	{
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
				return true;

		}

		return false;
	}

}

int main()
{
	ios_base::sync_with_stdio(false);

	int n;
	cin>>n;
	for(int i=4;i<n;i++)
	{
		if(isComposite(i)&& isComposite(n-i))
		{
			cout<<i<<" "<<n-i<<endl;
			break;
		}
	}
	return 0;
}