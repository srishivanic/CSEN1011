/write a c programm to covert uppercase characters to lowercase/
  
  /programm/
  #include<stdio.h>
int main()
{
    char upperChar, lowerChar;
    int ascii;
    printf("Enter an uppercase Character: ");
    scanf("%c", &upperChar);
    ascii = upperChar;
    lowerChar = ascii+32;
    printf("\nIts Lowercase = %c", &lowerChar);
    return 0;
}

/output/
  Enter an uppercase character= A
  
  Its Lowercase = a
