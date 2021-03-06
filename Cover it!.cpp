#include <bits/stdc++.h>
using namespace std;
#define FOR(i, j, k) for (int i = (j); i <= (k); i++)
#define FFOR(i, j, k) for (int i = (j); i < (k); i++)
#define DFOR(i, j, k) for (int i = (j); i >= (k); i--)
#define bug(x) cerr << #x << " = " << (x) << '\n'
#define pb push_back
#define mp make_pair
#define bit(s, i) (((s) >> (i)) & 1LL)
#define mask(i) ((1LL << (i)))
#define builtin_popcount __builtin_popcountll
#define __builtin_popcount __builtin_popcountll
using ll = long long;
using ld = long double;
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
const ld pi = acos(0) * 2;
template <typename T>
inline void read(T &x)
{
    char c;
    bool nega = 0;
    while ((!isdigit(c = getchar())) && (c != '-'))
        ;
    if (c == '-')
    {
        nega = 1;
        c = getchar();
    }
    x = c - 48;
    while (isdigit(c = getchar()))
        x = x * 10 + c - 48;
    if (nega)
        x = -x;
}
template <typename T>
inline void writep(T x)
{
    if (x > 9)
        writep(x / 10);
    putchar(x % 10 + 48);
}
template <typename T>
inline void write(T x)
{
    if (x < 0)
    {
        putchar('-');
        x = -x;
    }
    writep(x);
}
template <typename T>
inline void writeln(T x)
{
    write(x);
    putchar('\n');
}
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
#define taskname "C"
int main()
{
#ifdef Gaurav
    if (fopen(taskname ".in", "r"))
        freopen(taskname ".in", "r", stdin);
#endif // Gaurav
    int t;
    read(t);
    while(t--)
    {
        int v,e;
        cin>>v>>e;
        vector<int>adj[v+1];
        while(e--)
        {
            int a,b;
            read(a),read(b);
            adj[a].pb(b);
            adj[b].pb(a);
        }
        int level[v+1];
        bool visited[v+1];
        for(int i=1;i<=v;i++)
        {
            level[i]=0;
            visited[i]=false;
        }
        queue<int>q;
        q.push(1);
        visited[1]=true;
        while(!q.empty())
        {
            int vert=q.front();
            q.pop();
            for(auto it=adj[vert].begin();it!=adj[vert].end();++it)
            {
                if(visited[*it]==false)
                {
                    q.push(*it);
                    level[*it]=level[vert]+1;
                    visited[*it]=true;
                }
            }
        }
        vector<int>odd;
        vector<int>even;
        for(int i=1;i<=v;i++)
        {
            if(level[i]&1)
            {
                odd.pb(i);
            }
            else
            {
                even.pb(i);
            }
        }
        if(odd.size()<even.size())
        {
            cout<<odd.size()<<"\n";
            for(auto c:odd)
            {
                cout<<c<<" ";
            }
        }
        else
        {
            cout<<even.size()<<"\n";
            for(auto c:even)
            {
                cout<<c<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}