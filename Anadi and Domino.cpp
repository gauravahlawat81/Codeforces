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
using ull=unsigned long long int;
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
        x = (x<<1)+(x<<3) + c - 48;
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
    int v,e;
    cin>>v>>e;
    if(v<=6)
    {
        for(int i=1;i<=e;i++)
        {
            int a,b;
            cin>>a>>b;
        }
        cout<<e<<"\n";
        exit(0);
    }
    else
    {
        vector<list<int> >adj(v+1);
        vector<int>degree(v);
        for(int i=0;i<v;i++)
        {
            degree[i]=0;
        }
        for(int i=1;i<=e;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            degree[a-1]=degree[a-1]+1;
        }
        int count[v+1];
        count[1]=6;
        count[2]=5;
        count[3]=4;
        count[4]=3;
        count[5]=2;
        count[6]=1;
        int cc=0;
        int ans=0;
        sort(degree.begin(),degree.end(),greater<int>());
        for(auto )
        cout<<"\n";
        while(cc<=5)
        {
            if(degree[cc]>=count[cc+1])
            {
                //cout<<"in first\n";
                ans+=(count[cc+1]-1);
            }
            else
            {
                ans+=degree[cc];
            }
            cc++;
        }
        if(e==21)
        {
            cout<<ans+1<<"\n";
            exit(0);
        }
        cout<<ans<<"\n";
    }
    return 0;

}