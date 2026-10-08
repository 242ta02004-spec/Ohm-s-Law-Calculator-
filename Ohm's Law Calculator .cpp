#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double V, I, R;

    cout << "==============================\n";
    cout << "      OHM'S LAW CALCULATOR\n";
    cout << "==============================\n";

    cout << "\nWhat do you want to calculate?\n";
    cout << "1. Voltage (V)\n";
    cout << "2. Current (I)\n";
    cout << "3. Resistance (R)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << fixed << setprecision(2);

    switch (choice) {

        case 1:
            cout << "Enter Current (A): ";
            cin >> I;

            cout << "Enter Resistance (Ohm): ";
            cin >> R;

            V = I * R;

            cout << "\nVoltage = " << V << " V\n";
            break;

        case 2:
            cout << "Enter Voltage (V): ";
            cin >> V;

            cout << "Enter Resistance (Ohm): ";
            cin >> R;

            if (R == 0) {
                cout << "\nError: Resistance cannot be zero.\n";
            } else {
                I = V / R;
                cout << "\nCurrent = " << I << " A\n";
            }
            break;

        case 3:
            cout << "Enter Voltage (V): ";
            cin >> V;

            cout << "Enter Current (A): ";
            cin >> I;

            if (I == 0) {
                cout << "\nError: Current cannot be zero.\n";
            } else {
                R = V / I;
                cout << "\nResistance = " << R << " Ohm\n";
            }
            break;

        default:
            cout << "\nInvalid choice!\n";
    }

    cout << "\nThank you for using the calculator!\n";

    return 0;
}
Example
==============================
      OHM'S LAW CALCULATOR
==============================

What do you want to calculate?
1. Voltage (V)
2. Current (I)
3. Resistance (R)
Enter your choice: 2

Enter Voltage (V): 12
Enter Resistance (Ohm): 6

Current = 2.00 A
