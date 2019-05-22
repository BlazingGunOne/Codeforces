#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	vector<ll> P(n,0);
	vector<int> A(n,0), B(n,0);
	for(ll &p : P) {
		cin >> p;
	} 
	for(int &a : A) {
		cin >> a;
	}
	for(int &b : B) {
		cin >> b;
	}
    int m; cin >> m;
	vector<int> C(m);
	for(int &c : C) {
		cin >> c;
	}

    set<int> s[3];

    for(int i = 0; i < n; i++) {
    	s[A[i]-1].insert(P[i]);
    	s[B[i]-1].insert(P[i]);
    }

    for(int i = 0; i < m; i++) {
		if (s[C[i] - 1].size() > 0){
			int x = *(s[C[i] - 1].begin());
    		cout << x << " ";
    	    s[0].erase(x);
    		s[1].erase(x);
    		s[2].erase(x);
    	}
    	else{
    	    cout << "-1 ";
    	}
    }		
}