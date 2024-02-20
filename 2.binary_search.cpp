#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int x){
    int left = 0;
    int right = n-1;

    while(left <= right){
        int mid = left + (right-left)/2;

        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {1, 2, 5, 6, 7, 8, 10, 12, 13, 15}; //array must be sorted
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 10; //searching value

    int indx = binary_search(arr, n, x);

    if(indx != -1){
        cout << x << " is found in " << indx << " th position." << endl;
    }else{
        cout << x << " is not found." << endl;
    }

    return 0;
}