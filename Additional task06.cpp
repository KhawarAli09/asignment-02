#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double shoes = 100.0, cloth = 150.0, bag = 120.0;
    int quantityA, quantityB, quantityC;
    double total, total_dis, totalWithTax, After_Payment;
    int location, p_method;
    double transactionFee;
    int stockA = 10, stockB = 8, stockC = 15;

    cout << "The price of shoes is =$" << shoes << "\nThe price of cloth is =$" << cloth << "\nThe price of bag is =$" << bag << "\n";
    cout << "How many shoes do you need? We have only " << stockA << " pairs: ";
    cin >> quantityA;
    if (quantityA <= stockA) {
        cout << "The total price of shoes you buy is =$" << quantityA * shoes << endl;
    } else {
        cout << "We have limited stock!\n";
        quantityA = 0; 
    }

    cout << "How many clothes do you need? We have only " << stockB << ": ";
    cin >> quantityB;
    if (quantityB <= stockB) {
        cout << "The total price of clothes you buy is =$" << quantityB * cloth << endl;
    } else {
        cout << "We have limited stock!\n";
        quantityB = 0;
    }

    cout << "How many bags do you need? We have only " << stockC << ": ";
    cin >> quantityC;
    if (quantityC <= stockC) {
        cout << "The total price of bags you buy is =$" << quantityC * bag << endl;
    } else {
        cout << "We have limited stock!\n";
        quantityC = 0;
    }

    double shoes_p = quantityA * shoes;
    double cloth_p = quantityB * cloth;
    double bag_p = quantityC * bag;

    total = shoes_p + cloth_p + bag_p;

    if (total > 1000) {
        total_dis = total * 0.9;
        cout << "Congratulations, you got a 10% discount. \nTotal after discount: $" << total_dis << endl;
    } else {
        total_dis = total;
    }

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

    totalWithTax = total_dis * (1 + taxRate);
    cout << "Total after applying sales tax: $" << totalWithTax << endl;

    cout << "Enter Payment Method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> p_method;

    transactionFee = (p_method == 1) ? totalWithTax * 0.02 : (p_method == 2) ? totalWithTax * 0.03 : 0.0;
    After_Payment = totalWithTax + transactionFee;

    cout << "Transaction Fee: $" << transactionFee << endl;
    cout << "Total amount you pay is: $" << After_Payment << endl;

    int loyaltyPoints = (total_dis > 1000) ? 50 : 20;
    cout << "-------------------------------------\n";
    cout << "Shoes Quantity : " << quantityA << "\tPrice :\t$" << shoes_p << endl;
    cout << "Cloth Quantity : " << quantityB << "\tPrice :\t$" << cloth_p << endl;
    cout << "Bag   Quantity : " << quantityC << "\tPrice :\t$" << bag_p << endl;
    cout << "-------------------------------------\n";
    cout << "Your bill without extra charges: \t$" << total << endl;
    cout << "-------------------------------------\n";
    cout << "Total after applying sales tax: $" << totalWithTax << endl;
    cout << "Transaction Fee: $" << transactionFee << endl;
    cout << "Total amount you pay is: $" << After_Payment << endl;
    cout << "Your loyalty points are: " << loyaltyPoints << endl;
    cout << "Thanks for shopping!" << endl;

    return 0;
}
