#include<stdio.h>
int i,num,isprime;
int main(){
    printf("enter the sum starting from positive 2");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){

       if(num%2==0){
           printf("it is not a prime\n");
       }
       else{
           printf("it is a prime\n");
       }
    }
}
       
