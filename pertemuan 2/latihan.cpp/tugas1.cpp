#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double PI = 3.14;
    double jari, volume, permukaan;

    cout << "Masukkan jari-jari bola: ";
    cin >> jari;

    volume = (4.0 / 3.0) * PI * pow(jari, 3);
    permukaan = 4 * PI * pow(jari, 2);

    cout << "Volume bola: " << volume << endl;
    cout << "Luas permukaan bola: " << permukaan << endl;

    return 0;
}