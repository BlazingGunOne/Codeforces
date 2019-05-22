#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int rem = 0, count = 0;
    vector<int> a;
    for(int i = 0; i < 2*n; i++) {
        string s; getline(cin >> ws, s);
        if(s == "remove") {
            rem++;
            if(a.size() > 0) {
                if(a[a.size()-1] != rem) {
                    while(a.size() != 0)
                        a.pop_back();      // only the topmost box matters which should = rem
                    count++;
                }
                else {
                    a.pop_back();
                }
            }
        }
        else {
           int len = s.length();
           s = s.substr(4, len - 4);
           int x = stoi(s);
           a.push_back(x);
        }
    }
    cout << count << endl;
}
