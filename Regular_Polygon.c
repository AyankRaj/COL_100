 #include <stdio.h>
 
 void main()
{ int n,a;
   scanf("%d", &n);
   if (n<3)
   printf("Invalid Input");
   else
    if (n>=3)	   
  {  a = 180*(n-2)/n;
     printf("%d", a);
  }
 }

