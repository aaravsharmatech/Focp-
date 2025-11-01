#include <stdio.h>

int main() {
    int n, i , a ,b ;
    int even_array[100], odd_array[100] , even_count = 0, odd_count = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);
    int marks[n];

    printf("Enter %d scores: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < n; i++) {
        if (marks[i] % 2 == 0) {
            a = even_count++ ;
            even_array[a] = marks[i];
        } else {
            b = odd_count++;
            odd_array[b] = marks[i];
        }
    }

    printf("\nEven scores: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }

    printf("\nOdd scores: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    return 0;
}
