#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, str;
    cin>>s;
    str="hello";
    int j=0;
    int len = s.length();
    for (int i=0; i<len; i++){
        if (s[i] == str[j]){
            j++;
        }
    }
    if (j == str.length()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}