#include <iostream>
using namespaces std;

double rerata(double a, double b)
{
    return ( a + b ) / 2;
}
string status (double d)
{
    if ( d >= 60)
    return "lulus";
    else
    return "gagal";
    {
        string status2(double r, double n)
    }
    if (r >= 60 && n >= 70)
    return "lulus";
else
return "gagal";
{

    int main()
}
double nilM, nilB;

cout << "Masukkan nilai matematika : ";
cin >> nilM;
cout << "masukkan nilai bahasa inggris : ";
cin >> nilB;

//rerata = (nilM + nilB) / 2;
//rata = rerata(nilM, nilB);
// st = status(rata);
// st = status(rerata(nilM, nilB));
cout << "status kelulusannya " << status(rerata(nilM, nilB)) << endl;
cout << "status kelulusannya 2"<<status2(rerata(nilM, nilB), nilM);