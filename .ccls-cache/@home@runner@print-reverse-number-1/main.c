#include <stdio.h>
int main(){
  //Reverse number printing
  int user_number, ret_num=0, remainder;
  printf("Enter your number: \n");
 
  scanf("%d", &user_number);
  while(user_number>0){
    remainder = user_number%10;
    ret_num = ret_num*10+remainder;
   
    user_number = user_number/10;
  }
  printf("this is your reverse number: %d",ret_num);
  return 0;
}