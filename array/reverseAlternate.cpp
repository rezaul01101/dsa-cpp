// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void reverseAlternateNumber(int arr[] , int n){
    for(int i=0; i<n;i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i< n; i++){
        cout<<" "<<arr[i];
    }
    cout <<endl;
}

int main() {
    
    int numbers[5]={1,2,7,8,5};
    int numbersTwo[8]={1,2,7,8,5,4,5,7};
    int size=5;
    
    reverseAlternateNumber(numbers,size);
    reverseAlternateNumber(numbersTwo,8);
    // printArray(numbers,size);
    printArray(numbersTwo,8);

    return 0;
}