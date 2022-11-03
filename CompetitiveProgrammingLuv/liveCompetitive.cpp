#include<bits/stdc++.h>
using namespace std;
char upper(char);
int main(void){
    while (true)
    {
        string s;
        cin >> s;
        if (s.size() == 0)
            break;
        for (int i = 0; i < s.size(); i++)
            s[i] = upper(s[i]);
        cout<<s<<endl; 
    }
    
}

char upper(char c){
    return ('A' + (c - 'a' ));
}