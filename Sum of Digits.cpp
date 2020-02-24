#include<bits/stdc++.h>
using namespace std;
int sum_of_digits(int n)
{
	int sum=0;
	while(n)
	{
		int x=n%10;
		sum+=x;
		n/=10;
	}
	//cout<<"sum is "<<sum<<endl;
	return sum;
}
int main()
{
	int n;
	cin>>n;
	int count=0;
	while(n/10)
	{
		//cout<<n<<endl;
		n= sum_of_digits(n);
		//cout<<n<<" ";
		count++;
	}
	cout<<count<<endl;
}