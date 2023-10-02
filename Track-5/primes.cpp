#include<bits/stdc++.h>
 
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int a[n + 1];
    unordered_set<int> primes;
    
    for(int i = 2; i <= n; i++){
        if(a[i] == 1){
            continue;
        }
        primes.insert(i);
        for(int j = i; j <= n; j+=i){
            a[j] = 1;
        }
    }
    
    for(int b: primes){
        int complement = n - b;
        if(primes.find(complement) != primes.end()){
            cout << b << " " << complement <<endl;
            return 0;
        }
    }
    
    cout << -1 <<endl;
    return 0;
}
