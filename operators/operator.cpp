#include <bits/stdc++.h>
using namespace std;
vector<bool> Add(vector<bool> a, vector<bool> b);
vector<bool> Or(vector<bool> a, vector<bool> b);
vector<bool> Xor(vector<bool> a, vector<bool> b);

int main(){
    vector<bool> a {false, false, true, true};
    vector<bool> b {false, true, false, true};
    vector<bool> AND = Add(a,b);
    vector<bool> OR = Or(a,b);
    vector<bool> XOR = Xor(a,b);
    int s = a.size();

    cout <<"\nAnd operation\n";
    for(int i = 0; i < s; i++){
        cout << a[i] << " && " << b[i] <<": "<< AND[i] <<"\n";   
    }

    cout <<"\nOr operation\n";
    for(int i = 0; i < s; i++){
        cout << a[i] << " || " << b[i] <<": "<< OR[i] <<"\n";   
    }

    cout <<"\nXor operation\n";
    for(int i = 0; i < s; i++){
        cout << a[i] << " ^ " << b[i] <<": "<< XOR[i] <<"\n";   
    }

}

vector<bool> Add(vector<bool> a, vector<bool> b){
    vector <bool> result;
    int s = a.size();
    for(int i = 0; i < s; i++){
        result.push_back(a[i] and b[i]);
    }
    return result;
}

vector<bool> Or(vector<bool> a, vector<bool> b){
    vector <bool> result;
    int s = a.size();
    for(int i = 0; i < s; i++){
        result.push_back(a[i] or b[i]);
    }
    return result;
}

vector<bool> Xor(vector<bool> a, vector<bool> b){
    vector <bool> result;
    int s = a.size();
    for(int i = 0; i < s; i++){
        result.push_back(a[i] xor b[i]);
    }
    return result;
}

