#include <stdio.h>

int main() {
    int n,i,j;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=0;j<n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=i-1;j>0;j--){
            printf(" ");
        }
        for(j=0;j<n-i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
}
