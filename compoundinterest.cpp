#include <iostream>
using namespace std;

int main() {
    double presentvalue = 50000.0;
    double interestrate = 8;
    int n = 5;
    double interestazeem= interestrate/100;
    double futurevalue = presentvalue;
    for (int i = 0; i < n; ++i)
        {
        double interest = futurevalue * interestazeem;
        futurevalue = futurevalue + interest;
    }
    cout << "Annual Compound Interest of coursemate Investment \n";
    cout << "Principal Amount:Naira " << presentvalue << endl;
    cout << "Annual Interest Rate:" << interestazeem << endl;
    cout << "Interesst years:" << n << " years" << endl;
    cout << "coursemate Interest:Naira " << futurevalue << endl;
    cout << "AZEEM OLAMIDE RAZAAQ - Software Engineering\n 24-15939" << endl;

    return 0;
}
