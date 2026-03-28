#include <iostream>
using namespace std;    
int main()
{
    int n;
    cin >> n;

    int originalNum = n;
    int sum = 0;
    int temp = n;

    while (n > 0)
    {
        int rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if (sum == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}