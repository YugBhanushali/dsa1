#include<stdio.h>


//function which print the invoice
void printer(char productlist[10][20],int quantities[],int prices[],int totalprices[] ,int counter,char name[],int phonenumber){
    int totalPrice;
    totalPrice = 0;
    //calculating the total price of all product
    for(int i=0;i<counter;i++){
        totalPrice=totalPrice+totalprices[i];
    }
    printf("        *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("        *                                                                                                             *\n");
    printf("        *                                                      IVENUS                                                 *\n");
    printf("        *                                                                                                             *\n");
    printf("        *                                                      Welcome                                                *\n");
	printf("        *                                                                                                             *\n");
    printf("        *      Name:%-28sPhonenumber:%-58d*\n",name,phonenumber);                 
    printf("        *                                                                                                             *\n");
    printf("        *      Date:17/5/2022                                                                                         *\n");
    printf("        *                                                                                                             *\n");
    printf("        *      Product Name                     Quantity                Price               Total price(in ₹)         *\n");
    printf("        *      ------------                     --------                ------              -----------------         *\n");
    printf("        *                                                                                                             *\n");
    //printing all the products details
    for(int i=0;i<counter;i++){

    printf("        *      %-33s%-24d%-20d%-26d*\n",productlist[i],quantities[i],prices[i],totalprices[i]);
    printf("        *                                                                                                             *\n");

    }
    printf("        *                                                                                   --------------------------*\n");
    printf("        *      SGST--9%%(included in the price)                                              ₹%-25d*\n",(totalPrice*9/100));
    printf("        *                                                                                   --------------------------*\n");
    printf("        *      CGST--9%%(included in the price)                                              ₹%-25d*\n",(totalPrice*9/100));
    printf("        *-------------------------------------------------------------------------------------------------------------*\n");
    printf("        *      Total tax paid--18%%(included in the price)                                   ₹%-25d*\n",(totalPrice*18/100));
    printf("        *-------------------------------------------------------------------------------------------------------------*\n");
    printf("        *      Total amount paybel amount(inclusive of tax)--                               ₹%-25d*\n",totalPrice);
    printf("        *                                                                                                             *\n");
    printf("        *                                                                                                             *\n");
    printf("        *                                                                                                             *\n");
    printf("        *- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*\n");
    printf("        *                                                                                                             *\n");
    printf("        *                                                                                                             *\n");
    printf("        *      For any queries you can call on: 1800-5600-2200                                                        *\n");
    printf("        *      For support you can call on: 1800-5600-2222                                                            *\n");
    printf("        *      For more details you can visit out site: https://www.apple.com/in/                                     *\n");
    printf("        *                                                                                                             *\n");
    printf("        *                                                                                                             *\n");
    printf("        *- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*\n");
    printf("        *                                                                                                             *\n");
    printf("        *                                     Thank You                                                               *\n");
    printf("        *                                    Visit again                                                              *\n");
    printf("        *                                                                                                             *\n");
    printf("        *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}