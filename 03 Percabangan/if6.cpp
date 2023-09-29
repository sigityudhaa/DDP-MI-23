#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int velue;
    cin >> velue;
    if (velue < 0){
        cout<< "Negatif\n";
        } else if (velue%2==0){
        cout<< "Positif Genap\n";
    } else if (velue%2==1){
        cout<< "Positif Ganjil\n";
    }
    return 0;
}
