#include <stdio.h>
int main() {
    int a,b,i;
    i=0;
    scanf("%d %d",&a,&b);
    while(a<=b){
      a=a*3;
      b=b*2;
      i=i+1;
    }
    printf("%d",i);
    return 0;
}