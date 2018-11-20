#include<stdio.h>
#include<conio.h>
void main()
{
 int a[1000],n,i,pos,item;
 clrscr();
 printf("enter the number of elements in array:\n");
 scanf("%d",&n);
 printf("enter the sorted elements:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the element to be searched:\n");
 scanf("%d",&item);
 pos=binary_search(a,n,item);
 if(pos==-1)
 printf("not found");
 else
 printf("%d found at %d position",item,pos);
 getch();
}

int binary_search(int a[], int n ,int item)
{
 int counter=0;
 int beg=0,end ,mid;
 end=n-1;
 mid=(beg+end)/2;
 while(beg<=end)
 {
  counter++;
  if(a[mid]==item)
  {
  printf("number of computational search: %d\n",counter);
  return mid;
  }
  else if(item>a[mid])
  beg=mid+1;
  else
  end=mid-1;
  mid=(beg+end)/2;
  }
   return -1;
 }
