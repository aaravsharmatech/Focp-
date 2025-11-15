q13
#include <stdio.h>
int main(){
    int n;
    printf("How many elements in array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter array element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){
        if(j==0){
            if(arr[0]>=arr[1])
            printf("%d is peak\n",arr[0]);
        }
        if(j==n-1){
            if(arr[n-1]>=arr[n-2])
            printf("%d is peak\n",arr[n-1]);
        }
        else{
            if(arr[j] >= arr[j-1] && arr[j] >= arr[j+1])
            printf("%d is peak\n",arr[j]);
        }
    }
    return 0;
}
