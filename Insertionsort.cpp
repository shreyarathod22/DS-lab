#include <iostream>
using namespace std;
int main() {
    int n = 5, key, j;
    int cards[n];
    cout<<"Name: Shreya Rathod.\n";
    cout<<"PRN:B24CE1089.\n";
    cout << "Enter random numbers on cards:\n";
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    for (int i = 1; i < n; i++) {
        key = cards[i];
        j = i - 1;
        while (j >= 0 && cards[j] > key) {
            cards[j + 1] = cards[j];
            j--;
        }
        cards[j + 1] = key;
    }
    cout << "Sorted cards:\n";
    for (int i = 0; i < n; i++) {
        cout << cards[i] << " ";
    }
    return 0;
}
