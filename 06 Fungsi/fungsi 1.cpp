#include <iostream>
using namespace std;

void myFunction () {
    cout << "I just got executed";
}

void myFunction2 (string name = "sigit" , int umur = 19) {
    cout << "Nama saya : " << name << " umur saya : " << umur << endl;
}

int myFunction3 (int x){
    return 5 + x;
}

    int main () {
    myFunction(); 
    myFunction();
    myFunction();

    myFunction2();
    myFunction2("budi", 15);
    myFunction2("kubil", 17);

cout << myFunction3(17) << endl; // 22
cout << myFunction3(25) << endl; // 30
cout << myFunction3(30) << endl; // 35


int velue1 = myFunction3(18); // 23
cout << velue1 << endl;



return 0;
}
