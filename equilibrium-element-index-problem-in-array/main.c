#include<stdio.h>
int equiIndex(int a[], int *x);
int equiIndex(int a[], int *x){
    int left= 0, sum=0, i;
    // n = sizeof(ptr)/sizeof(int);
    for(i=0;i<*x;i++){
        sum = sum + a[i];
    }
    for(i=0;i<*x;i++){
        sum = sum - a[i];
        if(sum == left){
            return i;
        }
        left = left + a[i];
    }
    return -1;
}

int main(){
    int n,i;
    printf("enter length of the array ");
    scanf(" %d", &n);
    int a[n];
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int result;
    result=equiIndex(a, &n);
    printf("index of equilibrium element is %d", result);
    return 0;
}