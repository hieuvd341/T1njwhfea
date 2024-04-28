#include<stdio.h>
int main(){
    double gia;
    scanf("%lf", &gia);
    double cannang;
    scanf("%lf", &cannang);
    double thue;
    scanf("%lf", &thue);
    printf("%lf", gia*cannang*(1+thue/100));
    return 0;
}