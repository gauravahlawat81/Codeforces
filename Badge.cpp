#include<bits/stdc++.h>
using namespace std;
int BFS(list<int>adj[],int source,int size)
{
	bool visited[size+1];
	memset(visited,false,sizeof(visited));
	queue<int>q;
	q.push(source);
	visited[source]=true;
	while(!q.empty())
	{
		int vert=q.front();
		q.pop();
		for(auto i=adj[vert].begin();i!=adj[vert].end();++i)
		{
			if(visited[*i]==true)
			{
				return (*i);
			}
			else
			{
				visited[*i]=true;
				q.push(*i);
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	list<int> adj[n+1];
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		adj[i].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<BFS(adj,i,n)<<" ";
	}
	cout<<"\n";
	return 0;
}