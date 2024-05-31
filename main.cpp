#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float bill_amount;
    float discount = 0.0;
    cout << "Enter your bill amount: ";
    cin >> bill_amount;
    if(bill_amount < 100) {
        cout << "no discount";
    } else if (bill_amount >= 100 && bill_amount < 500) {
        discount = bill_amount * 10/100;
        cout << discount;
    } else if (bill_amount >= 500) {
        discount = bill_amount * 20/100;
        cout << discount;
    }
    return 0;
}
