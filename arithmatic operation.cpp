#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int p, q, opt;
    
    cout << "Enter any two numbers:\n";
    cin >> p >> q;

    cout << "\n######## Choose a option from these ########\n\n";
    cout << "1 - To do sum operation on two numbers\n";
    cout << "2 - To do differences operation on two numbers\n";
    cout << "3 - To do multiplication operation on two numbers\n";
    cout << "4 - To do division operation on two numbers\n";
    cout << "5 - To do modulus operation on two numbers\n\n";

    cin >> opt;
    cout << endl;

    switch (opt) 
	{
        case 1:
		{
            int sum = p + q;
            cout << "SUM:\t" << p << " + " << q << " = " << sum << "\n";
            break;
        }

        case 2: 
		{
            int sub = p - q;
            cout << "DIFFERENCE:\t" << p << " - " << q << " = " << sub << "\n";
            break;
        }

        case 3: 
		{
            int mul = p * q;
            cout << "PRODUCT:\t" << p << " * " << q << " = " << mul << "\n";
            break;
        }

        case 4: 
		{
            float div = (float)p / q;
            cout << "QUOTIENT:\t" << p << " / " << q << " = " << div << "\n";
            break;
        }

        case 5:
		{
            int mod = p % q;
            cout << "MODULUS:\t" << p << " % " << q << " = " << mod << "\n";
            break;
        }

        default:
            cout << "You choosed the wrong option!\n";
    }
    
    return 0;

