#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string str1, str2;
    cin>>str1;
    int len = str1.length();
    for (int i=0; i<len; i++){
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'y' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U' || str1[i] == 'Y'){
            continue;
        }
        else{
            str2 += '.';
            str2 += tolower(str1[i]);
        }
    }
    cout<<str2;
    return 0;
}
