#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int x){
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 5, 3, 7, 4, 8, 10, 15, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 8; //searching value

    int indx = linear_search(arr, n, x);

    if(indx != -1){
        cout << x << " is found in " << indx << " th position." << endl;
    }else{
        cout << x << " is not found." << endl;
    }

    return 0;
}