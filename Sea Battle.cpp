#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w1,h1,w2,h2;
	cin>>w1>>h1>>w2>>h2;
	unsigned long long int x=((w2+2)*(h1+h2+2))-(w1*h1+w2*h2)+((w1-w2)*(h1+2));
	cout<<x<<endl;
	return 0;
}