//
// Created by ...
// Date:

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    cout << "PROBLEM 1\n";
    // write your code for problem 1 here...

    cout << "PROBLEM 2\n";
    // write your code for problem 2 here...

    cout << "PROBLEM 3\n";
    // write your code for problem 3 here...

    cout << "PROBLEM 4\n";
    int firstOctet;
    string macAddress; // String is a datatype for sequence of characters

    cin >> macAddress; // Read the sequence of characters from input into macAdress

    std::istringstream ss(macAddress); // convert string to a special data type for hex
    ss >> std::hex >> firstOctet; // write first octet into firstOctet variable

    // write your code for problem 4 here...

    cout << "PROBLEM 5\n";
    // write your code for problem 5 here...

    return 0;
}