#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, right, left;
    unsigned n;
    cout << "Enter number: ";
    cin>>num;
    n = ~num;
    cout << "Enter left shift digit\n";
    cin >> left;
    cout << "Enter right shift digit\n";
    cin >> right;
    cout << "\nleft shift of "<< num <<" by " <<left<< " position: "<<(num <<left)<<"\n";
    cout << "right shift of "<< num <<" by " <<right<< " position: "<<(num >> right)<<"\n";
    cout << "Bitwise Not of "<< num <<": "<<n<<"\n";
}