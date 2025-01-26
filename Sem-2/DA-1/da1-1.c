/*
You are tasked with developing a program that analyzes an array containing both positive and negative numbers. Find the maximum sum of consecutive positive elements in the array and display it.
Input: {-1,11,15, -10,30}
Output: 
Max Sum : 30
Elements : {30}

Input : {25,-11,28,15,-10,30,11}
Output : 
Max Sum  : 43
Elements : {28,15}

Note : Use only one temporary 1D array to store output.  
*/
#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0;i < n; i++){
    scanf("%d",&arr[i]);
  }
  int sum = 0,high_sum = 0;
  int start = 0,tstart = 0;
  int end = 0, tend = 0;

  for (int i = 0; i<n;i++){
    if (arr[i] > 0){
      sum+=arr[i];
      tend = i;
    }
    else {
      if (sum > high_sum){
        high_sum = sum;
        start = tstart;
        end = tend;
      }
      sum = 0;
      tstart = i+1;
    }
  }
  if (sum > high_sum){
    high_sum = sum;
    start = tstart;
    end = tend;
  }

  printf("Max Sum: %d\n", high_sum);
  printf("Elements : ");
  for (int i = start; i <= end; i++){
    printf("%d ",arr[i]);
  }
}
