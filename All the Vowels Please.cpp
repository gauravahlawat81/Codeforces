#include<bits/stdc++.h>
using namespace std;
tuple<int,int>printDivisors(int n) 
{ int a=-1;
int b=-1;
int count=0;
vector<int> v;
bool flag=true;
	for (int i=2;i<n;i++) 
	{	if (n%i==0) 
		{
			v.push_back(i);
		}
	}
	if(v.size()<2)
	{
		cout<<"-1\n";
		exit(0);
	}			
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(((v[i]*v[j])==n) and v[i]>=5 and v[j]>=5)
			{
				return make_pair(v[i],v[j]);
			}
		}
	}
	cout<<"-1\n";
	exit(0);
}
bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 

int main()
{
	int n;
	cin>>n;
	if(n<=24)
	{
		cout<<"-1\n";
		exit(0);
	}
	int a,b;

	if(isPerfectSquare(n))
	{
		a=sqrt(n);
		b=a;
	}
	else
	{
		//cout<<"callin\n";
	tie(a,b)=printDivisors(n);
	}
	char arr[a][b];
	//cout<<"a and b are "<<a<<" "<<b<<"\n";
	arr[0][0]='a';

	for(int i=1;i<a;i++)
	{
		if(arr[i-1][0]=='a')
		{
			arr[i][0]='e';
		}
		if(arr[i-1][0]=='e')
		{
			arr[i][0]='i';
		}
		if(arr[i-1][0]=='i')
		{
			arr[i][0]='o';
		}
		if(arr[i-1][0]=='o')
		{
			arr[i][0]='u';
		}
		if(arr[i-1][0]=='u')
		{
			arr[i][0]='a';
		}
	}
	for(int i=0;i<a;i++)
	{
		for(int j=1;j<b;j++)
		{
		if(arr[i][j-1]=='a')
		{
			arr[i][j]='e';
		}
		if(arr[i][j-1]=='e')
		{
			arr[i][j]='i';
		}
		if(arr[i][j-1]=='i')
		{
			arr[i][j]='o';
		}
		if(arr[i][j-1]=='o')
		{
			arr[i][j]='u';
		}
		if(arr[i][j-1]=='u')
		{
			arr[i][j]='a';
		}
		}
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<arr[i][j];
		}
	}
	cout<<"\n";
	return 0;
}