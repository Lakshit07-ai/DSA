#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,5,2,8,5};
    int Largest=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>Largest)
            Largest=arr[i];
    }
    int SecondLargest=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>SecondLargest && arr[i]<Largest)
            SecondLargest=arr[i];
    }
    cout<<"The second largest element is: "<<SecondLargest<<endl;
    return 0;
}