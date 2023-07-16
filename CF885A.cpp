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
bool checkdistanceEven(int i, int j, int m, int n)
{
    return (abs(i - j) + abs(m - n)) % 2 == 0;
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    pii vika;
    cin >> vika.f >> vika.s;
    vpii friends;
    for (int i = 0; i < k; i++)
    {
        int x;
        int y;
        cin >> x >> y;
        friends.pb(mp(x, y));
    }

    for (int i = 0; i < k; i++)
    {
        if (checkdistanceEven(vika.f, vika.s, friends[i].f, friends[i].s))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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