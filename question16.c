q16
#include <stdio.h>
int main(){
    int n;
    printf("How many elements in array: ");
    scanf("%d",&n);

    int arr[n],i;

    for(i=0;i<n;i++){
        printf("Enter array element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Array before insertion:\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }printf("\n");

    int element, position,mid;

    printf("Where do you want to insert element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    scanf("%d",&position);

    printf("Enter element: ");
    scanf("%d",&element);

    if(position==1){ 
        for(i=n;i>0;i--){
            arr[i] = arr[i-1];
        }
        arr[0]=element;
    }

    else if(position==2){
        mid = n/2;
        for(i=n;i>mid;i--){
            arr[i]=arr[i-1];
        }
        arr[mid]=element;
    }

    else if(position==3){
        arr[n]=element;
    }
    else{
        printf("Invalid position!");
        return 0;
    }
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;


}
