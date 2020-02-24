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
    long long int n;
    cin>>n;
    long long int arr[n];
    for(auto &c:arr)
    {
        cin>>c;
    }
    //long long int negative=0;
    //long long int positive=0;
    // //static long long int table[n][n];
    // //table = vector<vector<int> > (n, vector<int>(n));
    // int** table = new int*[n];
    // for(int i = 0; i < n; ++i)
    // table[i] = new int[n];
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]<0)
    //     {
    //         table[i][i]=-1;
    //     }
    //     else
    //     {
    //         table[i][i]=1;
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(i!=j)
    //         {
    //             table[i][j]=56;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[j]<0)
    //         {
    //             if(table[i][j-1]==-1)
    //             {
    //                 table[i][j]=1;
    //             }
    //             else
    //             {
    //                 table[i][j]=-1;
    //             }
    //         }
    //         else
    //         {
    //             if(table[i][j-1]==-1)
    //             {
    //                 table[i][j]=-1;
    //             }
    //             else
    //             {
    //                 table[i][j]=1;
    //             }
    //         }
    //     }
    // }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(table[i][j]==1)
    //         {
    //             positive++;
    //         }
    //         else if(table[i][j]==-1)
    //         {
    //             negative++;
    //         }
    //     }
    // }
    int np=0;
    int p=0;
    for(int i=0;i<n;i++)
    {
        //bool negative;
        int negative=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<0)
            {
                negative++;
            }
            if(negative&1)
            {
                np++;
            }
            else
            {
                p++;
            }
        }
    }
    cout<<np<<" "<<p<<"\n";
    return 0;

}