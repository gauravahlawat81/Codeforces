#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a12,a23,a34,a45;
	cout<<"? 1 2\n";
	fflush(stdout);
	cin>>a12;
	cout<<"? 2 3\n";
	fflush(stdout);
	cin>>a23;
	cout<<"? 3 4\n";
	fflush(stdout);
	cin>>a34;
	cout<<"? 4 5\n";
	fflush(stdout);
	cin>>a45;
	int a[6]={4,8,15,16,23,42};
	do
	{
		if(a[0]*a[1]==a12 and a[1]*a[2]==a23 and a[2]*a[3]==a34 and a[3]*a[4]==a45)
		{
			cout<<"! "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<"\n";
			fflush(stdout);
			return 0;
		}
	}while(next_permutation(a,a+6));
}