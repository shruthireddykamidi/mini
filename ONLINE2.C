
#include<stdio.h>
#include<conio.h>
char cname[20];
char address[30];
char phoneno[20];
struct product
{
 char pname[20];
 int id;
 int size;
 int cost;
}p;
void details();
void new_details();
void del();
void header();
void print();
void display();
void menu();
void file();
void main()
{
 clrscr();
 header();
 menu();
 getch();
}
void header()
{
 printf("***** online shopping system *****");
}
void menu()
{
 int option;
 printf("\n1.details");
 printf("\n2.new details");
 printf("\n3.delete");
 printf("\n4.print");
 printf("\n5.exit");
 printf("\nenter your choice");
 scanf("%d",&option);
 switch(option)
 {
  case 1:details();
  break;
  case 2:new_details();
  break;
  case 3:del();
  break;
  case 4:print();
  break;
  case 5:exit(1);
  break;
  default:printf("invalid statement");
 }menu();
}
void details()
{
 printf("enter customer name");
 scanf("%s",cname);
 printf("enter address");
 scanf("%s",address);
 printf("enter contact no.");
 scanf("%s",phoneno);
 printf("enter product name");
 scanf("%s",p.pname);
 printf("enter product id");
 scanf("%d",&p.id);
 printf("enter size");
 scanf("%d",&p.size);
 printf("enter cost");
 scanf("%d",&p.cost);
}
void new_details()
{
 int ch;
 printf("\n1.update cname 2.update address 3.update product name 4.update product id 5.update size 6.update cost 7.update phone no.");
 printf("enter any option to update");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:printf("enter new customer name");
	 scanf("%s",cname);
	 break;
  case 2:printf("enter new address");
	 scanf("%s",address);
	 break;
  case 3:printf("enter new product name");
	 scanf("%s",p.pname);
	 break;
  case 4:printf("enter new product id");
	 scanf("%d",&p.id);
	 break;
  case 5:printf("enter new size");
	  scanf("%d",&p.size);
	 break;
  case 6:printf("enter new cost");
	 scanf("%d",&p.cost);
	 break;
  case 7:printf("enter new contact no.");
	 scanf("%s",phoneno);
	 break;
  default:printf("wrong statement");
 }
}
void del()
{
 cname[0]='\0';
 address[0]='\0';
 phoneno[20]=0;
 p.pname[0]='\0';
 p.id=0;
 p.size=0;
 p.cost=0;
 printf("all records are deleted");
}
void print()
{
 header();
 display();
}
void display()
{
 printf("\ncname is %s",cname);
 printf("\naddress is %s",address);
 printf("\nphone no. is %s",phoneno);
 printf("\nproduct is %s",p.pname);
 printf("\nproduct id is %d",p.id);
 printf("\nproduct size %d",p.size);
 printf("\nproduct cost is %d",p.cost);
 file();
}
void file()
{
 FILE *fp;
 fp=fopen("a.txt","w");
 fprintf(fp,"%s",cname);
 fprintf(fp,"%s",address);
 fprintf(fp,"%s",phoneno);
 fprintf(fp,"%s",p.pname);
 fprintf(fp,"%d",p.id);
 fprintf(fp,"%d",p.size);
 fprintf(fp,"%d",p.cost);
 }