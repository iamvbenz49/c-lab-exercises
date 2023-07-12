#include <stdio.h>

int main()
{
    int m,n;
    printf("enter a dimension of matrix : ");
    scanf("%d %d",&m,&n);
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("\n enter the element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    int a = arr[0][0];
    int b = arr[0][1];
    int c = arr[0][2];
    
    int d = arr[1][0];
    int e = arr[1][1];
    int f = arr[1][2];
    
    int g = arr[2][0];
    int h = arr[2][1];
    int i = arr[2][2];
    
    int det = (a*((e*i)-(f*h))) - (b*((d*i)-(f*g))) + (c*((h*d)-(g*e)));
    printf("the determinant is %d",det);
}
