#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
float price, stride, tax = -1, end_price;

int main(){
    string input_s = "INPUT PART";
    cout << input_s <<"\n" << setfill('=') << setw(input_s.length()) << "" << endl;

    while (price < 0.1)
    {
        cout << "Enter first price: " << setfill(' ');
        cin >> price;
        if (price < 0.1)
        {
            cout << "ERROR: First price must be at least 0 (zero) SEK" << endl;
        }
    }

    while (end_price < price)
    {
        cout << "Enter last price" << setw(3) << ": ";
        cin >> end_price;
        if (end_price < price)
        {
            cout << "ERROR: Last price must be higher than first price" << endl;
        }
    }
    
    while (stride < 0.1)
    {
        cout << "Enter stride"<< setw(7) << ": ";
        cin >> stride;
        if (stride < 0.1)
        {
            cout << "ERROR: Stride must be at least 0.1" << endl;
        }
    }

    while (tax < 0 || tax > 100)
    {
        cout << "Enter tax percent: ";
        cin >> tax;
        if (tax < 0.00 || tax > 100.00)
        {
            cout << "ERROR: Tax percent must be between 0 and 100" << endl;
        }
    }
    tax = tax/100;

    string table_s = "TAX TABLE";
    cout << "\n" << table_s << "\n" << setfill('=') << setw(table_s.length()) << "" << setfill(' ') << endl;
    cout << setw(12) << "Price" << setw(10) << "Tax" << setw(22) << "Price with tax" << endl;
    cout << setfill('-') << setw(45) << " " << setfill(' ') << endl;
    float tax_price, tax_cost;
    while (price <= end_price)
    {
        tax_cost = price * tax;
        tax_price = price + tax_cost;
        cout << fixed << setprecision(2) << setw(12) << price << setw(10) << tax_cost << setw(22) << tax_price << endl;
        price += stride;
    }
    

}
