#include <iostream>
using namespace std;

void reverseArray(int arr[], int n);
int main() {
    int arr[50], n, i;
    
    cout<< "Enter the Size (max. 50): ";
    cin>> n;
    
    cout<< "Enter "<<n<<" Numbers: ";
    for( i = 0; i < n; i++) 
        cin>> arr[i];

    cout<< "\nmaximum and minimum number of an array3.\n";
    
    reverseArray(arr, n);       
    return 0;
}

void reverseArray(int arr[], int n) {
    
    int min = 0;    
    int max = 0;    
    for(int i = 1; i < n; i++) {
        if(arr[min] > arr[i])
           min = i;
        if(arr[max] < arr[i])
           max = i;
    }
    cout<< "maximum: " << arr[max] <<endl;
    cout<< "minimum: " << arr[min] <<endl;
}    

