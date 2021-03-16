  #include <stdio.h>
  #include <limits.h>
  
  void main()
{    
    printf("The maximum value that can be entered is %d\n", INT_MAX);
    printf("The minimum value that can be entered is %d\n", INT_MIN);
    printf("Enter the two numbers within this range : ");
    int x,y;
    scanf("%d%d", &x, &y);     // Input of the two numbers
    if (x>= INT_MIN && x<= INT_MAX && y>= INT_MIN && y<= INT_MAX)
    {  printf("Values are within range\n");
       printf("x = %d\t,y = %d\n", x, y);     // Display of the two numbers
             
       // Objective : To ensure that addition does not cause an overflow
       if ((x>=0 && y>=0 && INT_MAX - x >= y)||(x>=0 && y<0)||(x<0 && y>=0)||(x<0 && y<0 && INT_MIN - x <= y)) 
        { int a = x + y;
          printf("The addition of the two numbers is %d\n",a); }
       else
        { printf("Invalid Input for Addition\n"); }
        
       // Objective : To ensure that subtraction does not cause an overflow
       if ((x>=0 && y<0 && INT_MAX - x >= -y)||(x>=0 && y>=0)||(x<0 && y<0)||(x<0 && y>=0 && INT_MIN - x <= -y))
        { int b = x - y;
          printf("The subtraction of the two numbers is %d\n",b); }
       else  
        { printf("Invalid Input for Subtraction\n"); }
           
       // Objective : To ensure that multiplication does not cause an overflow
       if ((x>=0 && y>=0 && INT_MAX/x >= y)||(x>=0 && y<0 && INT_MIN/x <= y)||(x<0 && y<0 && INT_MAX/x >= y)||            (x<0 && y>=0 && INT_MIN/x <= y))
        { int c = x*y;
        printf("The multiplication of the two numbers is %d\n",c); }
       else  
        { printf("Invalid Input for Multiplication\n"); }
           
       // Objective : To ensure that division does not cause an overflow 
       if (y!=0)
           { int d = x/y;	     
             printf("The division of the two numbers is %d\n",d);
    	     int e = x%y;
    	     printf("The remainder of the two numbers is %d\n",e); }
       else  
           { printf("Invalid Input for Division and Remainder\n"); }   
    }
     else
      { printf("Overflow\n");
        return;
      }
}

