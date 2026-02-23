   1.
      #include <stdio.h>
   2.
       
   3.
   4.
       
   5.
      int main( )
   6.
      {
   7.
       
   8.
      float amount=0.0, balance = 0.0;
   9.
       
  10.
      scanf("%f %f",&amount,&balance);
  11.
       
  12.
  13.
       
  14.
      if (((int)amount%10==5 || (int)amount%10==0 ) && amount>0 && amount<=2000 && balance>=0 && balance<=2000)
  15.
       
  16.
      balance=(amount+0.5<=balance?balance-amount-0.5:balance);
  17.
       
  18.
       
  19.
      printf("%f\n",balance);
  20.
       
  21.
      return 0;
  22.
      } 