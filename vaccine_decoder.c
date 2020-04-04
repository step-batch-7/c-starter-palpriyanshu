#include <stdio.h>

void decrypt(int *encrypted_code, int length)
{
  int decrypted_code[length];
  for(int count = 0; count < length; count++){
   decrypted_code[count] = encrypted_code[count];
      if(decrypted_code[count] != 32){
        decrypted_code[count] = decrypted_code[count] + 13;
      }
      if(decrypted_code[count]>122){
        decrypted_code[count] = 96 + (decrypted_code[count]-122);
      }
    printf("%c",decrypted_code[count]);
  }
  printf("\n");
};

int main(void){
  int encrypted_code1[9] = {116, 98, 32, 112, 98, 101, 98, 97, 110};
  printf("\nDecrypted Code-->\n");
  decrypt(encrypted_code1, 9);
  return 0;
};
