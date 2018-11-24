#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[], int n);
void main()
{
 int a[1000],n,i;
 clrscr();
 printf("enter the no. of elements you want to enter:\n");
 scanf("%d",&n);
 printf("enter the elements in the array:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 insertion_sort(a,n);
 printf("sorted array is : ");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 getch();
}
void insertion_sort(int a[], int n)
{
 int k,temp,j;
 for(k=1;k<=n-1;k++)
 {
  temp=a[k];
  j=k-1;
  while((temp<a[j])&&(j>=0))
  {
   a[j+1]=a[j];
   j=j-1;
  }
  a[j+1]=temp;
 }
}
