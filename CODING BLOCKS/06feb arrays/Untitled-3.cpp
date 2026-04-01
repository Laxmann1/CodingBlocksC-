#include <iostram>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool repeating = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                repeating = true;
                break;
            }
        }
        if (repeating) break;
    }

    if (repeating)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
