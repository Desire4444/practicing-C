#include<stdio.h>
#include<windows.h>

// Global variables
float num1 = 0;
float num2 = 0;

float add(float num1, float num2);
float sub(float num1,float num2);
float mul(float num1,float num2);
float divi(float num1,float num2);

int main() {

    // Console Calculator

    printf("####################\n");
    printf("#####CALCULATOR#####\n");
    printf("####################\n\n");


    float ans = 0;
    char operator = '\0';

    printf("Enter first number: ");
    scanf("%f",&num1);

    printf("Enter operator: ");
    scanf(" %c",&operator);

    printf("Enter second number: ");
    scanf("%f",&num2);

    switch (operator) {
        case '+':
            ans = add(num1,num2);
            break;
        case '-':
            ans = sub(num1,num2);
            break;
        case '*':
            ans = mul(num1,num2);
            break;
        case '/':
            ans = divi(num1,num2);
            break;
        default:
            printf("Invalid operator\n");
    }

    /* [Loading Bar] */
    printf("Loading: ");
    char symbol = '#';
    for (int i = 0; i < 10; i++) {
        Sleep(700);
        printf("%c",symbol);
        fflush(stdout);
    }

    printf("\n");
    printf("%.2f %c %.2f\n", num1, operator, num2);
    printf("Answer: %.2f\n",ans);

    return 0;
}

float add(float num1,float num2) {
    return num1 + num2;
}
float sub(float num1,float num2) {
    return num1 - num2;
}
float mul(float num1, float num2) {
    return num1 * num2;
}
float divi(float num1,float num2) {
    return num1 / num2;
}