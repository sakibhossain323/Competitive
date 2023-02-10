#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001




void solve(int tcase)
{
    int n;
    cin >> n;
    
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector <int> points1, points2;
    ll total1 = 0, total2 = 0;

    for(int i: a)
    {
        if(i > 0)
        {
            points1.push_back(i);
            total1+= i;
        }
        else
        {
            int ipos = abs(i);
            points2.push_back(ipos);
            total2+= ipos;
        }
    }
    
    string seq1, seq2;
    int indx = 0;
    while(indx < (int)points1.size() && indx < (int)points2.size())
    {
        if(points1[indx] == points2[indx])
        {
            indx++;
            continue;
        }
        else if(points1[indx] > points2[indx]) seq1+="1", seq2+="0";
        else seq2+="1", seq1+="0";
        indx++;
    }

    if(indx < (int)points1.size()) seq1+="1", seq2+="0";
    else if(indx < (int)points2.size()) seq2+="1", seq1+="0";

    

    if(total1 == total2 && seq1 == seq2)
    {
        if(a.back() > 0) cout << "first\n";
        else cout << "second\n";
    }
    else if(total1 == total2)
    {
        if(seq1 > seq2) cout << "first\n";
        else cout << "second\n";
    }
    else if(total1 > total2) cout << "first\n";
    else cout << "second\n";

}


void local_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //--------------------------------------------------
    
    local_io();

    //---------------------------------------------------

    int t = 1;
    // cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    
    

    return 0;
}