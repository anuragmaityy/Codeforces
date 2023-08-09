#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    int a[]={5,4,3,2,1};
    if (n <= 5)
        cout<<1;
    else{
        for(int i=0; i<5; i++)
        {
            ans+=n/a[i];
            n=n%a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}