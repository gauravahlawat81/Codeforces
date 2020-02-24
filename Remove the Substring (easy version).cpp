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
bool check(string s,string t)
{
    int i=0;
    int j=0;
    while(i<int(s.size()) and j<int(t.size()))
    {
        if(s[i]==t[j])
        {
            j++;
        }
        i++;
    }
    if(j==int(t.length()))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
#ifdef Gaurav
    if (fopen(taskname ".in", "r"))
        freopen(taskname ".in", "r", stdin);
#endif // Gaurav
    string s,t;
    cin>>s>>t;
    int l1=int(s.size());
    int l2=int(t.size());
    int res=0;
    for(int i=0;i<l1;i++)
    {
        for(int j=i;j<l1;j++)
        {
            string demo="";
            for(int k=0;k<l1;k++)
            {
                if(k<i or k>j)
                {
                    demo+=s[k];
                }
            }
            // string removed="";
            // for(int m=i;m<=j;m++)
            // {
            //     removed+=s[m];
            // }
            if(check(demo,t))
            {
                //cout<<"the demo string wass "<<demo<<"\n";
                //cout<<"and length of substring removed "<<j-i+1<<"\n";
                //cout<<"and the removed substring was "<<removed<<"\n";
                res=max(res,j-i+1);
            }
        }
    }
    cout<<res<<"\n";
    return 0;

}