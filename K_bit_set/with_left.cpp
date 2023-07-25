#include <bits/stdc++.h>
using namespace std;
bool K_bit_set(int num, int left);

int main(){
    int num, left;
    cout << "Enter number: ";
    cin>>num;
    cout <<"Enter left shift number: ";
    cin >> left;

    if(K_bit_set(num, left)){
        cout <<"The " << left << "th bit is SET in the number " << num<< "\n";
    }
    else{
        cout <<"The " << left << "th bit is NOt SET in the number " << num<< "\n";
    }  
}

bool K_bit_set(int num, int left){
    int m = 1 << left;
    return (num & m) != 0;
}