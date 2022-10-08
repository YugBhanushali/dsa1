#include<stdio.h>
#include<string.h>

typedef struct invoice_name_part{
    char nameOfCostumer[100];
    int phoneNumber;
    // float priceOfProduct;
    // int quantity[4];
    

}inp;

typedef struct invoice_product{
    int mac;
    int iphone;
    int iMac;
    int appleWatch;
    int iPad;
    int airpods;
    int price;
  char product[50];
    int quantity;
}prod;

void printer(prod in3,char productlist[10][20],int quantities[],int prices[],int totalprices[] ,int counter,char name[],int phonenumber){
    int totalPrice;
    totalPrice = in3.price * in3.quantity;
    printf("***********************************************************************************************\n");
    printf("*                                             IVENUS                                          *\n");
    printf("*                                            Welcome                                          *\n");
	printf("*                                                                                             *\n");
    printf("*      Name:%-22sPhonenumber:%-48d*\n",name,phonenumber);
    printf("*                                                                                             *\n");
    
    printf("*      Product Name               Quantity           price          Total price               *\n");
    for(int i=0;i<counter;i++){
    // printf("*      %-27s%-19d%-15d%-26d*\n",in3.product,in3.quantity,in3.price,totalPrice);
    printf("*      %-27s%-19d%-15d%-26d*\n",productlist[i],quantities[i],prices[i],totalprices[i]);
}
}

inp in1;
prod in2;
int main(){
//    char toExit[10];
    char arrayOfProducts[10][20];
    int arrayOfQuantity[10];
    int arrayOfprice[10];
    int totalPrice[10];
    int random;
    int i=0;
    printf("Write your name : ");
    scanf("%s",in1.nameOfCostumer);
    printf("Write the phone number: ");
    scanf("%i",&in1.phoneNumber);
    while(1)
    {
    printf("For iphone enter 1:\n");
    printf("For mac enter 2:\n");
    printf("For iMac enter 3:\n");
    printf("For iPad enter 4:\n");
    printf("For appleWatch enter 5:\n");
    scanf("%d",&random);
    
    // in1.nameOfCostumer=name;

    if(random==1){
        in2.iphone=1;
        printf("Which iphone would you like to buy:\n");
        printf("For iphone 13 pro max enter 1\n");
        printf("For iphone 13 pro enter 2\n");
        printf("For iphone 13 enter 3\n");
        printf("For iphone 12 pro max enter 4\n");
        printf("For iphone 13 pro enter 5\n");
        printf("For iphone 13 enter 6\n");
        int new1=0;
        scanf("%d",&new1);
        if(new1==1){
                in2.price=120000;
        strcpy(in2.product,"iphone 13 pro max");
        }
        else if(new1==2){
                in2.price=90000;
        strcpy(in2.product,"iphone 13 pro");
        }
        else if(new1==3){
                in2.price=80000;
        strcpy(in2.product,"iphone 13");
        }
        else if(new1==4){
                in2.price=110000;
        strcpy(in2.product,"iphone 12 pro max");
        }
        else if(new1==2){
                in2.price=90000;
        strcpy(in2.product,"iphone 12 pro");
        }
        else if(new1==2){
                in2.price=70000;
        strcpy(in2.product,"iphone 12");
        }
    }
    else if(random==2){
        in2.mac=1;
        in2.price=100000;
        strcpy(in2.product,"MacBook");
    }
    else if(random==3){
        in2.iMac=1;
        in2.price = 180000;
        strcpy(in2.product,"iMac");
    }
    else if(random==4){
        in2.iPad=1;
        in2.price = 50000;
        strcpy(in2.product,"iPad");
    }
     // AppleWatch
    else if(random==5){
        in2.appleWatch=1;
        printf("Which Apple Watch would you like to buy:\n");
        printf("For Apple watch SE enter 1\n");
        printf("For Apple watch series 3 enter 2\n");
        printf("For Apple watch series 7 enter 3\n");
        
        int new1=0;
        scanf("%d",&new1);
        if(new1==1){
                in2.price=29900;
        strcpy(in2.product,"Apple watch SE");
        }
        else if(new1==2){
                in2.price=20900;
        strcpy(in2.product,"Apple watch series 3");
        }
        else if(new1==3){
                in2.price=41900;
        strcpy(in2.product,"Apple watch series 7");
        }
    }

    printf("Write the quantity:\n");
    scanf("%i",&in2.quantity);
    // arrayOfProducts[20][i]=in2.product;
    strcpy(arrayOfProducts[i],in2.product);
    arrayOfprice[i]=in2.price;
    arrayOfQuantity[i]=in2.quantity;
    totalPrice[i]=in2.price*in2.quantity;
    i++;
    int forExiting=0;
    printf("Is your shopping done\n");
    printf("If yes,enter 1\n");
    printf("If no,enter 0\n");
    scanf("%d",&forExiting);
    if(forExiting==1){
        break;
    }
    }
    // for (int i = 0; i < 4; i++) {
    //     printf("%s\n",arrayOfProducts[i]);
    //     printf("%d\n",arrayOfQuantity[i]);
    //     printf("%d\n",arrayOfprice[i]);
    //     printf("%d\n",totalPrice[i]);
    // }
    printer(in2,arrayOfProducts,arrayOfQuantity,arrayOfprice,totalPrice,i,in1.nameOfCostumer,in1.phoneNumber);
    
}




