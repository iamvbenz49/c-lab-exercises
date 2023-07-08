#include <stdio.h>

int main() {
    int n,temp,s,rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp = n;
    s = 0;
    while(n!=0){
        rem = n%10;
        s+= rem*rem*rem;
        n/=10;
    }
    if(s==temp){
        printf("amstrong number");
    }
    else{
        printf("not an amstrong number");
    }
}
