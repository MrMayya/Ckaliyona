 #include<stdio.h>    
 void main()
 {
     int i;
     int fact=1;
     int num;
     printf("enter a number");
     scanf("%d",&num);
     for(i=1;i<=num;i++)
     {
     fact=fact*i;
     }
     printf("factorial of %d is %d",num,fact);
 }
