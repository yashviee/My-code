#include<stdio.h>
#include<string.h>
 struct library
    {
        char bookname[50];
        int accessionno;
        char authorname[50];
        int price;
    };
int main()
{
struct library book1,book2;
   printf("name of book1: ");
   scanf("%s",book1.bookname);
   printf("enter accession number of book1: ");
   scanf("%d",&book1.accessionno);
   printf("Enter price of book1: ");
   scanf("%d",&book1.price);
   printf("Enter author name of book1: ");
   scanf("%s",book1.authorname);
    printf("name of book2: ");
   scanf("%s",book2.bookname);
   printf("enter accession number of book2: ");
   scanf("%d",&book2.accessionno);
   printf("Enter price of book2: ");
   scanf("%d",&book2.price);
   printf("Enter author name of book2: ");
   scanf("%s",book2.authorname);
   int choice,flag1=0,flag2=0;
   while(1)
   {


   printf("1-javacoding\n");
   printf("2-c++coding\n");
   printf("0-exit\n");
   printf("Enter your choice: \n");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
       if(flag1==0){
            printf("your book name is %s\n",book1.bookname);
       printf("your books accession number is%d\n",book1.accessionno);
       printf("your books author name is%s\n",book1.authorname);
       printf("your book price is %d\n",book1.price);
        printf("book borrowed");
        flag1=1;
       }
       else
        printf("book is already issue");
        break;
   case 2:
    if(flag2==0)

    {
        printf("your book name is %s\n",book2.bookname);
       printf("your books accession number is%d\n",book2.accessionno);
       printf("your books author name is%s\n",book2.authorname);
       printf("your book price is %d\n",book2.price);
        printf("you borrowed this book");
        flag2=1;
    }
    else
        printf("Book is issued");
        break;
   case 0:
    printf("---thank you for coming---");
    return 0;
   default:
    printf("enter correct choice");
   }
   }
}
