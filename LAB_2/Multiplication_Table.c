 #include <stdio.h>

 void main()

 { int n, i, res;
   scanf("%d", &n);
   for ( i=1; i<=10; i++ )
   { res = n*i;
     printf("%d x %d = %d\n", n, i, res);	   
   }	   
 }
