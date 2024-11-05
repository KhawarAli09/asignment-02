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
    if (total_dis > 500)
     {
        total_Shipping = total_dis + 30; 
        cout << "After adding shipping, total price is = $" << total_Shipping << "\n";
    } 
    else
     {
        total_Shipping = total_dis; 
    }
    int customer;
    cout<<"Enter num \"01\"if regular customer if VIP enter \"02\" :";
    cin>>customer;
    if(customer==02)
    {
        cout<<"due to VIP customer you have 5% discount :"<<total_dis*0.95<<endl;
    }
    else{
        cout <<"your bill is :"<<total_dis<<endl;
    }
    cout << "Enter Payment Method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> p_method;
    transactionFee = (p_method == 1) ? total_Shipping * 0.02 : (p_method == 2) ? total_Shipping * 0.3 : 0.0;
    After_Payment = total_Shipping + transactionFee;
    cout << "Total amount you pay is: $" << After_Payment << endl;
    int loyaltyPoints = (total_dis > 1000) ? 50 : 20;
    cout << "Your loyalty points are: " << loyaltyPoints << endl;
    
    cout << "Thanks for shopping!" << endl;

    return 0;
}