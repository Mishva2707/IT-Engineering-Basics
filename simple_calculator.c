#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Enter number 2: ");
    scanf("%d", &b);
    switch(op) {
        case '+': printf("Result = %d", a + b); break;
        case '-': printf("Result = %d", a - b); break;
        case '*': printf("Result = %d", a * b); break;
        case '/': printf("Result = %d", a / b); break;
        default: printf("Invalid operator");
    }
    return 0;
}
