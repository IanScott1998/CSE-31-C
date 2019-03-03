#include <stdio.h>
int main(){
int num;
int num2;
printf("Enter the number of lines for the punishment:\n");
scanf("%d", &num);
printf("\n");
if(num>=0){
  printf("Enter the line for which we want to make a typo:\n");
  scanf("%d", &num2);
  if(num2<=num&&num2>=0){
    for(int i = 0; i<num; i++){
      if(i==num2){
        printf("C programming language is the bet!\n");
      }else{
        printf("C programming language is the best!\n");
      }
    }
  }else{
    printf("You entered an incorrect value for the line typo!\n");
  }
}else{
  printf("You entered an incorrect value for the number of lines!");
}
return 0;
}
