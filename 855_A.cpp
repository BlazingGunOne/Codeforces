#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    unordered_map<string,int> umap;
    for(int i = 1; i <= n; i++) {
        string s; cin >> s;
        umap[s]++;
        if(umap[s] == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}