#include <stdio.h>

int main()
{
    int n = 5;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j=1;j<2*i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            printf(" ");
        }
        for(int j=1;j<2*(n-1-i);j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
