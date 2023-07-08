#include <stdio.h>

int main() {
    int n,i,j;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<2*(n-i-1);j++){
            printf(" ");
        }
        for(j=0;j<i+1;j++){
            printf("%c ",65+j);
        }
        for(j=i-1;j>=0;j--){
            printf("%c ",65+j);
        }
        printf("\n");
    }
    
}
