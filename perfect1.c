#include<stdio.h>
void main(){

    int num,c;
    
    printf("Enter a no.: ");
    scanf("%d",&num);
    int b=0;
    for(int i=1;i<=num;i++){
        if(num %i==0){
            b=b+i;
            
        }
       
    }
if(num==b-num)    {
    printf("Perfect number");
}
else{
    printf("Not a perfect number");
}
    }
    
