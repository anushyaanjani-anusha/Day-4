#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4},i;
    int *anu = arr;
    for (int i=0;i<4; i++){
        printf("%d",*anu+i);
        printf("%p",anu+i);
    }
}
