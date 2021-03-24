 #include <stdio.h> 

 void main() 

 {  int n, i, c = 0;
    scanf("%d", &n);
    /*logic*/ 
    /* Any prime number is divisible only by itself and '1' , hence by only two numbers*/
    for (i = 1; i <= n; i++) 
    {  if (n % i == 0) 
       c++;
    }
    if (c == 2) 
     printf("Is a Prime Number");
    else 
     printf("Not a Prime Number");   
 }

