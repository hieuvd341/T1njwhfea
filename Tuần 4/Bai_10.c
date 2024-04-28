#include <stdio.h>
#include <math.h>

int main(){
    double x,sum=1;
    int n;
    scanf("%lf %d",&x,&n);
    if(n<1||x<0){
        printf("Error");
        return 0;
    }

    for(int i=1;i<n+1;i++){
        sum+=pow(x,i)/i;
    }
    printf("%.4lf",sum);
    return 0;
}
