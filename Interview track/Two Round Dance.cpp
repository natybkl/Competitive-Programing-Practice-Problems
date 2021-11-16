#include<bits/stdc++.h>
#define ll long long

using namespace std;


ll fact(ll n) {
    ll res = 1;
    for(ll i = 1; i <= n; i++) {
        res *= i;
    }
    
    return res;
}


int main(){
   ll n;
   cin >> n;
   ll f =  fact(n);
   ll y = (n/2)*(n/2);
   f = f/y;
   cout << f/2;
}
