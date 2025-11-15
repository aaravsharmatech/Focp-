q18
#include <stdio.h>
int main(){
    int n,i,j,appear=0;
    printf("How many elements in array: ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter array element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Duplicate elements: ");
    for(i=0;i<n;i++){
        int flag = 1;
        if(arr[i]!=-1){
            for(j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    flag++;
                    arr[j]=-1; //this marks the duplicate element as visited
                }
            }
            if(flag>1){
                printf("%d ", arr[i]);
                arr[i] = -1;
                appear = 1;
            }
        }
    }
    if(appear != 1){
        printf("-1");
    }
    printf("\n");
    return 0;
}
