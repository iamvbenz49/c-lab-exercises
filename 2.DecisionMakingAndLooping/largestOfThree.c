#include <stdio.h>

int main() {
    int x,y,z;
    printf("Enter x y z : ");
    scanf("%d %d %d",&x,&y,&z);
    printf("\n");
    if(x>y && x>z){
        printf("%d is greater",x);
    }
    else if(y>z){
        printf("%d is greater",y);
    }
    else{
        printf("%d is greater",z);
    }
    return 0;
}
