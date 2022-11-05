// Collab Contest 02 (IUT, RUET, KUET) 05/11/22
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007
#define MAX 100001


#define valid(nr,nc) nr>=1 && nr<MAX && nc>=1 && nc<MAX
int dr[] = {-1, 1, 0, 0};
int dc[] = { 0, 0,-1, 1};

// vector <int> adj[MAX];
// bool visited[MAX], road[MAX];
// int dist[MAX];




void solve(int tcase)
{
    int n;
    cin >> n;
    //
    // vector <int> a(n);
    // for(int i = 0; i < n; i++) cin >> a[i];
    
    
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
    
    string sounds = "clank bong click tap poing clonk clack ping tip cloing tic cling bing pong clang pang clong tac boing boink cloink rattle clock toc clink tuc";
    unordered_map <string, int> letter;
    stringstream line(sounds);
    string temp;
    int val = 0;
    while(line >> temp) letter[temp] = val++;

    int n;
    cin >> n;

    bool caps = false, shift = false;
    string result = "";
    for(int i = 0; i < n; i++)
    {
        string press;
        cin >> press;
        if(press == "pop")
        {
            if(result.empty()) continue;
            else result.pop_back();
        }
        else  if(press == "whack") result.push_back(' ');
        else  if(press == "bump") caps = !caps;
        else  if(press == "dink") shift = true;
        else  if(press == "thumb") shift = false;
        else if(caps)
        {
            if(shift) result.push_back('a'+letter[press]);
            else result.push_back('A'+letter[press]);
        }
        else
        {
            if(shift) result.push_back('A'+letter[press]);
            else result.push_back('a'+letter[press]);
        }
    }
    cout << result << endl;
    
    return 0;
}