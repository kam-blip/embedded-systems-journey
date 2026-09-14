#include<stdio.h>
int main(){
    int i=0;
    int brr[5];
    int arr[5]={1,2,3,4,5};

    while(i<5)
    {
        int *p=&arr[i];
        brr[4-i]=*p;
        i++;
    }

    for(i=0;i<5;i++){
        printf("%d\t",brr[i]);
    }
    return 0;
}
