#include<stdio.h>
int main(){
    int a,b,c;
    //printf("Nhap a:");
    scanf("%d", &a);
    //printf("Nhap b:");
    scanf("%d", &b);
    //printf("Nhap c:");
    scanf("%d", &c);
    int tong;
    tong =a+b+c;
    printf("%d\n", tong);
    printf("%.6f", (double)tong/3);
    return 0;
}