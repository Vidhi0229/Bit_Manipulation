#include <bits/stdc++.h>
using namespace std;
int Simple_method(int num);
int BK(int num);
int Lookup_Table(int num);

int main(){
    int num, Lookup[256], count = 0;
    cout << "Enter number: ";
    cin >> num;
    cout <<"no. of set bits of " <<num << " by simple method  is: " <<Simple_method(num)<<"\n";
    cout <<"no. of set bits of " <<num << " by Brian and Kerningham Algorithm  is: "<< BK(num)<<"\n";
    cout <<"no. of set bits of " <<num << " by using Lookup Table  is: "<< Lookup_Table(num)<<"\n";
}

int Simple_method(int num){
    int count = 0;
    while(num > 0){
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int BK(int num){
    int count = 0;
    while(num > 0){
        num &= (num - 1);
        count++;
    }
    return count;
}

int Lookup_Table(int num){
    int Lookup[256], count = 0;

    for (int i = 0; i < 256; ++i) {
        Lookup[i] = (i & 1) + Lookup[i / 2];
    }

    
    for (int i = 0; i < 4; ++i) {
        count += Lookup[num & 0xFF];
        num >>= 8;
    }
    return count;
}
