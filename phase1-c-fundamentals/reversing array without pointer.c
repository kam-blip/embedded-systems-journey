#include<stdio.h>
int main(){
int arr[5]={10,20,30,40,50};
reverse_array(arr);
}
void reverse_array(int arr[]){
    int n=5;
    for(int i=n-1;i>0;i--){
        int *p=&arr[i];
        printf("%d\t",*p--);
        printf("%d\n",*p);
    }
}



