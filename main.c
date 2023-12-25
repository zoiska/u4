#include <stdio.h>
#include <stdbool.h>

void printBinary(float num);

int main(){

    // Aufg 4.1
    int monat = 2;
    printf("In Monat %d, ist es ", monat);
    switch(monat){
        case 2:
        case 3:
        case 4:
            printf("Frühling\n");
            break;
        case 5:
        case 6:
        case 7:
        case 8:
            printf("Sommer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Herbst\n");
            break;
        case 12:
        case 1:
            printf("Winter\n");
            break;
    }

    // Aufg 4.2
    char operator = '/';
    double x = 12;
    double y = 3;
    if(operator == '+') {
        printf("%f\n", x + y);
    }
    else if(operator == '-'){
        printf("%f\n", x - y);
    }
    else if(operator == '*'){
        printf("%f\n", x * y);
    }
    else if(operator == '/'){
        printf("%f\n", x / y);
    }

    // Aufg 4.3
    int a, b, min;
    a = 8, b = 4;
    min = (a < b) ? a : b;
    printf("Das Minimum von %d und %d ist %d\n", a, b, min);

    // Aufg 4.4
    int c, d, e;
    c = 4, d = 4, e = 6;
    if(c == d && c == e){
        printf("Das Dreieck ist gleichseitig.\n");
    }
    else if (c == d || c == e || d == e){
        printf("Das Dreieck ist gleichschenklig.\n");
    }

    // Aufg 4.5
    bool esIstTag, esRegnet, esIstBewoelkt, esIstFeiertag, unglaublicheInDerStadt;
    esIstTag = 0;
    esIstBewoelkt = 1;
    esRegnet = 0;
    esIstFeiertag = 1;
    unglaublicheInDerStadt = 0;
    if(unglaublicheInDerStadt || !esIstTag && !esRegnet || esIstTag && esIstBewoelkt || esIstFeiertag && esIstBewoelkt && !esRegnet) {
        printf("Der Einsiedler geht raus.\n");
    }
    else {
        printf("Der Einsiedler geht nicht raus.\n");
    }

    // Aufg 4.6 a
    for(int i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }

    // Aufg 4.6 b
    for(int i = 1; i <= 100; i++) {
        if(i != 100) {
            printf("%d, ", i);
        }
        else {
            printf("%d\n", i);
        }
    }

    // Aufg 4.6 c
    for(int i = 100; i >= 1; i--) {
        if(i != 1) {
            printf("%d, ", i);
        }
        else {
            printf("%d\n", i);
        }
    }

    // Aufg 4.6 d
    int num1 = 1;
    for(int i = 1; i <= 20; i++) {
        if(i != 20) {
            printf("%d, ", num1);
            num1 += num1;
        }
        else {
            printf("%d\n", num1);
            num1 += num1;
        }
    }

    // Aufg 4.6 e (Fibonacci)
    int num2 = 1;
    int num3 = 1;
    printf("1 1 ");
    for(int i = 0; i < 50; i++) {
        int num4 = num2 + num3;
        printf("%d ", num4);
        num2 = num3;
        num3 = num4;
    }
    printf("\n");

    // Aufg 4.Pro
    float f = 1;
    float g = 0.1;
    float summe = 0.0;

    for(int i = 1; i <= 10; i++) {
        summe = summe + g;
    }
    if(summe == f) {
        printf("Summe ist gleich f.\n");
    }
    else {
        printf("Summe nicht gleich f.\n");
    }
    printf("f: %f\n", f);
    printBinary(f);
    printf("summe: %f\n", summe);
    printBinary(summe);

    return 0;
}

void printBinary(float num) {
    unsigned int* intPtr = (unsigned int*)&num;
    printf("Binärdarstellung von %f:\n", num);
    for (int i = 31; i >= 0; i--) {
        int bit = (*intPtr >> i) & 1;
        printf("%d", bit);
        if (i == 31 || i == 23) {
            printf(" ");
        }
    }
    printf("\n");
}