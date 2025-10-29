#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
    char figure;
    float S;

    printf("I will calculate the area of your figure\n\n");
    printf("Choose your figure:\nCircle - c\nSquare - s\nRectangle - r\nOval - o\n\n");
    scanf(" %c", &figure);
    printf("\n");

    if (figure == 'c') {
        float pi = 3.14159265;
        float r;
        printf("r = ");
        scanf(" %f", &r);
        S = pi * powf(r, 2);
        printf("\nS = %f", S);
    } else if (figure == 's') {
        float a;
        printf("a = ");
        scanf(" %f", &a);
        S = powf(a, 2);
        printf("\nS = %f", S);
    } else if (figure == 'r') {
        float a;
        float b;
        printf("a = ");
        scanf(" %f", &a);
        printf("b = ");
        scanf(" %f", &b);
        S = a * b;
        printf("\nS = %f", S);
    } else if (figure == 'o') {
        float pi = 3.14159265;
        float a;
        float b;
        printf("a = ");
        scanf(" %f", &a);
        printf("b = ");
        scanf(" %f", &b);
        S = pi * a * b;
        printf("\nS = %f", S);
    } else {
        printf("Sorry, I don't know this figure :(\n");
        void exit(int status);
    }
    char choose[3];
    printf("\n\nPrint ro if you want to round off a number\nor print everything else if you want to exit program\n\n");
    scanf(" %s", &choose);
    printf("\n");
    if (strcmp(choose, "ro") == 0) {
        int result = (int)round(S);
        printf("S(round off) = %d\n", result);
    } else {
        void exit(int status);
    }
    return 0;
}
