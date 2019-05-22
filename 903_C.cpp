#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> A(n);
    for(int &a : A) {
        cin >> a;
    }
    sort(A.begin(),A.end());
    int check = A[0];
    int count = 0, num = 0;
    for(int a : A) {
	    if(a == check) {
		    count++;
	    }
	    else {
		    check = a;
		    num = max(count, num);
		    count = 1;
	    }
	    num = max(count, num);
    }
    cout << num << endl;
}