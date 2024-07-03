// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1973/A
#include <iostream>
#include <algorithm>
#include <set>
#include <time.h>
#include <vector>
#include <string>
#include <map>
#include <string>
#include <stack>
#include <iomanip>
#include <bitset>
#include <random>
#include <queue>
#include <unordered_map>
using namespace std;
#define MOD 20020303
#define N 200009
typedef long long ll;
typedef long double ld;
typedef double db;
// typedef unsigned long long ll;

int t, p1, p2, p3;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {    
          cin >> p1 >> p2 >> p3;
          if ((p1 + p2 + p3) & 1) cout << "-1\n";
          else cout << min((p1 + p2 + p3) / 2, p1 + p2) << '\n';
     }
     return 0;
}
// DINH VAN TUNG
