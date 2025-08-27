#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define int0 6
#define int1 7

#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3

#define SET_BIT(BYTE,BIT) BYTE|=(1<<BIT)
#define CLEAR_BIT(BYTE,BIT) BYTE&=~(1<<BIT)
#define TOGGLE_BIT(BYTE,BIT) BYTE^=(1<<BIT)
#define GET_BIT(BYTE,BIT) BYTE&=(1<<BIT)



int main()
{
    unsigned char myregister = 0;
 
    myregister = 0b00000000;

    myregister ^= 0b00100000;

    SET_BIT(myregister, 5);

    char buffer[100];

    _itoa(myregister, buffer, 2);

    printf("Zahl ist %s", buffer);
    
   
}

