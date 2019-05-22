#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    unordered_map<string, int> umap;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        umap[s]++;
        if(umap[s] > 1) {
            string x = s + to_string(umap[s]-1);
            cout << x << endl;
        }
        else
            cout << "OK" << endl;
    }
}