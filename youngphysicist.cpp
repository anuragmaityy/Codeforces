#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n], y[n], z[n], s1=0, s2=0, s3=0;
    for (int i=0; i<n; i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    for (int i=0; i<n; i++){
        s1 += x[i];
        s2 += y[i];
        s3 += z[i];
    }
    if ( s1==0 && s2==0 && s3==0 ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}