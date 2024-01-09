#include <bits/stdc++.h>
#define INF INT_MAX
#define ll long long
#define endl "\n"
#define pb push_back
#define M 1000000007
#define pi 2*acos(0.0)
#define fast() ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;
 
int main() {
  fast();
//   ll t;
//   cin >> t;
  
//   while (t--) {

//     }
     
    ll k ; cin >> k;
    ll bars = k-1;
    ll bugs = ((5 + bars)*(4 + bars)*(3 + bars)*(2 + bars)*(1 + bars)) / 120;
    ll idea = ((3 + bars)*(2 + bars)*(1 + bars)) / 6;
    cout << bugs * idea <<endl;
  return 0;
}
