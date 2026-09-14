#include<stdio.h>
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int i=0;
int *p=arr;
while(p<arr+10){
    if((*p)%2==0){
        printf("%d\t",*p);
    }
    p++;

}
return 0;
}
