#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch[n];
    int anton=0, danik=0;
    for (int i=0; i<n; i++){
        cin>>ch[i];
    }
    for (int i=0; i<n; i++){
        if (ch[i]=='A')
            anton++;
        else
            danik++;
    }
    if ( anton > danik)
        cout<<"Anton";
    else if (danik > anton)
        cout<<"Danik";
    else
        cout<<"Friendship";

    return 0;
}