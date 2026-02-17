#include <stdio.h>
void calculate(int option, int n1, int n2){
    if(option == 4 && n2 == 0){
        printf("Error: Division by zero is not allowed.\n");
        return;
    }
    int operation;
    printf("Result: %d ", n1);
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
    printf(" %d = %d\n", n2, operation);
}
int main(){
    int option, repeat = 1, n1, n2;
    char res;
    while(repeat == 1){
        printf("===============================\nSimple Calculator\n===============================\nSelect an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nOption: ");
        scanf("%d", &option);
        while(!(option >= 1 && option <= 5)){
            printf("Operation not finded!\nChoose again: ");
            scanf("%d", &option);
        }
        if(option != 5){
            printf("Enter the first number: ");
            scanf("%d", &n1);
            printf("Enter the second number: ");
            scanf("%d", &n2);
            calculate(option, n1, n2);
        }else{
            repeat = 0;
            break;
        }
        res = '0';
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &res);
        while(res != 'y' && res != 'n'){
            printf("Invalid response. Please type 'y' for yes or 'n' for no.\nDo you want to perform another operation? (y/n): ");
            scanf(" %c", &res);
        }
        if(res != 'y') repeat = 0;
    }
    printf("Thank you for using the calculator! See you next time.");
    return 0;
}