/*
Given a set of numbers like <10, 36, 54,89,12> , find the sum of weights based on the following conditions    
1. 5 if a perfect square    
2. 4 if multiple of 4 and divisible by 6    
3. 3 if even number
And sort the numbers based on the weight and print it as follows
<10, its_weight>, <36,its weight><89,its weight>…

Note: Should display the numbers based on increasing order.
*/

#include<stdio.h>
int isSquare(int x){
    for (int i=0;i <=x;i++){
        if(i*i == x){
            return 1;
        }
    }
    return 0;
}

int mult4_div6(int x){
    if (x%4 == 0 && x%6 == 0){
        return 1;
    }
    return 0;
}

int isEven(int x){
    if (x % 2 == 0){
        return 1;
    }
    return 0;
}
int main() {
    int n;
    scanf("%d ",&n);
    int arr[n];
    int weights[n];
    for (int i=0; i<n;i++){
        scanf("%d ", &arr[i]);
    }
    
    for (int i=0;i<n;i++){
        weights[i]=0;
        if (isSquare(arr[i])){
            weights[i]+=5;
        }
        if (mult4_div6(arr[i])){
            weights[i]+=4;
        }
        if (isEven(arr[i])){
            weights[i]+=3;
        }
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if(weights[j]>weights[j+1]){
                int temp = weights[j];
                weights[j] = weights[j+1];
                weights[j+1] = temp;

                int temp2 = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp2;
            }
        }
    }
    for (int i=0;i<n;i++){
        if (i != n-1){
            printf("{%d, %d}, ",arr[i],weights[i]);
        }
        else {
            printf("{%d, %d}",arr[i],weights[i]);
        }
    }


}