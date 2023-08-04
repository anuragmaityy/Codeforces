#include<bits/stdc++.h>
using namespace std;
#define FAST() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair

bool is_prime(ll n){for(ll i=2 ; i*i<=n ; i++){if(n%i==0){return 0;}}return 1;}
bool is_square(ll x){ll sq=sqrt(x);return sq*sq==x;}
ll lcm(ll num1, ll num2) {return (num1*num2)/__gcd(num1, num2);}
//divisors of a number ==> for(ll i=2 ; i*i<=n ; i++){if(n%i==0){divisors.push_back(i);if(n/i != i){divisors.push_back(n/i);}}}

void solve(){
    ll n;
    cin>>n;

    vector<ll>divisors;
    set<ll>sett;

    for(ll i=1 ; i*i<=100000 ; i++){if(n%i==0){sett.insert(i);if(n/i != i){sett.insert(n/i);}}}

    for(auto x : sett) divisors.pb(x);

    sort(divisors.rbegin() , divisors.rend());

    ll t = divisors.size();
    //for(ll i = 0 ; i < t ; i++) cout<<divisors[i]<<" ";

    ll cnt = 1 , ans = 1;
    for(ll i = 1 ; i < t ; i++){
        if(divisors[i - 1] - divisors[i] == 1) cnt += 1;
        else cnt = 1;
        
        ans = max(cnt , ans);
    }
    cout<<ans<<endl;
}

int32_t main(){
    FAST();
    ll n;
    cin>>n;
    while(n--)solve();
    return 0;
}