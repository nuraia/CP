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
  ll t;
  cin >> t;

  while (t--) {
    string s, pat; cin >> s>>pat;

    int sl = s.length(), patl = pat.length();
    int j = 0, c = 0;
    vector<int > v;

     for(int i = 0; i<sl; i++){
         j = i;
         if(s[i]==pat[0]){
            for(int k=0; k<patl; k++){
                if(s[j] != pat[k]) break;
                j++;
            }
            if(j-i ==patl ) {
                c++;
                v.push_back(i+1);
                i = j-1;
            }
         }
     }
    if( c > 0){
        cout<<c<<endl;
        for(int i = 0; i<c; i++) {
            cout<<v[i];
            if(i < c-1) cout<<" ";}
        cout <<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    cout<<endl;
    }


  return 0;
}
