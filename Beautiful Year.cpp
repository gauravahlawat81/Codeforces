#include<bits/stdc++.h>
using namespace std;
bool distinct(int n)
{
	int a=n/1000;
	int b=(n/100)%10;
	int c=(n/10)%10;
	int d=n%10;

}
int main()
{
	int n;
	cin>>n;
	for(int i=n+1;;i++)
	{
		int a=i/1000;
		int b=(i/100)%10;
		int c=(i/10)%10;
		int d=i%10;
		if(a==b or a==c or a==d or b==c or b==d or c==d)
		{
			continue;
		}
		else
		{
			cout<<i<<"\n";
			return 0;
		}

	}
}