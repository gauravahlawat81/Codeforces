#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w,h,w1,h1,w2,h2;
	cin>>w>>h>>w1>>h1>>w2>>h2;
	for(int i=h;i>=0;i--)
	{
		if(i==h)
		{
			w+=i;
			if(w<=0)
			{
				w=0;
			}
			//cout<<w<<" ";
		}
		if(i==h1)
		{
			w+=i;
			w-=w1;
			if(w<=0)
			{
				w=0;
			}
			//cout<<w<<" ";
		}
		if(i==h2)
		{
			w+=i;
			w-=w2;
			if(w<=0)
			{
				w=0;
			}
			//cout<<w<<" ";
		}
		if(i!=h and i!=h1 and i!=h2)
		{
			w+=i;
			if(w<=0)
			{
				w=0;
			}
			// cout<<w<<" ";
		}
	}
	cout<<endl<<w<<endl;

}