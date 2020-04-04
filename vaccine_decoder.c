#include <stdio.h>

int decrypt_char(int char_ascii_code, int min, int max)
{
  char_ascii_code = char_ascii_code + 13;
  if(char_ascii_code > max){
     char_ascii_code = min + (char_ascii_code - max);
  }
  return char_ascii_code;
}

void decrypt(char *encrypted_code, int length)
{
  char decrypted_code[length];
  for(int count = 0; count < length; count++){
   decrypted_code[count] = encrypted_code[count];
   if(encrypted_code[count] > 64 && encrypted_code[count] <= 90){
     decrypted_code[count] = decrypt_char(encrypted_code[count], 64, 90);
   }
   if(encrypted_code[count] > 96 && encrypted_code[count] <= 122){
     decrypted_code[count] = decrypt_char(encrypted_code[count],96,122);
   }
    printf("%c",decrypted_code[count]);
  }
  printf("\n");
}


int main(void)
{
  char encrypted_code1[9] = {116,98,32,112,98,101,98,97,110};
  char encrypted_code2[20] = {'C','e','v','l','n','a','f','u','h',' ','L','b','h',' ','Q','v','q',' ','V','g'};
  decrypt(encrypted_code1, 9);
  decrypt(encrypted_code2, 20);
  return 0;
}