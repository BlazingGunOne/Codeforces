#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> A(n);
		vector<int> B(n);
		vector<int> C(n);
		for(int i = 0; i < n; i++) {
			cin >> A[i];
			A[i] -= 1;
			cin >> B[i];
		}
		int factor = A[0]; // curr time
		for(int i = 0; i < n; i++) {
			factor = factor > A[i] ? factor : A[i];
			if(factor+1 <= B[i]) {
			    factor++;
			    C[i] = factor;
			}
			else {
			    C[i] = 0;
			}
		}
		for(int c : C)
		    cout << c << " ";
		cout << endl;
	}
}