#include<Stdio.h>
int main(){
    int a , b ;
    printf("What is your 1st number: ");
    scanf("%d",&a);
     printf("What is your 2nd number: ");
    scanf("%d",&b);

    while(a != b){
        if(a>b)
        a = a - b ;
        else if (b>a)
        b = b - a ;}

        printf("The hcf of the given numbers is %d",a);
        return 0 ;
 }
