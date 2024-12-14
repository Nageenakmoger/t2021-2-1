#include <iostream>
using namespace std;

void generateSequence(int a) {
    int value = 1;
    for (int i = 0; i < a; i++) {
        if (i != 0) cout << ", "; // Add a comma separator for subsequent numbers
        cout << value;
        value += 2; // Increment by 2 to get the next odd number
    }
    cout << endl;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    generateSequence(a);

    return 0;
}