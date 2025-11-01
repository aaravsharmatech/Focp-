#include <stdio.h>
int main(){
    int i , n , max , min ;

    printf("What is the number of elements in the array : ");
    scanf("%d",&n);
    int  score[n];

    for(i=0;i<n;i++){
        printf("\nenter score %d :",i+1);
        scanf("%d",&score[i]);
    }
    max = score[0] ; 
    min = score[0];
    for(i=1;i<n;i++){
        if(score[i]>max)
        max = score[i];
        if(score[i]<min)
        min = score[i];}
    printf("The maximum score is %d \n ",max);
    printf("The minimum score is %d",min);
    return 0 ;
}
