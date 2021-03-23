 #include <stdio.h>

 void main()

 { int n, i;
   long long int f;	 
   scanf("%d", &n);
   f = i = 1;
   while ( i <= n )
   { 	   
     f *= i; 	
     i++; 
   }
    printf("%lld", f);   
 }
