#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool pallindrome(ll n){
    string s = to_string(n);
    string t = s ;
    reverse(s.begin(), s.end());
    if(s == t){
        return true ;
    } 
    return false ;
}
void solve(){
    ll start, end ; cin >> start >> end;
    for(int i = start ; i <= end ; i++){
        if(pallindrome(i)){
            cout << i << endl ;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}
