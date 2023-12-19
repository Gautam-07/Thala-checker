//simple program to check if the string contains 7 or sum of digits is 7 "Thala for reason".
#include <stdio.h>
#include <string.h>
#define MAX 20

int main() {
  char a[MAX];
  int i, numbercheck=0, sum=0;
  printf("Enter the text or number :\n");
  scanf("%s",a);
  for (i = 0; a[i] != '\0'; i++){
    if ((a[i] >= '0') && (a[i] <= '9'))//for checking if string contains numbers .
    {
      numbercheck += 1;
      sum += (a[i] - '0');
    } 
  } 
  if (sum==7 ||  strlen(a)==7){
    printf("Thala for reason\n");
  }
  else {
    printf(":( Try Again\n");
  }    
 return 0;
} 