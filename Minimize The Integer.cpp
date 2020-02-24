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
        string s;
        cin>>s;
        bool flag=true;
        while(flag)
        {
            flag=false;
            for(int i=s.length()-1;i>=0;i--)
            {
                int num1=int(s[i]);
                int num2=int(s[i-1]);
                if((num1%2==0 and num2&1) or (num1&1 and num2%2==0))
                {
                    flag=true;
                    if(num1&1)
                    {
                        int pos2=i-1;
                        string copy="";
                        while(num2%2==0)
                        {
                            num2=int(s[pos2]);
                            copy+=char(num2);
                            pos2--;
                        }
                        s[pos2]=char(num1);
                        for(int j=pos2+1,k=0;j<=i and k<copy.length();j++,k++)
                        {
                            s[j]=copy[k];
                        }
                    }
                    else
                    {
                        int pos2=i-1;
                        string copy="";
                        while(num2&1)
                        {
                            num2=int(s[pos2]);
                            copy+=char(num2);
                            pos2--;
                        }
                        s[pos2]=char(num1);
                        for(int j=pos2+1,k=0;j<=i and k<copy.length();j++,k++)
                        {
                            s[j]=copy[k];
                        }   
                    }
                }
            }
        }
    }

}