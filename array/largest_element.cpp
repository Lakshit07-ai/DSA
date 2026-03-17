#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int largest = arr[0];
    for (int i=1; i<5; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}