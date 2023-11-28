#include <stdio.h>

long double s21_ceil(double x);

int main(){
    printf("%Lf\n%Lf\n%Lf\n", s21_ceil(10.6),s21_ceil(-10.6),s21_ceil(2.0));
    return 0;
}

long double s21_ceil(double x){
    long double y;
    int b = x;
    if (b != x){
        if (b >= 0){
            y = b+1;
        } else {
            y = b;
        }
    } else {
        y = b;
    }
    return y;
}