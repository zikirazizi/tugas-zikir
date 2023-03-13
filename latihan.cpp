#include <iostream>
using namespace std;

int main (){
    // Begin
    //numeric
    int bil;
    //character status 
    string status;
    //Display "Masukkan bilangan = "
    cout << "Masukkan bialngan = ";
    //Accept bil
    cin >> bil;
    if (bil == 0)
    //status = "nol";
    status = "nol";
    //else if (bil %2 == 0)
    else if (bil % 2 == 0)

    //status = "genap"
    status = "genap";
    //else
    else
    //status = "ganjil"
    status = "ganjil";
    cout<<"bilangannya"<<status;
    }