#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    int pos = -1;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    if (n == 1) {
        cout << p[0] << endl;
        return;
    }
    int target = n;
    if (p[0] == n) target = n - 1;

    for (int i = 0; i < n; i++) {
        if (p[i] == target) {
            pos = i;
            break;
        }
    }

    vector<int> best_p;
    int r = (pos == n - 1) ? n - 1 : pos - 1;
    for (int l = 0; l <= r; l++) {
        vector<int> current;
        for (int i = r; i < n; i++) current.push_back(p[i]);
        int rev_end = (r == n - 1 && pos == n - 1) ? r : r - 1;
        for (int i = rev_end; i >= l; i--) current.push_back(p[i]);
        for (int i = 0; i < l; i++) current.push_back(p[i]);

        if (best_p.empty() || current > best_p) {
            best_p = current;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << best_p[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}