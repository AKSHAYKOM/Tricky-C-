//first way - for very Big numbers

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin >> s ;
    
    int n = s.size();
    int sum = 0 ;
    
    for (int i = 0 ; i < n ; i++)
    {
        sum += s[i] - '0';  // Convert character to integer by subtracting '0' from it
        // For example, if s[i] is '3', then '3' - '0' will give 3 as an integer
        // '0' - 48 will give 0, '1' - '0' will give 1, and so on.
    }
    cout << sum << endl;
    return 0 ;
}


//Small Number 

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    
    int sum = 0 ;
    
    while (n > 0)
    {
        sum += n % 10; // Get the last digit of the number
        n /= 10; // Remove the last digit from the number
    }
    cout << sum << endl;
    return 0 ;
}