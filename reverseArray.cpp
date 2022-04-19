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

    cout<< "\nSorting the Array using Bubble Sort Technique..\n";
    
    reverseArray(arr, n);       
    return 0;
}

void reverseArray(int arr[], int n) {
    
    int low = 0;    
    int high = n-1;    
    while(low < high) {
        swap(arr[low], arr[high]);
        high--;
        low++;
    }

    for(int i = 0; i < n; i++ ) {
        cout<< arr[i] <<" ";
    }
}    

