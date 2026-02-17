#include <stdio.h>
#include <ctype.h>
void calculate(int option, float n1, float n2){
    if(option == 4 && n2 == 0){
        printf("Error: Division by zero is not allowed.\n");
        return;
    }
    float operation;
    printf("Result: %.2f ", n1);
    switch(option){
        case 1:
            operation = n1 + n2;
            printf("+");
            break;
        case 2:
            operation = n1 - n2;
            printf("-");
            break;
        case 3:
            operation = n1 * n2;
            printf("*");
            break;
        case 4:
            operation = n1 / n2;
            printf("/");
            break;
    }
    printf(" %.2f = %.2f\n", n2, operation);
}
int main(){
    int option, repeat = 1;
    float n1, n2;
    char res;
    while(repeat == 1){
        printf("===============================\nSimple Calculator\n===============================\nSelect an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nOption: ");
        scanf("%d", &option);
        // printf("%d\n%d", option, &option);return 0;
        while(!(option >= 1 && option <= 5)){
            printf("Operation not finded!\nChoose again: ");
            scanf("%d", &option);
        }
        if(option != 5){
            printf("Enter the first number: ");
            scanf("%f", &n1);
            printf("Enter the second number: ");
            scanf("%f", &n2);
            calculate(option, n1, n2);
        }else{
            repeat = 0;
            break;
        }
        res = '0';
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &res);
        res = tolower(res);
        while(res != 'y' && res != 'n'){
            printf("Invalid response. Please type 'y' for yes or 'n' for no.\nDo you want to perform another operation? (y/n): ");
            scanf(" %c", &res);
            res = tolower(res);
        }
        if(res != 'y') repeat = 0;
    }
    printf("Thank you for using the calculator! See you next time.");
    return 0;
}
