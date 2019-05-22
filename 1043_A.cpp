#include<iostream>
#include<cmath>

using namespace std;

int main() {
  int n; cin >> n;
  int m, Max=0; double sum=0;
  for (int i = 0; i < n; i++) {
    cin >> m;
    sum += m; Max = max(Max,m);
  }
  int ans = ceil(2*sum/n);

  ans = max(Max, ans);

  if (sum == ans*n - sum)
    ans++;

  cout << ans; 
}