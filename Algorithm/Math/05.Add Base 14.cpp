/*
Method 1
Thanks to Raj for suggesting this method.

  1. Convert both i/p base 14 numbers to base 10.
  2. Add numbers.
  3. Convert the result back to base 14.
Method 2
Just add the numbers in base 14 in same way we add in base 10. Add numerals of both numbers one by one from right to left. If there is a carry while adding two numerals, consider the carry for adding next numerals.

Let us consider the presentation of base 14 numbers same as hexadecimal numbers

   A --> 10
   B --> 11
   C --> 12
   D --> 13
Example:
   num1 =       1  2  A
   num2 =       C  D  3   

   1. Add A and 3, we get 13(D). Since 13 is smaller than 
14, carry becomes 0 and resultant numeral becomes D         

  2. Add 2, D and carry(0). we get 15. Since 15 is greater 
than 13, carry becomes 1 and resultant numeral is 15 - 14 = 1

  3. Add 1, C and carry(1). we get 14. Since 14 is greater 
than 13, carry becomes 1 and resultant numeral is 14 - 14 = 0

Finally, there is a carry, so 1 is added as leftmost numeral and the result becomes 
101D 
)

*/
  
