#include <stdio.h>
#include <stdlib.h>
void menu();
int main()
{
    printf("twelcome to zetech c snack shop!\n");
    menu();
    return 0;
}
    void menu() {
int item;
printf("\tToday's menu\n");
printf("1.hot dog - ksh.250\n");
printf("2.biscuits - ksh.50\n");
printf("3.mac coffee - ksh.25\n");
printf("4.cakes - ksh.60\n");
printf("5.crisps - ksh.55\n");
printf("6.soda - ksh.50\n");
printf("Enter item no:");
scanf("%d",&item);
if(item> 0 && item <=6){
    printf("item added to cart\n");
}
else{printf("invalid item\n");
menu();
 }
 return item;
    }
