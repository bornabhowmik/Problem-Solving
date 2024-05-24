#include <iostream>
#include <algorithm> // For the sort function
using namespace std;

int main() {
    int a, b, c;

    // Read the three integers
    cin >> a >> b >> c;

    // Store the original order
    int original[3] = {a, b, c};

    // Store the values in another array for sorting
    int sorted[3] = {a, b, c};

    // Sort the array
    sort(sorted, sorted + 3);

    // Print the sorted values
    for (int i = 0; i < 3; ++i) {
        cout << sorted[i] << endl;
    }

    // Print a blank line
    cout << endl;

    // Print the values in the original order
    for (int i = 0; i < 3; ++i) {
        cout << original[i] << endl;
    }

    return 0;
}
