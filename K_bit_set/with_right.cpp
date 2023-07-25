#include <bits/stdc++.h>
using namespace std;
bool K_bit_set(int num, int right);

int main(){
    int num, right;
    cout << "Enter number: ";
    cin>>num;
    cout <<"Enter right shift number: ";
    cin >> right;

    if(K_bit_set(num, right)){
        cout <<"The " << right << "th bit is SET in the number " << num<< "\n";
    }
    else{
        cout <<"The " << right << "th bit is NOt SET in the number " << num<< "\n";
    }  
}

bool K_bit_set(int num, int right){
    int m = 1 >> right;
    return (num & m) != 0;
}