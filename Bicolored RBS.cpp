#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	queue<int> st;
	string input;
	cin>>input;
	int turn=0;
	for(int i=0;i<input.size();i++)
	{
		if(input[i]=='(')
		{
			if(turn==0)
			{	arr[i]=0;
				turn=1;
				st.push(0);
			}
			else
			{
				arr[i]=1;
				turn=0;
				st.push(1);
			}
		}
		else
		{
			arr[i]=st.front();
			st.pop();
		}
	}
	for(auto c:arr)
	{
		cout<<c;
	}
	cout<<"\n";
	return 0;
}