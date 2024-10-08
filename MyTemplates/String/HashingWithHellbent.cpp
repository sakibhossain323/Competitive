/*
⡆⣐⢕⢕⢕⢕⢕⢕⢕⢕⠅⢗⢕⢕⢕⢕⢕⢕⢕⠕⠕⢕⢕⢕⢕⢕⢕⢕⢕⢕
⢐⢕⢕⢕⢕⢕⣕⢕⢕⠕⠁⢕⢕⢕⢕⢕⢕⢕⢕⠅⡄⢕⢕⢕⢕⢕⢕⢕⢕⢕
⢕⢕⢕⢕⢕⠅⢗⢕⠕⣠⠄⣗⢕⢕⠕⢕⢕⢕⠕⢠⣿⠐⢕⢕⢕⠑⢕⢕⠵⢕
⢕⢕⢕⢕⠁⢜⠕⢁⣴⣿⡇⢓⢕⢵⢐⢕⢕⠕⢁⣾⢿⣧⠑⢕⢕⠄⢑⢕⠅⢕
⢕⢕⠵⢁⠔⢁⣤⣤⣶⣶⣶⡐⣕⢽⠐⢕⠕⣡⣾⣶⣶⣶⣤⡁⢓⢕⠄⢑⢅⢑
⠍⣧⠄⣶⣾⣿⣿⣿⣿⣿⣿⣷⣔⢕⢄⢡⣾⣿⣿⣿⣿⣿⣿⣿⣦⡑⢕⢤⠱⢐
⢠⢕⠅⣾⣿⠋⢿⣿⣿⣿⠉⣿⣿⣷⣦⣶⣽⣿⣿⠈⣿⣿⣿⣿⠏⢹⣷⣷⡅⢐
⣔⢕⢥⢻⣿⡀⠈⠛⠛⠁⢠⣿⣿⣿⣿⣿⣿⣿⣿⡀⠈⠛⠛⠁⠄⣼⣿⣿⡇⢔
⢕⢕⢽⢸⢟⢟⢖⢖⢤⣶⡟⢻⣿⡿⠻⣿⣿⡟⢀⣿⣦⢤⢤⢔⢞⢿⢿⣿⠁⢕
⢕⢕⠅⣐⢕⢕⢕⢕⢕⣿⣿⡄⠛⢀⣦⠈⠛⢁⣼⣿⢗⢕⢕⢕⢕⢕⢕⡏⣘⢕
⢕⢕⠅⢓⣕⣕⣕⣕⣵⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣷⣕⢕⢕⢕⢕⡵⢀⢕⢕
⢑⢕⠃⡈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢃⢕⢕⢕
⣆⢕⠄⢱⣄⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢁⢕⢕⠕⢁
⣿⣦⡀⣿⣿⣷⣶⣬⣍⣛⣛⣛⡛⠿⠿⠿⠛⠛⢛⣛⣉⣭⣤⣂⢜⠕⢑⣡⣴⣿
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef long double LD;
#define MAX 100
#define pi acos(-1)
#define whatis(x) cout << #x << " is " << x << "\n";
#define all(x) x.begin(), x.end()
#define endl "\n"
#define DEB cout << "TESTING" NL
#define TESTS int test; cin>>test; for(int kase = 1 ; kase <= test ; kase++) solve(kase);
#define CASEOUT cout << "Case " << testcase << ": " << 
#define YESNO cout << (possible? "YES\n" : "NO\n");
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";
#define int long long
#define pii pair<int,int>


/**+
Simple Library for String Hashing, Uses Double Hash.
Hash(abc........z) = a*p^n + b*p^(n-1) + ...... + z
In order to convert to Single Hash -
    o Delete operator overloads and fix reduce()
    o Replace all pii with LL
    o Change mp pairs to appropriate value
Or set M2 = 1, which should be nearly as fast.
Some Primes:
1000000007, 1000000009, 1000000861, 1000099999      ( < 2^30 )
1088888881, 1111211111, 1500000001, 1481481481      ( < 2^31 )
2147483647 (2^31-1),
Author: anachor
**/

namespace Hashing {
    #define ff first
    #define ss second

    const pii M = {1e9+7, 1e9+9};        ///Should be large primes
    const LL base = 1259;                ///Should be larger than alphabet size
    const int N = 1e6+7;                 ///Highest length of string

    pii operator+ (const pii& a, LL x)     {return {a.ff + x, a.ss + x};}
    pii operator- (const pii& a, LL x)     {return {a.ff - x, a.ss - x};}
    pii operator* (const pii& a, LL x)     {return {a.ff * x, a.ss * x};}
    pii operator+ (const pii& a, pii x)    {return {a.ff + x.ff, a.ss + x.ss};}
    pii operator- (const pii& a, pii x)    {return {a.ff - x.ff, a.ss - x.ss};}
    pii operator* (const pii& a, pii x)    {return {a.ff * x.ff, a.ss * x.ss};}
    pii operator% (const pii& a, pii m)    {return {a.ff % m.ff, a.ss % m.ss};}
    ostream& operator<<(ostream& os, pii hash) {
        return os<<"("<<hash.ff<<", "<<hash.ss<<")";
    }
    pii pb[N];      ///powers of base mod M

    ///Call pre before everything
    void hashPre() {
        pb[0] = {1,1};
        for (int i=1; i<N; i++)     pb[i] = (pb[i-1] * base)%M;
    }

    ///Calculates hashes of all prefixes of s including empty prefix
    vector<pii> hashList(string s) {
        int n = s.size();
        vector<pii> ans(n+1);
        ans[0] = {0,0};
        for (int i=1; i<=n; i++)    ans[i] = (ans[i-1] * base + s[i-1])%M;
        return ans;
    }

    ///Calculates hash of substring s[l..r] (1 indexed)
    pii substringHash(const vector<pii> &hashlist, int l, int r) {
        return (hashlist[r]+(M-hashlist[l-1])*pb[r-l+1])%M;
    }

    ///Calculates Hash of a string
    pii Hash (string s) {
        pii ans = {0,0};
        for (int i=0; i<s.size(); i++)  ans=(ans*base + s[i])%M;
        return ans;
    }

    ///Tested on https://toph.co/p/palindromist
    ///appends c to string
    pii append(pii cur, char c) {
        return (cur*base + c)%M;
    }

    ///Tested on https://toph.co/p/palindromist
    ///prepends c to string with size k
    pii prepend(pii cur, int k, char c) {
        return (pb[k]*c + cur)%M;
    }

    ///Tested on https://toph.co/p/chikongunia
    ///replaces the i-th (0-indexed) character from right from a to b;
    pii replace(pii cur, int i, char a, char b) {
        return (cur + pb[i] * (M+b-a)%M)%M;
    }

    ///Erases c from front of the string with size len
    pii pop_front(pii hash, int len, char c) {
        return (hash + pb[len-1]*(M-c))%M;
    }

    ///Tested on https://toph.co/p/palindromist
    ///concatenates two strings where length of the right is k
    pii concat(pii left, pii right, int k) {
        return (left*pb[k] + right)%M;
    }

    pii power (const pii& a, LL p) {
        if (p==0)   return {1,1};
        pii ans = power(a, p/2);
        ans = (ans * ans)%M;
        if (p%2)    ans = (ans*a)%M;
        return ans;
    }

    pii inverse(pii a)  {
        if (M.ss == 1)  return power(a, M.ff-2);
        return power(a, (M.ff-1)*(M.ss-1)-1);
    }

    ///Erases c from the back of the string
    pii invb = inverse({base, base});
    pii pop_back(pii hash, char c) {
        return ((hash-c+M)*invb)%M;
    }

    ///Tested on https://toph.co/p/palindromist
    ///Calculates hash of string with size len repeated cnt times
    ///This is O(log n). For O(1), pre-calculate inverses
    pii repeat(pii hash, int len, LL cnt) {
        pii mul = ((pb[len*cnt]-1+M) * inverse(pb[len]-1+M))%M;
        pii ans = (hash*mul);
        if (pb[len].ff == 1)    ans.ff = hash.ff*cnt;
        if (pb[len].ss == 1)    ans.ss = hash.ss*cnt;
        return ans%M;
    }
}


int solve(int testcase)
{
    Hashing::hashPre();
    string inp;
    cin >> inp;
    pii forwardHash = {0, 0}, reverseHash = {0, 0};
    vector <int> res;
    for(int i = 0 ; i < inp.size()-1 ; i++)
    {
        forwardHash = Hashing::append(forwardHash, inp[i]);
        reverseHash = Hashing::prepend(reverseHash, i, inp[inp.size()-1-i]);
        if(forwardHash == reverseHash) res.push_back(i+1);
    }
    for(auto x : res) cout << x << " ";
    return 0;
}

signed main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout.tie(NULL);

    solve(0);
    //TESTS
    return 0;
}

/*
THIS IS FOR SINGLE HASH
namespace Hashing {
    #define ff first
    #define ss second

    const LL M = 1e9+7;        ///Should be large primes
    const LL base = 1259;                ///Should be larger than alphabet size
    const int N = 1e6+7;                 ///Highest length of string

    ostream& operator<<(ostream& os, pii hash) {
        return os<<"("<<hash.ff<<", "<<hash.ss<<")";
    }
    LL pb[N];      ///powers of base mod M

    ///Call pre before everything
    void hashPre() {
        pb[0] = 1;
        for (int i=1; i<N; i++)     pb[i] = (pb[i-1] * base)%M;
    }

    ///Calculates hashes of all prefixes of s including empty prefix
    vector<LL> hashList(string s) {
        int n = s.size();
        vector<LL> ans(n+1);
        ans[0] = 0;
        for (int i=1; i<=n; i++)    ans[i] = (ans[i-1] * base + s[i-1])%M;
        return ans;
    }

    ///Calculates hash of substring s[l..r] (1 indexed)
    LL substringHash(const vector<LL> &hashlist, int l, int r) {
        return (hashlist[r]+(M-hashlist[l-1])*pb[r-l+1])%M;
    }

    ///Calculates Hash of a string
    LL Hash (string s) {
        LL ans = 0;
        for (int i=0; i<s.size(); i++)  ans=(ans*base + s[i])%M;
        return ans;
    }

    ///Tested on https://toph.co/p/palindromist
    ///appends c to string
    LL append(LL cur, char c) {
        return (cur*base + c)%M;
    }

    ///Tested on https://toph.co/p/palindromist
    ///prepends c to string with size k
    LL prepend(LL cur, int k, char c) {
        return (pb[k]*c + cur)%M;
    }

    ///Tested on https://toph.co/p/chikongunia
    ///replaces the i-th (0-indexed) character from right from a to b;
    LL replace(LL cur, int i, char a, char b) {
        return cur + pb[i] * (M+b-a)%M;
    }

    ///Erases c from front of the string with size len
    LL pop_front(LL hash, int len, char c) {
        return (hash + pb[len-1]*(M-c))%M;
    }

    ///Tested on https://toph.co/p/palindromist
    ///concatenates two strings where length of the right is k
    LL concat(LL left, LL right, int k) {
        return (left*pb[k] + right)%M;
    }

    LL power (const LL& a, LL p) {
        if (p==0)   return 1;
        LL ans = power(a, p/2);
        ans = (ans * ans)%M;
        if (p%2)    ans = (ans*a)%M;
        return ans;
    }

    LL inverse(LL a)  {
        return power(a, M-2);
    }

    ///Erases c from the back of the string
    LL invb = inverse(base);
    LL pop_back(LL hash, char c) {
        return ((hash-c+M)*invb)%M;
    }

    ///Tested on https://toph.co/p/palindromist
    ///Calculates hash of string with size len repeated cnt times
    ///This is O(log n). For O(1), pre-calculate inverses
    LL repeat(LL hash, int len, LL cnt) {
        LL mul = ((pb[len*cnt]-1+M) * inverse(pb[len]-1+M))%M;
        LL ans = (hash*mul);
        if (pb[len] == 1)    ans = hash*cnt;
        return ans%M;
    }
}
*/