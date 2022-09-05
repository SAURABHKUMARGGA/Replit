#include <stdio.h>
int main(){
  printf("Hello india how are you doing...\n");
  //take user input two number and add the two number
  //double a,b;
  //printf("Enter two number one by one\n");
  //scanf("%lf",&a);
  //scanf("%lf",&b);
  //printf("your total number is: %lf", a + b);

  //Reverse number printing
  int user_number, ret_num=0, remainder;
  printf("Enter your number: \n");
  // printf("%d",5*5+4);
  scanf("%d", &user_number);
  while(user_number>0){
    remainder = user_number%10;
    ret_num = ret_num*10+remainder;//5
    // printf("hi");
    user_number = user_number/10;//4
  }
  printf("this is your reverse number: %d",ret_num);
  return 0;
}