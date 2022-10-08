#include<stdio.h>
#include<string.h>
#include"//Users//yugbhanushali03//Desktop//DataStructures//projects//dsa1//printer.h"
#include"//Users//yugbhanushali03//Desktop//DataStructures//projects//dsa1//product.h"


//storing the costumer details
typedef struct invoice_name_part{
    char nameOfCustomer[100];
    int phoneNumber;
}inp;

//storing the products type
typedef struct invoice_product{
    int mac;
    int iphone;
    int iMac;
    int appleWatch;
    int iPad;
    int airpods;
    int price;
    int quantity;
    char product[50];
}prod;

//storing details of each product in tis array
typedef struct arraysofproduct{
    char arrayOfProducts[10][20];
    int arrayOfQuantity[10];
    int arrayOfprice[10];
    int totalPrice[10];
}arrofProd;


//declaring the insatance
inp in1;
prod in2;
arrofProd arr1;

int main(){

    //making arrays which stores the product added by the customer,prices of product,quantity of product


    int random;
    int i=0;
    // asking user to enter the details
    printf("Write your name : ");
    scanf("%s",in1.nameOfCustomer);
    printf("Write the phone number: ");
    scanf("%i",&in1.phoneNumber);

    //Asking user about product which he would like to buy
    printf("Which products would you like to buy:\n");
    printf("- - - - - - - - - - - - - - - - - - -\n");
    while(1)
    { 

    //printing the types of product    
    printf("1. iphone \n");
    printf("2. MacBook \n");
    printf("3. iMac \n");
    printf("4. iPad \n");
    printf("5. Apple Watch \n");
    printf("Enter the number to buy the product:");
    scanf("%d",&random);
    
    if(random==1){
        in2.iphone=1;
        //if user select iphone then printing the models of iphone and asking user to select any one of the model
        printf("- - - - - - - - - - - - - - - - - -\n");
        printf("Which iphone would you like to buy:\n");
        printf("- - - - - - - - - - - - - - - - - -\n");
        printf("1. iphone 13 pro max ------------ ₹ 1,20,000\n");
        printf("2. iphone 13 pro ---------------- ₹ 90,000\n");
        printf("3. iphone 13 -------------------- ₹ 80,000\n");
        printf("4. iphone 12 pro max ------------ ₹ 1,10,000\n");
        printf("5. iphone 12 pro ---------------- ₹ 90,000\n");
        printf("6. iphone 12 -------------------- ₹ 70,000\n");
        printf("Enter the number to buy the iphone:");
        
        int new1=0;
        scanf("%d",&new1);

        //using header file product returning the model entered by the user and the price of the model
        in2.price=iphonePrice(new1);
        strcpy(in2.product,iphoneName(new1));
    }
    else if(random==2){
        in2.mac=1;
        int new1=0;
        //if user select Macs then printing the models of Macs and asking user to select any one of the model
        printf("- - - - - - - - - - - - - - - - - -\n");
        printf("Which MacBook would you like to buy:\n");
        printf("- - - - - - - - - - - - - - - - - -\n");
        printf("1. MacBook Air M1 ----------------------- ₹ 99,900\n");
        printf("2. MacBook Air M2 ----------------------- ₹ 1,19,900\n");
        printf("3. MacBook pro 13\" M1 ------------------ ₹ 1,29,900\n");
        printf("4. MacBook pro 13\" M2 ------------------ ₹ 1,94,900\n");
        printf("5. MacBook pro 14\" (M1) ---------------- ₹ 2,19,900\n");
        printf("6. MacBook pro 14\" (M1 Max) ------------ ₹ 2,69,900\n");
        printf("Enter the number to buy the MacBook:");
        scanf("%d",&new1);

        //using header file product returning the model entered by the user and the price of the model
        in2.price=MacBookPrice(new1);
        strcpy(in2.product,MacBookName(new1));
    }
    else if(random==3){
        in2.iMac=1;
        int new1=0;
        //if user select iMacs then printing the models of iMacs and asking user to select any one of the model
        printf("- - - - - - - - - - - - - - - - - -\n");
        printf("Which iMac would you like to buy:\n");
        printf("- - - - - - - - - - - - - - - - - -\n");
        printf("1. iMac 21.5-in -------------------------- ₹ 1,10,000\n");
        printf("2. iMac 21.5-in (4K-retina) -------------- ₹ 1,20,000\n");
        printf("3. iMac 24-in (M1 chip) ------------------ ₹ 1,40,000\n");
        printf("4. iMac 27-in (5K-retina) ---------------- ₹ 1,70,000\n");
        printf("5. iMac pro ------------------------------ ₹ 2,20,000\n");
        printf("6. Mac Studio(2022) ---------------------- ₹ 2,60,000\n");
        printf("Enter the number to buy the iMac:");
        scanf("%d",&new1);

        //using header file product returning the model entered by the user and the price of the model
        in2.price=iMacPrice(new1);
        strcpy(in2.product,iMacName(new1));
    }
    else if(random==4){
        in2.iPad=1;
        int new1=0;

        //if user select ipads then printing the models of ipads and asking user to select any one of the model
        printf("- - - - - - - - - - - - - - - - - -\n");
        printf("Which iPad would you like to buy:\n");
        printf("- - - - - - - - - - - - - - - - - -\n");
        printf("1. iPad pro 12.9-in(5th-gen) ------------------- ₹ 99,000\n");
        printf("2. iPad pro 11-in(3th-gen) --------------------- ₹ 79,000\n");
        printf("3. iPad Air(5th-gen) --------------------------- ₹ 60,000\n");
        printf("4. iPad (9th-gen) ------------------------------ ₹ 45,000\n");
        printf("5. iPad mini(6th-gen) -------------------------- ₹ 30,000\n");
        printf("Enter the number to buy the iPad:");
        scanf("%d",&new1);

        //using header file product returning the model entered by the user and the price of the model
        in2.price=iPadPrice(new1);
        strcpy(in2.product,iPadName(new1));
    }
    else if(random==5){
        in2.appleWatch=1;
        int new1=0;

        //if user select watches then printing the models of watches and asking user to select any one of the model
        printf("- - - - - - - - - - - - - - - - - - - -\n");
        printf("Which Apple Watch would you like to buy:\n");
        printf("- - - - - - - - - - - - - - - - - - - -\n");
        printf("1. Apple watch SE ------------------------- ₹ 30,000\n");
        printf("2. Apple watch series 3 ------------------- ₹ 21,000\n");
        printf("3. Apple watch series 4 ------------------- ₹ 35,000\n");
        printf("4. Apple watch series 5 ------------------- ₹ 41,000\n");
        printf("5. Apple watch series 6 ------------------- ₹ 45,000\n");
        printf("6. Apple watch series 7 ------------------- ₹ 50,000\n");
        scanf("%d",&new1);

        //using header file product returning the model entered by the user and the price of the model
        in2.price=appleWatchPrice(new1);
        strcpy(in2.product,appleWatchName(new1));
    }

    //asking user to enter the quantity he want to buy of the selected product=
    printf("- - - - - - - - - -\n");
    printf("Write the quantity:");
    scanf("%i",&in2.quantity);


    //adding the product details to the arrays
    strcpy(arr1.arrayOfProducts[i],in2.product);
    arr1.arrayOfprice[i]=in2.price;
    arr1.arrayOfQuantity[i]=in2.quantity;
    arr1.totalPrice[i]=in2.price*in2.quantity;
    i++;

    //asking user if he have completed his shopping or not
    char forExiting;
    printf("- - - - - - - - - - - - - - -\n");
    printf("Is your shopping done (y/n):");
    scanf("%c",&forExiting);
    scanf("%c",&forExiting);

    //if shopping is done
    if(forExiting=='y'){
        break;
    }
    }

    //using header file printer, printing the bill or ivoice 
    printer(arr1.arrayOfProducts,arr1.arrayOfQuantity,arr1.arrayOfprice,arr1.totalPrice,i,in1.nameOfCustomer,in1.phoneNumber);  
}




