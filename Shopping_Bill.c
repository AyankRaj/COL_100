 #include <stdio.h>
 
 void main()

 { int ip1,dis1,tax1;
   int ip2,dis2,tax2;
   scanf("%d%d%d\n", &ip1, &dis1, &tax1);
   scanf("%d%d%d", &ip2, &dis2, &tax2);

if(ip1>0&&ip2>0 && dis1>=0 && dis1<=100 && tax1>=0 && tax1<=100 && dis2>=0 && dis2<=100 && tax2>=0 && tax2<=100)
	
  { float x1 = ip1 - 0.01*dis1*ip1;
    float x2 = ip2 - 0.01*dis2*ip2; 	  
    float fbill = ( x1 + 0.01*tax1*x1 ) + ( x2 + 0.01*tax2*x2 );
    printf("%.2f",fbill);
  }
   else
    printf("Invalid Input");

 }

