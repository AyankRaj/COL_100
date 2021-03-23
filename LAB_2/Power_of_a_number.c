 #include <stdio.h>
 
 void main()
 
 { int base,exp;
   long long power = 1;
   scanf("%d", &base);
   scanf("%d", &exp);
    while (exp!= 0) 
    {	             /* Here the base is multiplied exp number of times by itself to calculate power */   
      power *= base;
      --exp;
    }
    printf("%lld", power);
 }
