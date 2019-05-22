#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i+1]) {
            s.erase(i, 2);
            if(i > 0)
                i -= 2;
            else
                i = -1;
        }    
    }
    cout << s << endl;
}