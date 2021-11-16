#include<bits/stdc++.h>
#define ll long long

using namespace std;


ll nChoosek(ll n, ll k ) {
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    ll result = n;
    for( ll i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    
    return result;
}


int main(){
   ll n, x;
   ll res = 1;
   cin >> n;
   unordered_map<ll, ll> um;
   priority_queue<ll> pq;
   set<ll> s;
   for(ll i = 0; i < n; i++){
       cin >> x;
       um[x]++;
       pq.push(-1*x);
   }
   
  for(ll i = 0; i < 3; i++){
      s.insert(-1*pq.top()); 
      pq.pop();
  }
         
 
   ll i = 3;
   for(auto a: s){
       res *= nChoosek(um[a], min(i, um[a]));
       i -= min(i, um[a]);
   }
       
       
   cout << res;
}
