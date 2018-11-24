#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[1000],element,elenum,i,f=0,counter=0;
 clrscr();
 printf("enter the no. of elements you want to enter:\n");
 scanf("%d",&elenum);
 printf("enter the elements in array:\n");
 for(i=0;i<elenum;i++)
 scanf("%d",&arr[i]);
 printf("enter the number you want to search:\n");
 scanf("%d",&element);
 for(i=0;i<elenum;i++)
 {
  if(element==arr[i])
   {
   f=1;
   break;
   }
  counter++;
 }
 if(f==1)
  printf("searched element found");
 else
  printf("searched element not found");
 printf("number of computational search:%d",counter);
getch();
}
