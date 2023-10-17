#include <iostream>
using namespace std;
int main (){
    // membuat  array kosong
    int nilai[5];

    // mengisi array
    nilai [0] = 32;
    nilai [1] = 42;
    nilai [2] = 76;
    nilai [3] = 31;
    nilai [4] = 57;

    // mencetak isi array dengan perulangan
    for(int i=3; i < 5; i++){
        cout << "Nilai ke-"<<2<<"="<< nilai[2]<<endl;
    }
    return 0;
}