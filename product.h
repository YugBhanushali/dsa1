#include<string.h>

// for getting the name of the iphones
char* iphoneName(int a){
    char *b[50];
    if(a==1){
        *b="iphone 13 pro max";
        }
        else if(a==2){
        *b="iphone 13 pro";
        }
        else if(a==3){
        *b="iphone 13";
        }
        else if(a==4){
        *b="iphone 12 pro max";
        }
        else if(a==5){
        *b="iphone 12 pro";
        }
        else if(a==6){
        *b="iphone 12";
        }
        return *b;   
}

// for getting the price of the iphones
int iphonePrice(int a){
    int c=0;
    if(a==1){
        c=120000;
        }
        else if(a==2){
        c=90000;
        }
        else if(a==3){
        c=80000;
        }
        else if(a==4){
        c=110000;
        }
        else if(a==5){
        c=90000;
        }
        else if(a==6){
        c=70000;
        }
        return c;
}

//for apple watches pricing
int appleWatchPrice(int a){
        int c;
        if(a==1){
        c=30000;
        }
        else if(a==2){
        c=21000;
        }
        else if(a==3){
        c=35000;
        }
        else if(a==4){
        c=41000;
        }
        else if(a==5){
        c=45000;
        }
        else if(a==6){
        c=50000;
        }
        return c;
}

//for apple watch naming
char* appleWatchName(int a){
        char *b[50];
        if(a==1){   
        *b="Apple_watch_SE";
        }
        else if(a==2){    
        *b="Apple watch series 3";
        }
        else if(a==3){
        *b="Apple watch series 4";
        }
        else if(a==4){
        *b="Apple watch series 5";
        }
        else if(a==5){
        *b="Apple watch series 6";
        }
        else if(a==6){
        *b="Apple watch series 7";
        }
        return *b;
}

//for macbook naming
char* MacBookName(int a){
    char *b[50];
    if(a==1){
        *b="MacBook Air M1";
        }
        else if(a==2){
        *b="MacBook Air M2";
        }
        else if(a==3){
        *b="MacBook pro 13\" M1";
        }
        else if(a==4){
        *b="MacBook pro 13\" M2";
        }
        else if(a==5){
        *b="MacBook pro 14\" (M1 Pro)";
        }
        else if(a==6){
        *b="MacBook pro 14\" (M1 Max)";
        }
        return *b;   
}

//for macbook pricing
int MacBookPrice(int a){
    int c=0;
    if(a==1){
        c=99900;
        }
        else if(a==2){
        c=119900;
        }
        else if(a==3){
        c=129900;
        }
        else if(a==4){
        c=194900;
        }
        else if(a==5){
        c=219900;
        }
        else if(a==6){
        c=269900;
        }
        return c;
}

// for imac naming
char* iMacName(int a){
    char *b[50];
    if(a==1){
        *b="iMac 21.5-in";
        }
        else if(a==2){
        *b="iMac 21.5-in (4K-retina)";
        }
        else if(a==3){
        *b="iMac 24-in (M1 chip)";
        }
        else if(a==4){
        *b="iMac 27-in (5K-retina)";
        }
        else if(a==5){
        *b="iMac pro";
        }
        else if(a==6){
        *b="Mac Studio(2022)";
        }
        return *b;   
}

// for imac pricing 
int iMacPrice(int a){
    int c=0;
    if(a==1){
        c=110000;
        }
        else if(a==2){
        c=120000;
        }
        else if(a==3){
        c=140000;
        }
        else if(a==4){
        c=170000;
        }
        else if(a==5){
        c=220000;
        }
        else if(a==6){
        c=280000;
        }
        return c;
}

// for ipad naming
char* iPadName(int a){
    char *b[50];
    if(a==1){
        *b="iPad pro 12.9-in(5th-gen)";
        }
        else if(a==2){
        *b="iPad pro 11-in(3th-gen)";
        }
        else if(a==3){
        *b="iPad Air(5th-gen)";
        }
        else if(a==4){
        *b="iPad (9th-gen)";
        }
        else if(a==5){
        *b="iPad mini(6th-gen)";
        }
        return *b;   
}

// for ipad pricing
int iPadPrice(int a){
    int c=0;
    if(a==1){
        c=99000;
        }
        else if(a==2){
        c=79000;
        }
        else if(a==3){
        c=60000;
        }
        else if(a==4){
        c=45000;
        }
        else if(a==5){
        c=30000;
        }
        return c;
}