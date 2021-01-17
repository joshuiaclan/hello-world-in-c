#include <stdio.h>

int sum ( int x, int y ) {  return x + y; }
int diff ( int x, int y ) {  return x - y; }
int mult ( int x, int y ) {  return x * y; }
int div ( int x, int y ) {  return x / y; }

int main() {
    int x, y, result = 0;
    int operation;
    printf("Enter 1st Number: ");
    jjscanf("%d", &x);
    
    printf("Enter 2nd Number: ");
    scanf("%d", &y);

    printf("[1] Addition \n[2] Subtraction\n[3] Multiplication\n[4] Division\nChoose Operation:");
    scanf("%d",  &operation);

    switch(operation) {
        case 1:
            result = sum(x, y);
            break;
        case 2:
            result = diff(x, y);
            break;
        case 3:
            result = mult(x, y);
            break;
        case 4:
            result = div(x, y);
            break;
    }

    printf("Result = %d\n", result);

    return 0;
}