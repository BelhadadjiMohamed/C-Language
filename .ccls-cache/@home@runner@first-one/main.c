#include <stdio.h>

int main(void) {
  int age;
  printf("enter a number :  ");
  scanf("%d", &age);
  
    if (age >= 18 && age <= 45) {
      printf("Welcome My Friend Your Age is Perfect!");
    }
  else if (age<18) {
    printf("You are To Young Baby!");
  }
    else{
    printf("You Are to Old GrandPa!");
    }
  
  return 0;
}