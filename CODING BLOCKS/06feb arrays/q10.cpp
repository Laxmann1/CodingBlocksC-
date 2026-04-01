//reversetherangeofarraylefttoright
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l, r;
    cin >> l >> r; 

    for (int i = l, j = r; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

   
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
