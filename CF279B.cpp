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

bool comparator(const pair<int, double> &a,
                const pair<int, double> &b)
{
    // return (a.second > b.second);
    if (a.second > b.second)
    {
        return true;
    }
    if (a.second == b.second)
    {
        return (a.first < b.first);
    }
    return (a.second > b.second);
}
void swapchar(string &s, int x, int y)
{
    char temp = s[x];
    s[x] = s[y];
    s[y] = temp;
}
void solve()
{
    int n, t;
    cin >> n >> t;
    vi time(n);
    fo(i, n)
    {
        cin >> time[i];
    }
    vi pt(n);
    int sum = 0, i = n - 1, j = n - 1;
    int mxl = 0;
    while (j >= 0)
    {
        sum += time[j];
        if (sum <= t)
        {
            mxl = max(mxl, i - j + 1);
            j--;
        }
        else if (sum > t)
        {
            while (sum > t)
            {
                sum -= time[i];
                i--;
            }
            if (sum <= t)
            {
                mxl = max(mxl, i - j + 1);
            }
            j--;
        }
    }
    cout << mxl << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
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