#include <bits/stdc++.h>
using namespace std;
bool Power_of_2(int number);


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (Power_of_2(num)) {
        std::cout << num << " is a power of 2." << "\n";
    } else{
        std::cout << num << " is not a power of 2." << "\n";
    }
}

bool Power_of_2(int number) {
    return (number > 0) && ((number & (number - 1)) == 0);
}