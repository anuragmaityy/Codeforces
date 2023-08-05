#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,m,a;
    cin>>n>>m>>a;
    cout<<ceil((ceil((double) n / a)) * (ceil((double)m / a)));
    return 0;
}