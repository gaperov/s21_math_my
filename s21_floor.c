#include <stdio.h>

long double s21_floor(double x);

int main(){
    printf("%Lf\n%Lf\n%Lf\n", s21_floor(10.15),s21_floor(-10.15),s21_floor(2.0));
    return 0;
}

long double s21_floor(double x){
    long double y;
    int b = x;
    if (b != x){
        if (b >= 0){
            y = b;
        } else {
            y = b-1;
        }
    } else {
        y = b;
    }
    return y;
}