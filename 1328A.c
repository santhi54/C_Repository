#include <stdio.h>

int main() {
    int n,i,a,b,c,rem;
    c=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        scanf("%d %d",&a,&b);
        rem=a%b;
        if(rem!=0){
            printf("%d",b-rem);
        }
        else{
        printf("0");  
    }
    }
    return 0;
}