#include <iostream>
using namespace std;
void reverseNumber(int arr[] , int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    };
};

void printArray(int arr[], int n){
    for(int i = 0; i< n; i++){
        cout<<" "<<arr[i];
    }
    cout <<endl;
}

int main() {
    
    int numbers[5]={1,2,6,9,10};
    int size=5;
    
    reverseNumber(numbers,size);
    printArray(numbers,size);

    return 0;
}