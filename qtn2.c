#include <stdio.h>

int main(){
  char num[9];
  scanf("%s",&num);
  if(num[2]!='A'&&num[2]!='E'&&num[2]!='I'&&num[2]!='O'&& num[2]!='U'&& num[2]!='Y'&&(num[0]+num[1])%2==0 && (num[3]+num[4])%2==0 && (num[5]+num[4])%2==0 && (num[8]+num[7])%2==0){
    printf("valid");
  }

  else{
    printf("invalid");
  }
  return 0;


}
