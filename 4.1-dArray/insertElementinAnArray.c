#include <stdio.h>

int main() {
    int n,pos,e,i;
    printf("ente the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n-1;i++){
        printf("\nenter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray before inserting : ");
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter element and index to insert : ");
    scanf("%d %d",&e,&pos);
    i=n;
    while(i>pos-1){
        arr[i] = arr[i-1];
        i-=1;
    }
    arr[pos-1] = e;
    printf("\nArray after inserting : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
