#include <stdio.h>
#include <stdlib.h>

int *a;
int n, tmp;

int main(){
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int*));
    for(int i = 0; i < n; i++)
        scanf("%d", a + i);

    printf("The input array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    // sap xep gia tri tang dan
    for (int i = 0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            int *p1 = a+j;
            int *p2 = a+j+1;
            if (*p1 > *p2) {
                tmp = *p1;
                *p1 = *p2;
                *p2 = tmp;
            }
        }
    }
    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    delete [] a;
    return 0;
}