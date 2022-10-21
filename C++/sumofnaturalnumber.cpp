#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}
/*Output

Enter a positive integer: 50
Sum = 1275
This program assumes that user always enters positive number.

If user enters negative number, Sum = 0 is displayed and program is terminated.

This program can also be done using recursion. Check out this article for calculating sum of natural numbers using recursion.

Share on:
Did you find this article helpful?

Related Examples
C++ Example

Find Sum of Natural Numbers using Recursion

C++ Example

Print Number Entered by User

C++ Example

Calculate Factorial of a Number Using Recursion

C++ Example

Calculate Average of Numbers Using Arrays


Join our newsletter for the latest updates.
Enter Email Address*
Join


Tutorials
Python 3 Tutorial
JavaScript Tutorial
SQL Tutorial
C Tutorial
Java Tutorial
Kotlin Tutorial
C++ Tutorial
Swift Tutorial
C# Tutorial
Go Tutorial
DSA Tutorial
Examples
Python Examples
JavaScript Examples
C Examples
Java Examples
Kotlin Examples
C++ Examples
Company
About
Advertising
Privacy Policy
Terms & Conditions
Contact
Blog
Youtube
Apps
Learn Python
Learn C Programming
Learn Java
© Parewa Labs Pvt. Ltd. All rights reserved.

   */
