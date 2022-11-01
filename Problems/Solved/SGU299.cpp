// ----------- Collab Contest 1 ---------
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 1000001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX], road[MAX];
// int dist[MAX];

string bigsum(string a, string b)
{
    int n = a.length(), carry = 0;
    string sum;
    for(int i = n-1; i >= 0; i--)
    {
        int adig = a[i] - '0', bdig = b[i] - '0';
        int val = adig+bdig+carry;
        sum.push_back((val)%10+'0');
        carry = val/10;
    }
    if(carry) sum.push_back('1');
    reverse(sum.begin(), sum.end());
    return sum;
}

void solve(int tcase)
{
    int n;
    cin >> n;
    //
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    
    
    //printf("Case #%d: %d\n", tcase, n);
}



int main ()
{
//----------------------------------------------------------------


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

 
//----------------------------------------------------------------

    // int t;
    // cin >> t;
    // for(int tcase = 1; tcase <= t; tcase++) solve(tcase);
    

//----------------------------------------------------------------

    //
    int n;
    cin >> n;
    vector <string> a(n);
    int mxlen = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i].length() > mxlen) mxlen = a[i].length();
    }

    vector <pair<string, int>> b; 
    for(int i = 0; i < n; i++)
    {
        string temp;
        int dif = mxlen - a[i].length();
        for(int j = 0; j < dif; j++) temp.push_back('0');
        b.push_back(make_pair(temp+a[i], i)); 
    }
    sort(b.begin(), b.end());
    for(int i = 2; i < n; i++)
    {
        string x = b[i-1].first, y = b[i-2].first, z = b[i].first;
        int xi = b[i-1].second, yi = b[i-2].second, zi = b[i].second;
        string sum = bigsum(x , y);
        if(sum.length() > z.length() || sum > z)
        {
            cout << a[xi] << " " << a[yi] << " " << a[zi] << endl;
            return 0;
        }
    }
    cout << "0 0 0" << endl;

    return 0;
}