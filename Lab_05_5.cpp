// Lab_05_5

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int C(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return C(n - 1, k - 1) + C(n - 1, k);
}


int main()
{
    int lines = 0;
    cout << "Input number of lines: "; cin >> lines;
    for (int i = 0; i < lines; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << setw(3) << C(i, j);
        }
        cout << endl;
    }

    return 0;
}
