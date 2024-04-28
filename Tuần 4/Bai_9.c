#include <stdio.h>
#include <math.h>

int main(){
    double x;
    int n;
    scanf("%lf %d",&x,&n);
    if(n<1||x<0){
        printf("Error");
        return 0;
    }

    double res = sqrt(x);
    while(n>1){
        res = sqrt(x + res);
        n--;
    }

    printf("%.4lf",res);
    return 0;
}
