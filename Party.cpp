#include<bits/stdc++.h>
using namespace std;
bool isPath(list<int> adj[],int source,int destination,int size)
{
	bool visited[size+1];
	memset(visited,false,sizeof(visited));
	queue<int>q;
	q.push(source);

	while(!q.empty())
	{
		int i=q.front();
		q.pop();
		for(auto j=adj[i].begin();j!=adj[i].end();j++)
		{
			if(*j==destination)
			{
				return true;
			}
			if(visited[*j]==false)
			{
				visited[*j]=true;
				q.push(*j);
			}
		}
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	list<int>adj[n+1];
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		if(a!=-1)
		{
			adj[i].push_back(a);
			adj[a].push_back(i);
		}
	}
	bool paired[n+1];
	int every=0;
	memset(paired,false,sizeof(paired));
	int count=0;
	for(int i=1;i<=n and every!=n;i++)
	{
		count++;
		paired[i]=true;
		every++;
		for(int j=i+1;j<=n;j++)
		{
			if((isPath(adj,i,j,n)==false and isPath(adj,j,i,n)==false) and paired[j]==false);
			{
				paired[j]=true;
				every++;
			}

		}
	}
	cout<<count<<"\n";
	return 0;
}