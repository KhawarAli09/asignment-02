#include <iostream>
using namespace std;
int main() 
{
    double shoes = 100.0, cloth = 150.0, bag = 120.0;
    int quantityA, quantityB, quantityC;
    double total, total_dis;
    double total_Shipping = 0.0;
    int p_method;
    double transactionFee, After_Payment;
    cout << "The price of shoes is =$" << shoes << "\nThe price of cloth is =$" << cloth << "\nThe price of bag is =$" << bag << "\n";
    cout << "How many shoes do you need: ";
    cin >> quantityA;
    cout << "The total price of shoes you buy is =$" << quantityA * shoes << endl;
    
    cout << "How many clothes do you need: ";
    cin >> quantityB;
    cout << "The total price of clothes you buy is =$" << quantityB * cloth << endl; 
    cout << "How many bags do you need: ";
    cin >> quantityC;
    cout << "The total price of bags you buy is =$" << quantityC * bag << endl;
    total = (quantityA * shoes) + (quantityB * cloth) + (quantityC * bag);
    cout << "The total bill of all items is equal to =$" << total << "\n";
    if (total > 1000)
     {
        total_dis = total * 0.9;
        cout << "Congratulations, you got a 10% discount. Total after discount: $" << total_dis << endl;
    }
     else
      {
        total_dis = total;
    }
    int location;
cout << "Enter your location (1, 2, or 3): ";
cin >> location;

double taxRate;
if (location == 1) {
    taxRate = 0.05;
} else if (location == 2) {
    taxRate = 0.10;
} else {
    taxRate = 0.08;
}

double totalWithTax = total_dis * (1 + taxRate);
cout << "Total after applying sales tax: $" << totalWithTax << endl;
    int loyaltyPoints = (total_dis > 1000) ? 50 : 20;
    cout << "Your loyalty points are: " << loyaltyPoints << endl;
    
    cout << "Thanks for shopping!" << endl;

    return 0;
}