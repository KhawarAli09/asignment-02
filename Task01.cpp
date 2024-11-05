#include<iostream>
using namespace std;
int main()
{
    double shoes, cloth, bag;
    int quantityA, quantityB, quantityC;
    int total;
    shoes=100;
    cloth=150;
    bag =120;
    cout<<"The price of shoes is=$"<<shoes<<"\nthe price of cloth is=$"<<cloth<<"\nthe price of bag is=$"<<bag<<"\n";
    cout<<"How many shoes you need :";
    cin>>quantityA;
    cout<<"The total price of shoes you buy is =$"<<quantityA*shoes<<endl;
    cout<<"How many clothes you need :";
    cin>>quantityB;
    cout<<"The total price of clothes you buy is =$"<<quantityB*cloth<<endl;
    cout<<"How many bags you need :";
    cin>>quantityC;
    cout<<"The total price of bags you buy is =$"<<quantityC*bag<<endl;
    total =(quantityA*shoes)+(quantityB*cloth)+(quantityC*bag);
    cout<<"The total bill of all thins is equal to =$"<<total<<"\n";
    cout <<"Thanks for shoping";  
}