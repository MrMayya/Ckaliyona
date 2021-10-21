#include<stdio.h>
void main()
{
    int num,temp,rem,rev=0;
    printf("enter the number");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    if(rev==temp)
     printf("%d is palindrome",temp);
     else
     {
         printf("%d is not a palimdrome",temp);
     }
}
