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
    int n;
    read(n);
    int arr[n];
    int copy[2*n];
    for(auto &c:copy)
    {
        read(c);
    }
    vector<int>v;
    for(int i=1;i<=2750131;i++)
    {
        if(isPrime(i))
        {
            v.pb(i);
        }
    }
    //cout<<"value of v[814] "<<v[814];
    bool marked[2*n];
    memset(marked,false,sizeof(marked));
    for(int i=0;i<2*n;i++)
    {
        if(isPrime(copy[i]) and marked[i]==false and copy[i]<=199999)
        {
            //cout<<"WE will be checking for "<<copy[i]<<"\n";
            FFOR(j,0,2*n)
            {
                if(copy[j]==v[copy[i]-1] and marked[j]==false)
                {
                    marked[i]=true;
                    marked[j]=true;
                    //cout<<"Found the match for "<<copy[i]<<" the match is "<<copy[j]<<"\n";
                    cout<<copy[i]<<" ";
                    break;
                }
            }
        }
        else if(isPrime(copy[i])==false and marked[i]==false)
        {
            int max=INT_MIN;
            int max_index=0;
            //cout<<"checking for the gcd for "<<copy[i]<<" \n";
            FFOR(j,0,2*n)
            {
                if(copy[i]!=copy[j] and copy[i]%copy[j]==0  and marked[j]==false and copy[j]>max)
                {
                    max=copy[j];
                    max_index=j;
                }
            }
            if(max!=INT_MIN)
            {   //cout<<"Got the match for "<<copy[i]<<" the match is "<<copy[max_index]<<"\n";
                marked[max_index]=true;
                marked[i]=true;
                cout<<copy[i]<<" ";
            }
        }
    }


}