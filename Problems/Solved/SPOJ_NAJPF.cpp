#include <bits/stdc++.h>
using namespace std;


using ll = long long;
#define caseout(n) cout << "Case " << n << ": "
#define nln "\n"

#define MOD 1000000007
#define MAX 1000001


class HashedString {
	private:
		static const long long M = 1e9 + 7;
		static const long long B = 256;

		
		static vector<long long> pow;

		
		vector<long long> p_hash;
	public:
		HashedString(const string& s) : p_hash(s.size() + 1) {
			while (pow.size() < s.size()) {
				pow.push_back((pow.back() * B) % M);
			}

			p_hash[0] = 0;
			for (int i = 0; i < s.size(); i++) {
				p_hash[i + 1] = ((p_hash[i] * B) % M + s[i]) % M;
			}
		}

		long long getHash(int start, int end) {
			long long raw_val = (
				p_hash[end + 1] - (p_hash[start] * pow[end - start + 1])
			);
			return (raw_val % M + M) % M;
		}
};
vector<long long> HashedString::pow = {1};


void solve(int tcase)
{
    // int n;
    // cin >> n;
    
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];

    string a, b;
    cin >> a >> b;
    int alen = a.length(), blen = b.length();
    HashedString hashed_a(a), hashed_b(b);

    vector <int> pos;
    for(int i = 0; i+blen-1 < alen; i++)
    {
        ll a_hash = hashed_a.getHash(i, i+blen-1);
        ll b_hash = hashed_b.getHash(0, blen-1);

        if(a_hash == b_hash) pos.push_back(i+1);
    }

    if(pos.empty()) cout << "Not Found";
    else
    {
        cout << (int) pos.size() << nln;
        for(int i: pos) cout << i << " ";
    }
    cout << nln << nln;
    
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

    int t;
    cin >> t;
    for(int tcase = 1; tcase <= t; tcase++) solve(tcase);

    //---------------------------------------------------
    

    
    
    return 0;
}