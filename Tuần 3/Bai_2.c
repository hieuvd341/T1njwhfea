#include<stdio.h>
#define PI 3.14159
int main(){
    double r;
    double chuvi, dientich;
    scanf("%lf", &r);
    if(r <= 0) {
        printf("ERROR");
        return 1;
    }
    chuvi = 2*PI*r;
    dientich = r*r*PI;
    printf("%.6lf\n", chuvi);
    printf("%.6lf", dientich);
    return 0;
}