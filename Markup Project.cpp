// Markup Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This project ask for the wholesale cost of an item and its markup percentage then displays the retail price

#include <iostream>
using namespace std;


int main()
{
    double finalPrice;
    double og;
    double markup;
    cout << "This program will calculate the total cose of retail items \n";
    cout << "What is the Wholesale cost" << '\n';
    cin >> og;
        while (og < 0) {
            cout << "Price must be a value above 0\n";
            cout << "What is the Wholesale cost\n";
            cin >> og;
        }
    cout << "What is the markup percentage\n";
    cin >> markup;
        while (markup < 0 || markup > 100) {
            cout << "That is not a valid percentage. Percentage must be between 0 and 100\n";
            cin >> markup; 
        }
        finalPrice = og + (og * (markup / 100));
        cout << "Your final price is " << finalPrice << '\n';
        return 0;

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
