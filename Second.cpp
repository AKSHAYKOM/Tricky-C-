#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int N = s.size();
    int i = 0;

    while (i < N) {
        int j = i;
        int cnt = 0;

        while (j < N && s[i] == s[j]) {
            cnt++;
            j++;
        }
        cout << s[i] << cnt;
        i = j;
    }
    cout << endl;
                 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
