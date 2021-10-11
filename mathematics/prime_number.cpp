**Program to Check whether a no. is prime or not-**

#include <iostream>
using namespace std;
int main()
{
    int num;
    int index = 0;
    cout << "Enter a number ";
    cin >> num;
    for (int i = 2; i <= num / 2; ++i)
    {
        // condition for non-prime
        if (num % i == 0)
        {
            index = 1;
            break;
        }
    }
    if (num == 1)
    {
        cout << num << " is neither prime nor composite" << endl;
    }
    else
    {
        if (index == 0)
            cout << num << " is a prime number" << endl;
        else
            cout << num << " is not a prime number" << endl;
    }
}
