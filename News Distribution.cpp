#include<bits/stdc++.h>
using namespace std;
int DFS(int source,int &count,list<int> adj[],bool visited[])
{
	visited[source]=true;
	count++;
	//cout<<source<<" ";
	for(auto i=adj[source].begin();i!=adj[source].end();++i)
	{
		if(visited[*i]==false)
		{
			DFS(*i,count,adj,visited);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	list<int> adj[n+1];
	bool visited[n+1];
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		if(size)
		{
			int *arr=new int[size];
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
			for(int i=0;i<size;i++)
			{
				for(int j=0;j<size;j++)
				{
					if(i!=j)
					{
						adj[arr[i]].push_back(arr[j]);
					}
				}
			}
			delete[] arr;
		}
	}
	for(int i=1;i<=n;i++)
	{
		int count=0;
		memset(visited,false,sizeof(visited));
		//cout<<"DFS for "<<i<<" vertex\n";
		DFS(i,count,adj,visited);
		//cout<<"\n Value of count for "<<i<<"  vertex is "<<count<<"\n";
		cout<<count<<" ";
	}
	cout<<endl;
	return 0;

}