#include <stdio.h>

long double s21_log(double x);
long double s21_pow(long double base, double exp);

int main(){
    printf("%Lf\n", s21_pow(2.0,1.01));
    return 0;
}

long double s21_pow(long double base, double exp){
    long double eps=0.000001;
    long double y;
    if (exp==0){
        y = 1;
    } else {
        y = base;
        for (float i = 1.000001; i <= exp; i+=eps){
            y *= (base*eps);
        }
    }
    return y;
}

long double s21_log(double x){
    return 1.111+x;
}