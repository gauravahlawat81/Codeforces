#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int havecats[n+1];
	int original[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>havecats[i];
		original[i]=havecats[i];
	}
	list<int>adj[n+1];
	int incoming[n+1];
	int outgoing[n+1];
	int result[n+1];
	int degree[n+1];
	result[0]=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		incoming[i]=0;
		outgoing[i]=0;
		degree[i]=0;
		result[i]=INT_MIN;
	}
	for(int i=1;i<=n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
		degree[a]++;
		degree[b]++;
		incoming[b]++;
		outgoing[a]++;
		incoming[a]++;
		outgoing[b]++;
	}
	queue<int>q;
	q.push(1);
	bool visited[n+1];
	memset(visited,false,sizeof(visited));
	while(!q.empty())
	{
		int vert=q.front();
		q.pop();
		visited[vert]=true;
		//cout<<"For vertex "<<vert<<"\n";
		for(auto i=adj[vert].begin();i!=adj[vert].end();++i)
		{
			//cout<<"Visiting node "<<*i<<"\n";
			if(visited[*i]==false)
			{

				visited[*i]=true;
				if(!havecats[*i])
				{
					result[*i]=0;
					//cout<<"result array for "<<*i<<" is "<<result[*i]<<"\n";
				}
				else
				{
					if(vert==1)
					{
						result[*i]=havecats[*i]+havecats[vert];
					}
					else
					{
						result[*i]=havecats[*i]+result[vert];
					}
					
					//cout<<"result array for "<<*i<<" is "<<result[*i]<<"\n";
				}

				if(result[*i]<=m)
				{
					//cout<<*i<<" is enqueued\n";
					q.push(*i);
				}
	
			}

	
		}

	}
	// cout<<"result arrau\n";
	// for(auto c:result)
	// {
	// 	cout<<c<<" ";
	// }
	// cout<<"\n";
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(result[i]!=INT_MIN and result[i]<=m  and incoming[i]==1 and outgoing[i]==1)
		{
			count++;
		}
	}
	cout<<count<<"\n";
	return 0;
}