/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r1,r2,c1,c2;
    
    printf("enter the number of rows and columns for matrix A : ");
    scanf("%d %d",&r1,&c1);
    printf("\nenter the number of rows and columns for matrix B : ");
    scanf("%d %d",&r2,&c2);
    if(r2!=c1){
        printf("not possible");
        return 0;
    }
    int arr1[r1][c1];
    int arr2[r2][c2];
    int res[r1][c2];
    printf("\nMATRIX A");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("\nenter the elements : ");
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nMATRIX B");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("\nenter the elements : ");
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nRESULT MATRIX");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r2;k++){
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
