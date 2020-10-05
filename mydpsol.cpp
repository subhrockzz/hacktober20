#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define ld long double
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define inf 999999999
const ll mod = 1000000007;
int n;
int a[10001];
bool ready[10001];int value[10001];
int dp(int x)
{
    if(x < 0)
    {
        return inf;
    }
    if(x == 0)
    {
        return 0;
    }
    if(ready[x])return value[x];
    int best = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        best = min(best, dp(x-a[i])+1);
    }
    value[x]  = best;
    ready[x]  = true;
    return best;
}
void mycode()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target; cin >> target;
    cout << dp(target);
}
int main()
{
    SPEED
    int t = 1;
   // cin >> t;
    while(t--)
    {
        mycode();
    }
    return 0;
}
