#include <stdio.h>

int main() {
    int n,i,j;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<(n-i)*2;j++){
            printf(" ");
        }
        for(j=0;j<2*i +1;j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=(n-i+1)*2;j>0;j--){
            printf(" ");
        }
        for(j=0;j<2*i -1;j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }
}
