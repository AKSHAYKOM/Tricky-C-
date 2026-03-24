#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int N = s.size();
    int ans = 0;

    int i = 0;
    while (i < N)
    {
        if (s[i] == ' ')
        {
            i++;
            continue;
        }

        int j = i;
        int cnt = 0;
        while (j < N && s[j] != ' ')
        {
            cnt++;
            j++;
        }

        if (cnt > ans)
        {
            ans = cnt;
        }

        i = j;
    }

    cout << ans << endl;
    return 0;
}