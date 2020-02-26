#include <bits/stdc++.h>
using namespace std;
#define N 1000000007
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
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
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
bool check_if_same(string s,int x,int y)
{
    int res_x=0;
    int res_y=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='L')
        {
            res_x--;
        }
        else if(s[i]=='R')
        {
            res_x++;
        }
        else if(s[i]=='U')
        {
            res_y++;
        }
        else
        {
            res_y--;
        }
        
    }
    if(res_x==x and res_y==y)
    {
        return true;
    }
    return false;
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
        int n=4;
        read(n);
        string s;
        cin>>s;
        //s="LUDR";
        int x=0;
        int y=0;
        map<pair<int,int >,int > visited;
        pair<int,int> current = {0,0};
        visited[current] = 0;
        int l = -1;
        int r = n;
        bool flag=false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
            {
                current.first--;
            }
            if(s[i]=='R')
            {
                current.first++;
            }
            if(s[i]=='U')
            {
                current.second++;
            }
            if(s[i]=='D')
            {
                current.second--;
            }
            //cout<<"After "<<i+1<<" moves "<<current.first<<" "<<current.second<<"\n";
            if(visited.find(current)!=visited.end())
            {
                //cout<<"Cycle detected\n";
                //cout<<current.first<<" "<<current.second<<"\n";
                flag=true;
                if((i-visited[current]+1)<(r-l+1))
                {
                    //cout<<"Point of cycle "<<visited[current]<<"\n";
                    l = visited[current];
                    r = i;
                }
            }
            visited[current]=i+1;

        }

        if(flag)
        {
            cout<<l+1<<" "<<r+1<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;

}