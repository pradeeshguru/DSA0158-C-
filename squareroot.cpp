#include <iostream>
#include <cmath>  

using namespace std;  

int main() {
    double number, result;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Square root of a negative number is not real." << endl;
    } else {
        result = sqrt(number);  
        cout << "The square root of " << number << " is " << result << endl;
    }

    return 0;
}