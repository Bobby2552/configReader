#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* add(int* a, int* b) {
  if (!a || !b)
    return NULL;
  static int sum = 0;
  sum = *a + *b;
  return &sum;
}

int* subtract(int* a, int* b) {
  if (!a || !b)
    return NULL;
  static int difference = 0;
  difference = *a - *b;
  return &difference;
}

int* multiply(int* a, int* b) {
  if (!a || !b)
    return NULL;
  static int product = 0;
  product = *a * *b;
  return &product;
}

int* divide(int* a, int* b) {
  if (!a || !b)
    return NULL;
  static int quotient = 0;
  quotient = *a / *b;
  return &quotient;
}

int main(void) {

  while ( 0 == 0 ) {
    printf("Welcome to the AdvancedCS Calculator! What would you like to do?");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Exit");
    printf("\nChoose an option:  ");
    int choice;
    scanf("%d\n", &choice);
    
    if (choice == 5) {
      exit(0);
      return(0);
    } else if (choice == 1) {
      int num1;
      int num2;
      int* result;
      scanf("%d", &num1);
      scanf("%d", &num2);
      result = add(&num1, &num2);
      printf("%d\n", *result);
      exit(0);
      return(0);
    } else if (choice == 2) {
      int num1;
      int num2;
      int* result;
      scanf("%d", &num1);
      scanf("%d", &num2);
      result = subtract(&num1, &num2);
      printf("%d\n", *result);
      exit(0);
      return(0);
    } else if (choice == 3) {
      int num1;
      int num2;
      int* result;
      scanf("%d", &num1);
      scanf("%d", &num2);
      result = multiply(&num1, &num2);
      printf("%d\n", *result);
      exit(0);
      return(0);
    } else if (choice == 4) {
      int num1;
      int num2;
      int* result;
      scanf("%d", &num1);
      scanf("%d", &num2);
      result = divide(&num1, &num2);
      printf("%d\n", *result);
      exit(0);
      return(0);
    }
  }
}

