#include<stdio.h>
int main(){
    double toan, ly, hoa;
    scanf("%lf", &toan);
    scanf("%lf", &ly);
    scanf("%lf", &hoa);
    double tong = (toan + ly + hoa);
    printf("%.6lf\n", tong);
    printf("%.6lf", tong/3);
    return 0;
}