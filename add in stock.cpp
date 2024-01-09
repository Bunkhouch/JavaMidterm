//add in stock
#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct { 	char id[10],name[25];
						int qty;
						float cost,price;
					}PRO;
PRO p[20]={	{"A001","Coca",100,10,11.5},
				{"A002","Pepsi",100,11,12.5},
				{"A003","Vital",100,3.5,4.5},
				{"A004","Sting",100,12,12.5},
				{"A005","NesCafe",100,4,4.5}
				};
int n=5;
void output()
{
	int i;
	puts("ID\tName\t\tQTY\tCost\tPrice");
	for(i=0;i<n;i++)
	{
		printf("%s\t",p[i].id);
		printf("%s\t\t",p[i].name);
		printf("%d\t",p[i].qty);
		printf("%.2f\t",p[i].cost);
		printf("%.2f\n",p[i].price);
	}
	getch();
}
int search(char id[10])
{
	int found=0;
	for(int i=0;i<n;i++)
		if(stricmp(p[i].id,id)==0)
			return i+1;
		if(found==0)
			return 0;
}
int main()
{
	A:
	system("CLS");
	//clrscr();
	puts(" [1]. In stock.");
	puts(" [2]. For sell.");
	switch(getch())
	{
		case '1':
				B:
				puts(" [1]. Add product.");
				puts(" [2]. Display all product.");
				puts(" [3]. Edit product.");
				puts(" [E]. Exit.");
				switch(getch())
				{
					case '1':   int index,qty;
									char id[10];
									puts("Add product to stock .");
									printf("ID : "); fflush(stdin);
									gets(id);
									index=search(id);
									if(index==0)
										puts("Product is not found.");
									else
									{
										printf(" Name : %s\n",p[index-1].name);
										printf(" QTY  : ");scanf("%d",&qty);
										p[index-1].qty+=qty;
									}
									getch();
									goto B;
					case '2':   puts(" Product in stock.");
									output();
									goto B;
					case '3':   puts("Edit product.");
									getch();
									goto B;
					case 'e':
					case 'E':	break;
					default: goto A;
				}
		case '2':
				C:
				system("CLS");
				//clrscr();
				puts(" [1]. Sell product.");
				puts(" [2]. Show all invoice.");
				puts(" [3]. Invoice detail.");
				puts(" [Q]. Quit.");
				switch(getch())
				{
					case '1':
							int index;
							char id[6];
							puts("Sale Product.");

				}
	}
}
