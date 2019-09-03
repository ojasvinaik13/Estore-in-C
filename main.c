#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void refri();
void tele();
void air();
void lapt();
void cel();
int info();
void printrec(char[],char[],int,float,int);

char customer_name[20];
char add[200];
char z[3];
long long int con_number,mem_number=0;

typedef struct refrigerator
{
    char brand[20];
    int model_num;
    float price;

}r;

typedef struct television
{
    char brand[20];
    int model_num;
    float price;

}t;

typedef struct air_conditioner
{
    char brand[20];
    int model_num;
    float price;

}a;

typedef struct laptop
{
    char brand[20];
    int model_num;
    float price;

}l;

typedef struct cellphone
{
    char brand[20];
    int model_num;
    float price;

}c;

  r ref[5],r1;
  t tel[5],t1;
  a ac[5],a1;
  l lap[5],l1;
  c cell[5],c1;

int z1;

 int main()
{
   srand(time(0));
   printf("\t\t\t\t\tWELCOME TO ELECBUY\n");
   printf("ELECBUY,FOUNDED IN THE 90s, HAS PROVED TO BE YOUR ONE STOP SOLUTION FOR BUYING ELECTRONIC APPLIANCES.\nTHE FOUNDERS MS. OJASVI NAIK AND MS. DEBDATTA KUNDU ARE PROUD TO CELEBRATE 25 YEARS OF ELECBUY.\n\n");
   int v;
   char x;
   z1=info();
  do
 {  printf("WHAT ARE YOU LOOKING FOR ?\n");
    printf("1.REFRIGERATOR\n2.TELEVISION\n3.AIR CONDITIONER\n4.LAPTOP\n5.MOBILE PHONE\n");
    scanf("%d",&v);
  switch(v)
  {
   case 1: refri();
   break;
   case 2: tele();
   break;
   case 3: air();
   break;
   case 4: lapt();
   break;
   case 5: cel();
   break;

}
printf("Press enter key to exit or hit any other key to go back to main menu\n");
getc(stdin);
scanf("%c",&x);

}while(x!=0x0A);
return 0;
}

 void refri()
{
  strcpy(ref[0].brand,"Samsung");
  ref[0].model_num=(rand()%2001)+2000;
  ref[0].price=25000;

  strcpy(ref[1].brand,"LG");
  ref[1].model_num=(rand()%2001)+2000;
  ref[1].price=19000;

  strcpy(ref[2].brand,"Godrej");
  ref[2].model_num=(rand()%2001)+2000;
  ref[2].price=21999;

  strcpy(ref[3].brand,"Whirlpool");
  ref[3].model_num=(rand()%2001)+2000;
  ref[3].price=27600;

  strcpy(ref[4].brand,"Bosch");
  ref[4].model_num=(rand()%2001)+6000;
  ref[4].price=30000;

  char str[20],q[3],w[3],send[20],send1[20];
  int i,u,send2;
  float send3;

  do
{
  int found=0;
  printf("Enter the brand of refrigerator to know the details \n");
  scanf("%s",str);
   for(i=0;i<5;i++)
  {
    if(strcmpi(ref[i].brand,str)==0)
   {  found=1;
      printf("\nThe refrigerator brand you selected is: ");
      printf("%s\n",ref[i].brand);
      printf("Model Number: ");
      printf("%d\n",ref[i].model_num);
      printf("Price: ");
      printf("%f\n",ref[i].price);
      break;
   }
    else
    continue;
  }
    if (found==0)
    {
        printf("This brand is currently unavailable\n");
        goto label1;
    }
    else
    {
        strcpy(r1.brand,ref[i].brand);
        r1.model_num=ref[i].model_num;
        r1.price=ref[i].price;

    printf("\nDo you want to buy this refrigerator ?\n");
    scanf("%s",w);
    if(strcmpi(w,"yes")==0)
    {
        printf("How many units do you want to buy ?\n");
        scanf("%d",&u);
        strcpy(send,"REFRIGERATOR");
        strcpy(send1,r1.brand);
        send2=r1.model_num;
        send3=r1.price;
        printrec(send,send1,send2,send3,u);
    }
    else
    {
        label1: printf("Do you want to check out some other refrigerator brand ?\n");
        scanf("%s",q);
    }
    }
  }while(strcmpi(q,"yes")==0);
}

 void tele()
{
  strcpy(tel[0].brand,"Samsung");
  tel[0].model_num=(rand()%200001)+600000;
  tel[0].price=50000;

  strcpy(tel[1].brand,"LG");
  tel[1].model_num=(rand()%300001)+600000;
  tel[1].price=53000;

  strcpy(tel[2].brand,"Sony");
  tel[2].model_num=(rand()%200001)+600000;
  tel[2].price=68000;

  strcpy(tel[3].brand,"Panasonic");
  tel[3].model_num=(rand()%200001)+700000;
  tel[3].price=51999;

  strcpy(tel[4].brand,"Hisense");
  tel[4].model_num=(rand()%200001)+600000;
  tel[4].price=70000;


  char str1[20],q[3],w[3],send[20],send1[20];
  int i,u,send2;
  float send3;

   do
{
  int found=0;
  printf("Enter the brand of television to know the details \n");
  scanf("%s",str1);
   for(i=0;i<5;i++)
  {
     if(strcmpi(tel[i].brand,str1)==0)
   {  found=1;
      printf("\nThe television brand you selected is: ");
      printf("%s\n",tel[i].brand);
      printf("Model Number: ");
      printf("%d\n",tel[i].model_num);
      printf("Price: ");
      printf("%f\n",tel[i].price);
      break;
   }
    else
    continue;
  }
    if (found==0)
    {
        printf("This brand is currently unavailable\n");
        goto label1;
    }
    else
   {
        strcpy(t1.brand,tel[i].brand);
        t1.model_num=tel[i].model_num;
        t1.price=tel[i].price;

    printf("\nDo you want to buy this television ?\n");
    scanf("%s",w);
    if(strcmpi(w,"yes")==0)
    {
        printf("How many units do you want to buy ?\n");
        scanf("%d",&u);
        strcpy(send,"TELEVISION");
        strcpy(send1,t1.brand);
        send2=t1.model_num;
        send3=t1.price;
        printrec(send,send1,send2,send3,u);
    }
    else
    {
        label1: printf("Do you want to check out some other television brand ?\n");
        scanf("%s",q);
    }
   }
  }while(strcmpi(q,"yes")==0);
}

 void air()
{
  strcpy(ac[0].brand,"Carrier");
  ac[0].model_num=(rand()%3001)+4000;
  ac[0].price=50000;

  strcpy(ac[1].brand,"LG");
  ac[1].model_num=(rand()%3001)+4000;
  ac[1].price=40999;

  strcpy(ac[2].brand,"Samsung");
  ac[2].model_num=(rand()%3001)+4000;
  ac[2].price=60000;

  strcpy(ac[3].brand,"Daikin");
  ac[3].model_num=(rand()%3001)+4000;
  ac[3].price=51000;

  strcpy(ac[4].brand,"Hitachi");
  ac[4].model_num=(rand()%3001)+4000;
  ac[4].price=62000;

  char str1[20],q[3],w[3],send[20],send1[20];
  int i,u,send2;
  float send3;
   do
 {
  int found=0;
  printf("Enter the brand of air conditioner to know the details \n");
  scanf("%s",str1);
    for(i=0;i<5;i++)
  {
    if(strcmpi(ac[i].brand,str1)==0)
   {  found=1;
      printf("\nThe air conditioner brand you selected is: ");
      printf("%s\n",ac[i].brand);
      printf("Model Number: ");
      printf("%d\n",ac[i].model_num);
      printf("Price: ");
      printf("%f\n",ac[i].price);
      break;
   }
    else
    continue;
  }
    if (found==0)
    {
        printf("This brand is currently unavailable\n");
        goto label1;
    }
    else
    {
        strcpy(a1.brand,ac[i].brand);
        a1.model_num=ac[i].model_num;
        a1.price=ac[i].price;

    printf("\nDo you want to buy this air conditioner ?\n");
    scanf("%s",w);
    if(strcmpi(w,"yes")==0)
    {
        printf("How many units do you want to buy ?\n");
        scanf("%d",&u);
        strcpy(send,"AIR CONDITIONER");
        strcpy(send1,a1.brand);
        send2=a1.model_num;
        send3=a1.price;
        printrec(send,send1,send2,send3,u);
    }
    else
     {
        label1: printf("Do you want to check out some other air conditioner brand ?\n");
        scanf("%s",q);
     }
    }
  }while(strcmpi(q,"yes")==0);
}


 void lapt()
{
  strcpy(lap[0].brand,"HP");
  lap[0].model_num=(rand()%2001)+7000;
  lap[0].price=45000;

  strcpy(lap[1].brand,"Lenovo");
  lap[1].model_num=(rand()%3001)+4000;
  lap[1].price=26999;

  strcpy(lap[2].brand,"Dell");
  lap[2].model_num=(rand()%2001)+7000;
  lap[2].price=40000;

  strcpy(lap[3].brand,"Apple");
  lap[3].model_num=(rand()%2001)+8000;
  lap[3].price=60000;

  strcpy(lap[4].brand,"Asus");
  lap[4].model_num=(rand()%3001)+3000;
  lap[4].price=30000;

  char str1[20],q[3],w[3],send[20],send1[20];
  int i,u,send2;
  float send3;

   do
{ int found=0;
  printf("Enter the brand of laptop to know the details \n");
  scanf("%s",str1);
    for(i=0;i<5;i++)
  {
  if(strcmpi(lap[i].brand,str1)==0)
   {   found=1;
      printf("\nThe laptop brand you selected is: ");
      printf("%s\n",lap[i].brand);
      printf("Model Number: ");
      printf("%d\n",lap[i].model_num);
      printf("Price: ");
      printf("%f\n",lap[i].price);
      break;
   }
    else
    continue;
  }
     if (found==0)
    {
        printf("This brand is currently unavailable\n");
        goto label1;
    }
    else
    {
        strcpy(l1.brand,lap[i].brand);
        l1.model_num=lap[i].model_num;
        l1.price=lap[i].price;

    printf("\nDo you want to buy this laptop ?\n");
    scanf("%s",w);
       if(strcmpi(w,"yes")==0)
     {
        printf("How many units do you want to buy ?\n");
        scanf("%d",&u);
        strcpy(send,"LAPTOP");
        strcpy(send1,l1.brand);
        send2=l1.model_num;
        send3=l1.price;
        printrec(send,send1,send2,send3,u);
     }
    else
     {
        label1: printf("Do you want to check out some other laptop brand ?\n");
        scanf("%s",q);
     }
    }
  }while(strcmpi(q,"yes")==0);
}

 void cel()
{
  strcpy(cell[0].brand,"Samsung");
  cell[0].model_num=(rand()%301)+600;
  cell[0].price=30000;

  strcpy(cell[1].brand,"Apple");
  cell[1].model_num=(rand()%501)+500;
  cell[1].price=50000;

  strcpy(cell[2].brand,"Nokia");
  cell[2].model_num=(rand()%601)+200;
  cell[2].price=12000;

  strcpy(cell[3].brand,"Google");
  cell[3].model_num=(rand()%3001)+4000;
  cell[3].price=31000;

  strcpy(cell[4].brand,"OnePlus");
  cell[4].model_num=(rand()%301)+700;
  cell[4].price=25000;

  char str1[20],q[3],w[3],send[20],send1[20];
  int i,u,send2;
  float send3;

  do
{ int found=0;
  printf("Enter the brand of cellphone to know the details \n");
  scanf("%s",str1);
   for(i=0;i<5;i++)
  {
     if(strcmpi(cell[i].brand,str1)==0)
   {   found=1;
      printf("\nThe cellphone brand you selected is: ");
      printf("%s\n",cell[i].brand);
      printf("Model Number: ");
      printf("%d\n",cell[i].model_num);
      printf("Price: ");
      printf("%f\n",cell[i].price);
      break;
   }
    else
    continue;
  }
     if (found==0)
    {
        printf("This brand is currently unavailable\n");
        goto label1;
    }
     else
    {   strcpy(c1.brand,cell[i].brand);
        c1.model_num=cell[i].model_num;
        c1.price=cell[i].price;

    printf("\nDo you want to buy this cellphone ?\n");
    scanf("%s",w);
    if(strcmpi(w,"yes")==0)
    {
        printf("How many units do you want to buy ?\n");
        scanf("%d",&u);
        strcpy(send,"CELLPHONE");
        strcpy(send1,c1.brand);
        send2=c1.model_num;
        send3=c1.price;
        printrec(send,send1,send2,send3,u);
    }
    else
     {
        label1: printf("Do you want to check out some other cellphone brand ?\n");
        scanf("%s",q);
     }
    }
  }while(strcmpi(q,"yes")==0);
}

void printrec(char send[20],char send1[20],int send2,float send3,int u)
{
    system("cls");
    int dis;
    float m1;
    if(z1==1)
    {
        dis=10;
        m1=0.9;
    }
    else
    {
        dis=0;
        m1=1;
    }

    float fp;
    fp=(send3)*(float)u*m1;
    printf("__________________________________________________________________________________________________________________________________________________________________________\n");
    printf("                                                            ELECBUY\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________\n");
    printf("\n\nCustomer Name: %s\n",customer_name);
    printf("Customer contact number: %lld\n\n",con_number);
    printf("Shipping Address: \n");
    printf("%s\n\n",add);
    printf("Invoice Number: %lld\n\n",((rand()%200000001)+200000000));
    printf("Order ID: %d-%lld\n\n",((rand()%201)+200),((rand()%200000001)+200000000));
    if(mem_number==0)
    {
        printf("Membership card number: %c\n",'-');
    }
    else
    {printf("Membership card number: %lld\n",mem_number);
    }
    printf("___________________________________________________________________________________________________________________________________________________________________________\n");
    printf("\tAPPLIANCE\t\tBRAND\t\tMODEL NUMBER\t\tNO. OF UNITS\t\tPRICE\t\tDISCOUNT\t\tAMOUNT\n");
    printf("___________________________________________________________________________________________________________________________________________________________________________\n\n");
    printf("\t%s\t\t",send);
    printf("%s\t\t",send1);
    printf("%d\t\t\t",send2);
    printf("%d\t\t\t",u);
    printf("%f\t\t",send3);
    printf("%d%%\t\t",dis);
    printf("%f\n",fp);
    printf("____________________________________________________________________________________________________________________________________________________________________________\n\n");
    printf("\n\nThe product will be delivered to %s within 10 working days.\nThank you.\n\n\n",add);
    printf("||||||||   |||||||  ||||   ||||||||||||||||\n");
    printf("||||||||   |||||||  ||||   ||||||||||||||||\n");
    printf("||||||||   |||||||  ||||   ||||||||||||||||\n");
}

 int info()
{
    int flag=0;

    printf("DEAR CUSTOMER,\nPLEASE ENTER THE FOLLOWING DETAILS:\n");
    printf("NAME: ");
    scanf("%[^\n]",customer_name);
    printf("CONTACT NUMBER: ");
    scanf("%lld",&con_number);
    printf("ADDRESS: ");
    fflush(stdin);
    scanf("%[^\n]",add);
    printf("ARE YOU AN ELECBUY MEMBER? \n");
    scanf("%s",z);
    if(strcmpi(z,"yes")==0)
    {   flag=1;
        printf("PLEASE ENTER YOUR MEMBERSHIP CARD NUMBER: ");
        scanf("%lld",&mem_number);
        printf("YOU ARE ELIGIBLE FOR A DISCOUNT OF 10%% \n\n");
    }
    else
    {
        printf("\n");
    }

   return flag;
}
