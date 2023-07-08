#include <stdio.h>

int main() {
    int n,sum;
    printf("ente the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nenter element %d : ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("the sum of array elements %d",sum);
}
