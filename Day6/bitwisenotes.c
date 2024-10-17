
/*

Please NOTE : Whenever there is -ve number , kindly find 2's complement of that number and 
and then process left shift and right shift operations.


*********  +ve number Left shift *************

Steps:
	Convert given number to binary
	Discard first two bits and do left shift
	Convert final binary value to decimal
* Example:  30<<2

30 in Binary : 0001 1110
30<<2 :	       0111 1000

64+ 32 + 16 + 8 = 120 

#####################################################################################

*********  -ve number Left shift *************

Example : -20<<3

0001 0100 ===> 20 in binary

1110 1011  ===> 1's complement
	+1  ====> +1 
==========
1110 1100 ==>2's Complement of 20
===========
0110 0000  ==> 20<<3

1001 1111 ===> since it is negative number (so 	invert the result and add 1)
       +1
============
1010 0000
============

128 + 32 = -160





#####################################################################################

*********  +ve number Right shift *************



Example : 40 >> 3
0010 1000 ====> 40 in binary

0000 0101 ====> 40>>3 is equal to decimal 5


so, 40>>3 = 5




#####################################################################################

*********  -ve number Right shift *************

Example : -30 >> 3
0001 1110   ===> 30 in binary

1110 0001  ===>1's complement of 30
       +1  ===>add 1
-----------------------
1110 0010  ====> 2's Complement of 30

1111 1100  ====> shift right by 3 and filling it with 1


0000 0011  ====> inversion of result
       +1 ====>adding one
=============
0000 0100 ====> final result  = -4





====================================================================

Short cut Formula LEFT SHIFT OPERATIONS for both +ve adnd -ve numbers

x<< n = x * 2^n

30<<2 = 30 * 2^2 = 30 * 4 = 120

-20<<3 = -20 * 2^3 = -20 * 8 = -160




Short cut Formula RIGHT SHIFT OPERATIONS for both +ve adnd -ve numbers

x>>n = x / 2^n

40 >> 3 = 40 / 2^3 = 40 / 8 = 5 

-30 >> 3 = -30 / 2^3 = -30/ 8 = -3.75 is equivalent to -4




*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()

{
       float f1, f2 ;
    printf("Specify f1\n");
    scanf("%4f",&f1);
    printf("Specify f2\n");
    scanf("%3f",&f2);
    printf("f1=%.3f f2=%.2f\n",f1,f2);

}

*/