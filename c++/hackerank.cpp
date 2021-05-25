#include <bits/stdc++.h>
using namespace std;


string caesarCipher(string s, int k) {
    for(int i=0;i<s.length();i++){
        if(int(s[i]) >= 97 && int(s[i]) <= 122){
            s[i] = (char)(int(s[i]) + k);
        }
    }
    return s;
}


int main()
{
    int k;
    string s;
    getline(cin, s);

    cin>>k;

    string result = caesarCipher(s, k);
    cout<<result;
    return 0;
}
