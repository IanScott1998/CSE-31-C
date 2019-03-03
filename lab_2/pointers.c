#include <stdio.h>
int main(){
  int x=0;
  int y=0;
  int *px, *py;
  int arr[10];
  for(int i = 0; i < 10; i++){
    arr[i]=i;
  }

  px=&x;
  py=&y;

  for(int i=0; i<10; i++){

  }

  printf("%d \n",x);
  printf("%d \n",y);
  printf("%d \n",arr[0]);
  printf("%pn \n",&arr[0]);
  printf("%p \n", &x);
  printf("%p \n", &y);
  printf("%p \n", &px);
  printf("%p \n", &py);
  printf("%p \n",px);
  printf("%p \n",py);
  for(int i = 0; i<10; i++){
    printf("%d \n",*arr);
    *arr = *arr+1;

  }



  return 0;
}
