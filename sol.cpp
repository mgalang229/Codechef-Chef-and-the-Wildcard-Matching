#include <bits/stdc++.h>

using namespace std;

void decode() {
	string x, y;
	cin >> x >> y;
	int unmatch = 0;
	for (int i = 0; i < (int)x.size(); i++) {
		if (x[i] == y[i]) {
			continue;
		} else if (x[i] == '?' && isalpha(y[i])) {
			continue;
		} else if (y[i] == '?' && isalpha(x[i])) {
			continue;
		} else {
			unmatch++;
		}
	}
	if (unmatch != 0) cout << "No";
	else cout << "Yes";
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);	
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		decode();
	}
	return 0;
}
