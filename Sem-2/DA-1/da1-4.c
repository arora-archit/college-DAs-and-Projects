/*
Given the input of order nxn. Print the Latin square matrix of nxn
Input: 6
Output: 1 2 3 4 5 6
        2 3 4 5 6 1
        3 4 5 6 1 2
        4 5 6 1 2 3
        5 6 1 2 3 4
        6 1 2 3 4 5
*/

#include <stdio.h>
int rotate(int arr[],int n, int r){
    for (int i = 0; i < r; i++) {
        int first = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        arr[i] = i+1;
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i=0;i<n-1;i++){
        rotate(arr,n,1);
        printf("\n");
    }
}