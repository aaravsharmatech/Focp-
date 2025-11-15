q15
#include <stdio.h>
int main(){
    int n;
    printf("How many elements in array? ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Original array: {");

    for(int k=0;k<n;k++){
        printf("%d",arr[k]);
        if(k==n-1)
            break;
        printf(",");
    }printf("}\n");

    int last = arr[n-1];

    for(int j=n-1;j>0;j--){
        arr[j] = arr[j-1];
    }
    arr[0] = last;


    printf("Array after cyclic clockwise rotation by one: {");
    for(int m=0;m<n;m++){
        printf("%d",arr[m]);
        if(m==n-1)
            break;
        printf(",");
    }printf("}");

}
