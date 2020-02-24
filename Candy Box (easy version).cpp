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
struct compare { 
    bool operator()(const pair<int, int>& value,  
                                const int& key) 
    { 
        return (value.first < key); 
    } 
    bool operator()(const int& key,  
                    const pair<int, int>& value) 
    { 
        return (key < value.first); 
    } 
}; 
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
        int n;
        read(n);
        vector<pair<int,int> >v;
        v.resize(n+1);
        FFOR(i,0,n+1)
        {
            v[i].first=0;
            v[i].second=int(i);
        }
        FFOR(i,0,n)
        {
            int a;
            read(a);
            v[a].first++;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        set<int>s;
        // for(auto c:v)
        // {
        //     cout<<c.second<<" "<<c.first<<"\n";
        // }
        // bool marked[n+1];
        // memset(marked,false,sizeof(marked));
        // int sum=v[0].first;
        // marked[v[0].second]=true;
        // int target=v[0].first-1;
        // while(target)
        // {
        //     FFOR(i,1,n+1)
        //     {
        //         if(v[i].first>=target and marked[v[i].second]==false)
        //         {
        //             sum+=target;
        //             //cout<<"Adding the value "<<target<<" from "<<v[i].second<<"\n";
        //             marked[v[i].second]=true;
        //             break;
        //         }
        //     }
            
        //     target-=1;
        // }
        //cout<<"Sum value is "<<sum<<"\n";
        FFOR(i,0,n+1)
        {
            if(v[i].first==0)
            {
                break;
            }
            else
            {
                if(s.find(v[i].first)==s.end())
                {
                    s.insert(v[i].first);
                }
                else
                {
                    int j=v[i].first-1;
                    for(;j>=1;j--)
                    {
                        if(s.find(j)==s.end())
                        {
                            s.insert(j);
                            break;
                        }
                    }

                }
            }
        }
        int res=0;
        //cout<<"Contents of set\n";
        for(auto it=s.begin();it!=s.end();++it)
        {
            //cout<<(*it)<<" ";
            res+=(*it);
        }
        cout<<res<<"\n";

    }

}