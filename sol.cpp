#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // input
    int n;
    cin >> n;
    string s;
    cin >> s;
    // count the sitting and standing hamsters
    int sitting = count(s.begin(), s.end(), 'x');
    int standing = n - sitting;
    int ans = 0;
    // change the status of every hamster based on the lesser value
    for (int i = 0; i < n; i++) {
        if (sitting < standing && s[i] == 'X') {
            s[i] = 'x';
            sitting++;
            standing--;
            ans++;
        } else if (sitting > standing && s[i] == 'x') {
            s[i] = 'X';
            standing++;
            sitting--;
            ans++;
        }
    }
    // output
    cout << ans << '\n' << s << '\n';
    return 0;
}
