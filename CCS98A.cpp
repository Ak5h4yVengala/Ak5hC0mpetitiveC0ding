#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define forn(i, a, b) for (int i = (a); i <= (b); ++i)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define sortallr(x) sort(allr(x))
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6 + 13, M = N;
//=======================
// vi g[N];
// int a[N];
// int n, m, k;
//=======================

bool comparator(const pair<int, int> &a,
                const pair<int, int> &b)
{
    return (a.second < b.second);
}
void solve()
{
    int a1, a2, a3, b1, b2, b3;
    int x, y, z;
    cin >> x >> y >> z;
    b1 = x;
    b2 = y;
    b3 = z;
    a1 = y * z;
    a2 = x * z;
    a3 = x * y;
    if (a1 % b1 == 0)
    {
        cout << a1 << " " << b1 << endl;
        return;
    }
    else if (a2 % b2 == 0)
    {
        cout << a2 << " " << b2 << endl;
        return;
    }
    else if (a3 % b3 == 0)
    {
        cout << a3 << " " << b3 << endl;
        return;
    }
    else
    {
        cout << "-1" << endl;
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void takeinput()
{
    int n;
    cin >> n;
    vi arr;
    fo(i, n)
    {
        int m;
        cin >> m;
        arr.push_back(m);
    }
}