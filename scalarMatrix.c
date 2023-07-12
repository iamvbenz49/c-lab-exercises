#include <stdio.h>

int main()
{
    int r,c;
    printf("enter rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("\nenter the element : ");
            scanf("%d",&arr[i][j]);
            arr[i][j]*=5;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
