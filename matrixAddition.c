/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int m,n;
    printf("enter a dimension of matrix : ");
    scanf("%d %d",&m,&n);
    int arr1[m][n],arr2[m][n],res[m][n];
    printf("\nFor matrix A");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("\n enter the element : ");
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nFor matrix B");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("\n enter the element : ");
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nMatrix A\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\nResult C\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
