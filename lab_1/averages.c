#include <stdio.h>
int main(){
  int input;
  int negatives=0;
  int positives=0;
  int negtot=0;
  int postot=0;
while(input != 0){
  printf("Enter a number:");
  scanf("%d", &input);
  if(input<0){
    negtot+=input;
    negatives++;
  }if(input>0){
    postot+=input;
    positives++;
  }
}
if(negatives!=0){
negtot = negtot/negatives;
printf("negative average: %d\n", negtot);
}
if(positives!=0){
postot = postot/positives;
printf("positive average: %d\n", postot);
}
return 0;
}
