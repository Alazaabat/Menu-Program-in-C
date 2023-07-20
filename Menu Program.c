#include<stdio.h>
#include<windows.h>
#include<conio.h>
int pc_return=0;
int Pc_Speces_Con=0;
int contor=0;
void Pc_Speces(char Cpu[],char Ram[],char Pc_Name[],char Gpu[],char Display[],char Storage[],char Size[],char Weight[],char Price[] ){
system("cls");
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
char arrow;
box_draw_for_speces();
int pos=1;
do{
        SetConsoleTextAttribute(console,15);
gotoxy(35,3);
printf("%s",Pc_Name);
gotoxy(25,6);
printf("Cpu : %s",Cpu);
gotoxy(25,8);
printf("Ram : %s",Ram);
gotoxy(25,10);
printf("Gpu: %s",Gpu);
gotoxy(25,12);
printf("Display: %s",Display);
gotoxy(25,14);
printf("Storage : %s",Storage);
gotoxy(25,16);
printf("Dimensions: %s",Size);
gotoxy(25,18);
printf("Weight: %s",Weight);
gotoxy(29,20);
printf("The Price %s",Price);
gotoxy(31,22);
printf("Buy                            ");
gotoxy(32,24);
printf("Return                         ");

        switch(pos){
 case 1:
         SetConsoleTextAttribute(console,240);
                gotoxy(31,22);
        printf("1]   Buy");
        if(arrow==13){
            Pc_Speces_Con=1;
return 0;
        }
break;
    case 2:
             SetConsoleTextAttribute(console,240);
                gotoxy(32,24);
        printf("2]  Return");
        if(arrow==13){
                Pc_Speces_Con=0;
        return 0;
        }
    break;
        }



arrow=getch();
if(arrow==-32)arrow=getch;
if(arrow==72){
    pos--;
    if(pos==0)pos=2;
    }
    if(arrow==80){
    pos++;
    if(pos==3)pos=1;
    }
}
while(1);


}
void box_draw_for_speces(){
system("cls");
gotoxy(23,2);
printf("%c",201);
for (int i=0;i<=55;i++)
    printf("%c",205);
printf("%c",187);
for (int y=3;y<28;y++){
    gotoxy(23,y);
    printf("%c",186);
    for (int i=0;i<=55;i++){
        printf("%c",32);}
        printf("%c",186);

}
gotoxy(23,27);
printf("%c",200);
for (int i=0;i<=55;i++)
    printf("%c",205);
printf("%c",188);
}
void gotoxy(int x,int y) {
    COORD coord;
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void box_draw(){
    system("cls");
gotoxy(30,5);
printf("%c",201);
for (int i=0;i<=40;i++)
    printf("%c",205);
printf("%c",187);
for (int y=6;y<20;y++){
    gotoxy(30,y);
    printf("%c",186);
    for (int i=0;i<=40;i++){
        printf("%c",32);}
        printf("%c",186);

}
gotoxy(30,19);
printf("%c",200);
for (int i=0;i<=40;i++)
    printf("%c",205);
printf("%c",188);
}
int The_Pc(char Pc1[],char Pc2[],char Pc3[] ,char Pc4[], char Pc5[],char Market[]){
int pos=1;
int contor=0;
       char arrow;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
do{
SetConsoleTextAttribute(console,15);
gotoxy(39,6);
printf(" Choose a %s Laptop   ",Market);
gotoxy(31,8);
printf("%s      ",Pc1);
gotoxy(31,10);
printf("%s        ",Pc2);
gotoxy(31,12);
printf("%s        ",Pc3);
gotoxy(31,14);
printf("%s        ",Pc4);
gotoxy(31,16);
printf("%s       ",Pc5);
gotoxy(31,18);
printf("Return                                   ");

switch(pos){
    case 1:
        SetConsoleTextAttribute(console,240);
        gotoxy(31,8);
        printf("1]   %s",Pc1);
        if(arrow==13){
   pc_return=1;
   return 0;
}
        break;
    case 2:
        SetConsoleTextAttribute(console,240);
        gotoxy(31,10);
        printf("2]   %s",Pc2);
            if(arrow==13){
   pc_return=2;
   return 0;}
        break;
    case 3:
        SetConsoleTextAttribute(console,240);
        gotoxy(31,12);
        printf("3]   %s",Pc3);
            if(arrow==13){
   pc_return=3;
   return 0;}
        break;
    case 4:
        SetConsoleTextAttribute(console,240);
               gotoxy(31,14);
        printf("4]   %s",Pc4);
              if(arrow==13){
   pc_return=4;
   return 0;}
       break;
    case 5:
         SetConsoleTextAttribute(console,240);
                gotoxy(31,16);
        printf("5]   %s",Pc5);
       if(arrow==13){
   pc_return=5;
   return 0;
}
break;
    case 6:
             SetConsoleTextAttribute(console,240);
                gotoxy(31,18);
        printf("6]   Return                              ");
if(arrow==13){
   pc_return=6;
   return 0;
}
    break;



}

arrow=getch();
if(arrow==-32)arrow=getch;
if(arrow==72){
    pos--;
    if(pos==0)pos=6;
    }
    if(arrow==80){
    pos++;
    if(pos==7)pos=1;
    }

}
while(1);





}
void main(void){
     HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    int contor;
        int Pc_Market=contor;
    do{
contor=0;
    int pos=1;
       char arrow=0;
box_draw();
do{
SetConsoleTextAttribute(console,15);
gotoxy(41,6);
system("color f");
printf("Choose a Pc Market");
gotoxy(31,8);
printf("Asus                                     ");
gotoxy(31,10);
printf("Dell                                   ");
gotoxy(31,12);
printf("Lenovo                                 ");
gotoxy(31,14);
printf("Acer                                     ");
gotoxy(31,16);
printf("Msi                                      ");
gotoxy(31,18);
printf("Exit                                     ");

switch(pos){
    case 1:
        SetConsoleTextAttribute(console,240);
        gotoxy(31,8);
        printf("1]   Asus                                ");
           if(arrow==13){
        contor=contor+1;}
        break;
    case 2:
        SetConsoleTextAttribute(console,240);
        gotoxy(31,10);
        printf("2]   Dell                                ");
        if(arrow==13){
        contor=contor+2;}
        break;
    case 3:
        SetConsoleTextAttribute(console,240);
        gotoxy(31,12);
        printf("3]   Lenovo                              ");
        if(arrow==13){
        contor=contor+3;}
        break;
    case 4:
        SetConsoleTextAttribute(console,240);
               gotoxy(31,14);

        printf("4]   Acer                                ");
        if(arrow==13){
        contor=contor+4;}
       break;
    case 5:
         SetConsoleTextAttribute(console,240);
                gotoxy(31,16);
        printf("5]   Msi                                 ");
        if(arrow==13){
        contor=contor+5;}
       break;
    case 6:
             SetConsoleTextAttribute(console,240);
                gotoxy(31,18);
        printf("6]   Exit                                ");
         if(arrow==13){
        contor=contor+6;}
    break;



}
printf("\e[?25l");//hide a cursor

arrow=getch();
if(arrow==-32)arrow=getch;
if(arrow==72){
    pos--;
    if(pos==0)pos=6;
    }
    if(arrow==80){
    pos++;
    if(pos==7)pos=1;
    }
if(contor!=0)
    break;
}
while(1);
Pc_Market=contor;
do{
if(Pc_Market==5){
SetConsoleTextAttribute(console,15);
box_draw();
system("color c");
char Pc1[]="MSI GE76 Raider                 ";
char Pc2[]="MSI GS66 Stealth (2021)         ";
char Pc3[]="MSI GE66 Raider Dragonshield   ";
char Pc4[]="MSI Prestige 14 Evo            ";
char Pc5[]="MSI WS66 10TL-079              ";
char Market[]="Msi";
The_Pc(Pc1,Pc2,Pc3,Pc4,Pc5,Market);
}
if(Pc_Market==4){
SetConsoleTextAttribute(console,15);
box_draw();
system("color 6");
char Pc1[]="Acer Predator Triton 500 SE (2021) ";
char Pc2[]="Acer Spin 5 (2020)               ";
char Pc3[]="Acer Chromebook C933T            ";
char Pc4[]="Acer Swift 3x                    ";
char Pc5[]="Acer Predator Triton 300 SE      ";
char Market[]="Acer";
The_Pc(Pc1,Pc2,Pc3,Pc4,Pc5,Market);

}
if(Pc_Market==3){
SetConsoleTextAttribute(console,15);
box_draw();
system("color 2");
char Pc1[]="Lenovo ThinkPad X1 Carbon (Gen 9) ";
char Pc2[]="Lenovo Yoga 9i               ";
char Pc3[]="Lenovo ThinkPad X1 Yoga (2021)";
char Pc4[]="Lenovo ThinkPad X1 Extreme Gen 4";
char Pc5[]="Lenovo ThinkPad X13 (AMD)      ";
char Market[]="Lenovo";
The_Pc(Pc1,Pc2,Pc3,Pc4,Pc5,Market);

}
if(Pc_Market==2){
SetConsoleTextAttribute(console,15);
box_draw();
system("color 9");
char Pc1[]="Dell XPS 13 (Late 2020)          ";
char Pc2[]="Dell Latitude 9410 2-in-1        ";
char Pc3[]="Dell Precision 7550              ";
char Pc4[]="Dell XPS 13 2-in-1 (2020)        ";
char Pc5[]="Dell G5 15 SE (2020)             ";
char Market[]="Dell";
The_Pc(Pc1,Pc2,Pc3,Pc4,Pc5,Market);

}
if(Pc_Market==1){
SetConsoleTextAttribute(console,15);
box_draw();
system("color 5");
char Pc1[]="Asus ZenBook 13 with OLED display ";
char Pc2[]="ASUS Chromebook C523    ";
char Pc3[]="Asus ROG Zephyrus M16           ";
char Pc4[]="Asus ROG Zephyrus G14           ";
char Pc5[]="Asus ZenBook Pro 14 Duo OLED      ";
char Market[]="Asus";
The_Pc(Pc1,Pc2,Pc3,Pc4,Pc5,Market);
contor=0;
}
if(contor==6){
        printf("\n \n \n \n");
            return 0;
            }
        SetConsoleTextAttribute(console,15);
if(Pc_Market==1){

if(pc_return==1){
        char Cpu[]="Intel Core i7-1165G7";
        char Ram[]="16GB";
        char Pc_Name[]="Asus ZenBook 13 with OLED display";
        char Gpu[]="Intel Iris Xe Graphics";
        char Display[]= "13.3-inch, 1080p";
        char Storage[]="512GB SSD";
        char Dimensions[]="11.98 x 7.99 x 0.55 inches";
        char Weight[]="2.5 pounds";
        char Price[]="$879.99";

        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
        if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B08H6SCT6Q?tag=georiot-us-default-20");
        }
        }


if(pc_return==2){ char Cpu[]="Intel Quad Core Pentium N4200";
        char Ram[]="4Gb ram";
        char Pc_Name[]="ASUS Chromebook C523";
        char Gpu[]="Intel Hd 500";
        char Display[]= "13.3-inch, 1080p";
        char Storage[]="64 GB HDD";
        char Dimensions[]="15.6 Inches";
        char Weight[]="3.5 pounds";
        char Price[]="$324.00";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
           if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/ASUS-Touchscreen-Chromebook-Intel-Pentinum/dp/B07KY8QV1D");
        }

}
if(pc_return==3){
    char Cpu[]="Intel Core i9-11900H";
        char Ram[]="16GB";
        char Pc_Name[]="Asus ROG Zephyrus M16";
        char Gpu[]="Nvidia GeForce RTX 3060";
        char Display[]= "16-inch, 2560 x 1600";
        char Storage[]="1TB SSD";
        char Dimensions[]="14 x 9.6 x 0.8 Inches";
        char Weight[]="4.2 pounds";
        char Price[]="$1,388.99";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
if(Pc_Speces_Con==1){
            system("START https://target.georiot.com/Proxy.ashx?tsid=45727&GR_URL=https%3A%2F%2Fwww.amazon.com%2Fdp%2FB08LVF15QC%3Ftag%3Dhawk-future-20%26linkCode%3Dogi%26th%3D1%26psc%3D1%26ascsubtag%3Dlaptopmag-row-3458056248647639600-20");
        }

}
if(pc_return==4){     char Cpu[]="AMD Ryzen 9-4900HS";
        char Ram[]="16GB";
        char Pc_Name[]="Asus ROG Zephyrus G14";
        char Gpu[]="Nvidia GeForce RTX 2060 Max-Q";
        char Display[]= " 14-inch, 1080p, 120Hz";
        char Storage[]="1TB SSD";
        char Dimensions[]="12.8 x 8.7 x 0.7 inches";
        char Weight[]="3.5 pounds";
        char Price[]="$886.00";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
if(Pc_Speces_Con==1){
            system("START https://target.georiot.com/Proxy.ashx?tsid=45727&GR_URL=https%3A%2F%2Fwww.amazon.com%2Fdp%2FB08CZLW29Z%3Ftag%3Dhawk-future-20%26linkCode%3Dogi%26th%3D1%26psc%3D1%26ascsubtag%3Dlaptopmag-row-1243564212140218000-20");
        }

}
if(pc_return==5) {
        char Cpu[]=" Intel® Core™ i5-1155G7 Processor 2.5 GHz";
        char Ram[]="8GB";
        char Pc_Name[]="Asus ZenBook Pro 14 Duo OLED";
        char Gpu[]=" Intel® Iris™ Xe Graphics";
        char Display[]= " 14.5-inch, 2.8K OLED";
        char Storage[]="512GB PCIe NVMe";
        char Dimensions[]="12.8 x 8.9 x 0.7 inches";
        char Weight[]="3.3 pounds";
        char Price[]="$1,099.99";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);

if(Pc_Speces_Con==1){
            system("START https://target.georiot.com/Proxy.ashx?tsid=45727&GR_URL=https%3A%2F%2Fwww.amazon.com%2Fs%3Fk%3DAsus+ZenBook+Duo+14%26tag%3Dhawk-future-20%26ascsubtag%3Dlaptopmag-row-1251217092439588900-20");
        }

}




}
if(Pc_Market==2){

if(pc_return==1){
        char Cpu[]="i7-7560U";
        char Ram[]="16GB";
        char Pc_Name[]="Dell XPS 13 ";
        char Gpu[]="Intel Iris Xe Graphics";
        char Display[]= "13.4-inch, 1920x1200";
        char Storage[]="512GB SSD";
        char Dimensions[]="11.6 x 7.8 x 0.6 inches";
        char Weight[]="2.8 lbs";
        char Price[]="$659.00";

        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
        if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/Dell-i7-7560U-Machined-Certified-Refurbished/dp/B06XQ439DW/ref=sr_1_3?crid=3D5RZ6GCQMKYE&keywords=Dell+XPS+13&qid=1669909888&sprefix=dell+xps+13+%2Caps%2C278&sr=8-3");
        }
        }


if(pc_return==3){ char Cpu[]="Intel Xeon W-10885M";
        char Ram[]="32Gb Ram";
        char Pc_Name[]="Dell Precision 7550";
        char Gpu[]="Nvidia Quadro RTX 5000";
        char Display[]= "15.6-inch, UHD";
        char Storage[]="1TB SSD";
        char Dimensions[]="14.17 x 9.53 x 1.08 inches";
        char Weight[]="5.5 pounds";
        char Price[]="$4,000.00";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
           if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B09FJFT9F2?tag=georiot-us-default-20&th=1&psc=1&ascsubtag=laptopmag-row-1198801581507099400-20&geniuslink=true");
        }

}
if(pc_return==2){
    char Cpu[]="Intel Core i7-10610U vPro";
        char Ram[]="16GB";
        char Pc_Name[]="Dell Latitude 9410 2-in-1";
        char Gpu[]="Intel UHD Graphics for 10th Gen Intel Processors";
        char Display[]= "14-inch, 1080p";
        char Storage[]="256GB SSD";
        char Dimensions[]="12.6 x 7.9 x 0.6 inches";
        char Weight[]="3.0 pounds";
        char Price[]="$879.99";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B08Z8KV19H?tag=georiot-us-default-20&th=1&psc=1&ascsubtag=laptopmag-row-6777227089668058000-20&geniuslink=true");
        }

}
if(pc_return==4){
        char Cpu[]="Intel Core i7-1165G7";
        char Ram[]="16GB";
        char Pc_Name[]="Dell XPS 13 2-in-1 (2020)";
        char Gpu[]="Intel Iris Xe";
        char Display[]= " 13.4-inch, 1920x1200";
        char Storage[]="512GB SSD";
        char Dimensions[]="12.8 x 8.7 x 0.7 inches";
        char Weight[]="2.9 pounds";
        char Price[]="$1,399.00";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B08PV3W9RS?tag=georiot-us-default-20&th=1&ascsubtag=laptopmag-row-1222991423733255200-20&geniuslink=true");
        }

}
if(pc_return==5) {
        char Cpu[]=" AMD Ryzen R7 4800H";
        char Ram[]="8GB";
        char Pc_Name[]="Dell G5 15 SE (2020)";
        char Gpu[]=" Intel® Iris™ Xe Graphics";
        char Display[]= " 15.6-inch, 1080p";
        char Storage[]="512GB NVMe";
        char Dimensions[]="14.4 x 10 x 0.9 inches";
        char Weight[]="5.5 pounds";
        char Price[]="$$958.12";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);

if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/Dell-Performance-Backlit-Keyboard-Windows/dp/B08BFM94BX");
        }

}




}
if(Pc_Market==3){

if(pc_return==1){
        char Cpu[]="11th Gen Intel Core i5/Core i7";
        char Ram[]=" 8GB/16GB/32GB";
        char Pc_Name[]="Lenovo ThinkPad X1 Carbon (Gen 9)";
        char Gpu[]="Intel Iris Xe Graphics";
        char Display[]= "14-inch, 1920 x 1200-pixel 16:10";
        char Storage[]="256GB/512GB/1TB SSD";
        char Dimensions[]=" 12.4 x 8.7 x 0.6 inches";
        char Weight[]="2.5 lbs";
        char Price[]="$1,420.71";

        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
        if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B098XQQR8X?tag=georiot-us-default-20&th=1&psc=1&ascsubtag=laptopmag-row-1323553874233594000-20&geniuslink=true");
        }
        }


if(pc_return==2){
        char Cpu[]="Intel Core i7-1185G7";
        char Ram[]=" 16 GB";
        char Pc_Name[]="Lenovo Yoga 9i";
        char Gpu[]="Iris Xe";
        char Display[]= "14-inch, 1080p";
        char Storage[]="512GB SSD";
        char Dimensions[]="12.6 x 8.5 x 0.6 inches";
        char Weight[]="3.0 pounds";
        char Price[]="$1,434.63";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
           if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B08XK1HZ66?tag=georiot-us-default-20&th=1&psc=1&ascsubtag=laptopmag-row-2703084988965171000-20&geniuslink=true");
        }

}
if(pc_return==3){
        char Cpu[]="Intel Core i7-10610U vPro";
        char Ram[]="16GB";
        char Pc_Name[]="Lenovo ThinkPad X1 Yoga";
        char Gpu[]="Iris Xe";
        char Display[]= "14-inch, 1920 x 1200-pixel IPS (16:10)";
        char Storage[]="512GB SSD";
        char Dimensions[]="12 x 8.5 x 0.6 inches";
        char Weight[]="3.0 pounds";
        char Price[]="$1,225.00";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B098KLRKRM?tag=georiot-us-default-20&th=1&psc=1&ascsubtag=laptopmag-row-1363157562192774000-20&geniuslink=true");
        }

}
if(pc_return==5){
        char Cpu[]="AMD Ryzen 5 Pro 4650U";
        char Ram[]="8gb";
        char Pc_Name[]="Lenovo ThinkPad X13 (AMD)";
        char Gpu[]="AMD Radeon Vega 7";
        char Display[]= "13.3-inch, 1080p";
        char Storage[]="256GB SSD";
        char Dimensions[]="12.8 x 8.7 x 0.7 inches";
        char Weight[]="2.8 pounds";
        char Price[]="$829.99";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B09D9415VR?tag=georiot-us-default-20&th=1&psc=1&ascsubtag=laptopmag-row-2706561136243738000-20&geniuslink=true");
        }

}
if(pc_return==4) {
        char Cpu[]="Intel Core i7-11800H";
        char Ram[]="16GB";
        char Pc_Name[]="Lenovo ThinkPad X1 Extreme Gen 4";
        char Gpu[]="Nvidia GeForce RTX 3060 (6GB of VRAM)";
        char Display[]= "16-inch, 2560 x 1600-pixel";
        char Storage[]="512GB SSD";
        char Dimensions[]="14.4 x 10 x 0.9 inches";
        char Weight[]=" 4 pounds";
        char Price[]="$2,350.00";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);

if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B09DTGJZ4Z?tag=georiot-us-default-20&th=1&psc=1&ascsubtag=laptopmag-row-1203476579415478500-20&geniuslink=true");
        }

}




}
if(Pc_Market==4){

if(pc_return==1){
        char Cpu[]="Intel Core i9-11900H, i7-11800H";
        char Ram[]="16GB/32GB";
        char Pc_Name[]="Acer Predator Triton 500 SE (2021)";
        char Gpu[]="Nvidia GeForce RTX 3060, 3070, 3080";
        char Display[]= "16-inch, 1440p @ 165Hz";
        char Storage[]="1TB/2x 1TB PCIe SSD";
        char Dimensions[]="14.1 x 10.1 x 0.8 inches";
        char Weight[]="5.4 pounds";
        char Price[]="$3,149.99";

        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
        if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B09TWY5C1C?tag=georiot-us-default-20&th=1&ascsubtag=laptopmag-row-3461068736306504000-20&geniuslink=true ");
        }
        }


if(pc_return==3){
         char Cpu[]="Intel Pentium Silver N5030";
        char Ram[]="32Gb Ram";
        char Pc_Name[]="Acer Chromebook C933T";
        char Gpu[]="UHD Graphics 600";
        char Display[]= "14-inch, 1080p";
        char Storage[]="64GB HDD";
        char Dimensions[]="12.8 x 9.1 x 0.8 inches";
        char Weight[]="3 pounds";
        char Price[]="$211,99";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
           if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B08D4SGBLW?tag=georiot-us-default-20&th=1&psc=1&ascsubtag=laptopmag-row-1023892368998804900-20&geniuslink=true  ");
        }

}
if(pc_return==2){
    char Cpu[]="Intel Core i7-1065G7";
        char Ram[]="16GB";
        char Pc_Name[]="Acer Spin 5 Intel Evo";
        char Gpu[]="Intel Iris Plus";
        char Display[]= "14-inch, 2560 x 1600";
        char Storage[]=" 1TB SSD";
        char Dimensions[]="‎12.25 x 8.59 x 0.67 inches";
        char Weight[]="2.6 pounds";
        char Price[]="$1,379.99";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B09ZVM2LLH?tag=track-ect-usa-1219269-20&linkCode=osi&th=1&psc=1");
        }

}
if(pc_return==4){
        char Cpu[]="Intel Core i7-1165G7";
        char Ram[]="16GB";
        char Pc_Name[]="Acer Swift 3x";
        char Gpu[]="Intel Iris Xe Max";
        char Display[]= " 14-inch, 1080p";
        char Storage[]="512GB SSD";
        char Dimensions[]="12.7 x 8.6 x 0.7 inches";
        char Weight[]="3.0 pounds";
        char Price[]="$798.00";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/Acer-i7-1165G7-Fingerprint-Back-lit-SF314-510G-767Y/dp/B08MQSV2WW ");
        }

}
if(pc_return==5) {
        char Cpu[]="Intel Core i7-11375H";
        char Ram[]="8GB";
        char Pc_Name[]="Acer Predator Triton 300 SE";
        char Gpu[]="Nvidia GeForce RTX 3060";
        char Display[]= "14-inch, 1080p @ 144Hz";
        char Storage[]="512GB NVMe";
        char Dimensions[]="12.7 x 9.0 x 0.7 inches";
        char Weight[]="3.8 pounds";
        char Price[]="$3,149.99";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);

if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B09TWY5C1C?tag=georiot-us-default-20&th=1&psc=1&ascsubtag=laptopmag-row-3461068736306504000-20&geniuslink=true");
        }

}




}
if(Pc_Market==5){

if(pc_return==1){
        char Cpu[]="Intel Core i7-12900HK";
        char Ram[]="16GB/32GB";
        char Pc_Name[]="MSI GE76 Raider";
        char Gpu[]="Nvidia GeForce RTX 3080 Ti";
        char Display[]= "17.3-inch, 1080p @ 144Hz/360Hz, 1440p @ 240Hz";
        char Storage[]=" dual 2TB NVMe PCIe Gen 4 SSD";
        char Dimensions[]="15.6 x 11.2 x 1 inches";
        char Weight[]="8.9 lbs";
        char Price[]="$1,374.56";

        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
        if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B0B6QCNP5D/ref=asc_df_B0B6QCNP5D1669647600000?tag=georiot-us-default-20&ascsubtag=laptopmag-row-9041220455775437000-20&geniuslink=true ");
        }
        }


if(pc_return==2){
        char Cpu[]="Intel Core i7-10850H";
        char Ram[]="32Gb Ram";
        char Pc_Name[]="MSI GS66 Stealth (2021)";
        char Gpu[]="Nvidia GeForce RTX 3060/3070/3080/3080 Max-Q";
        char Display[]= "15.6-inch, 1080p @ 240Hz/300Hz, 1440p @ 240Hz";
        char Storage[]="1TB NVMe SSD";
        char Dimensions[]="14.2 x 9.7 x 0.7 inches";
        char Weight[]="4.5 pounds";
        char Price[]="$1,699.00";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
           if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B0B4TC1H8R/ref=asc_df_B0B4TC1H8R1669647600000?tag=georiot-us-default-20&ascsubtag=laptopmag-row-8254770460264680000-20&geniuslink=true ");
        }

}
if(pc_return==3){
    char Cpu[]="Intel Core i7-11800H";
        char Ram[]="32GB";
        char Pc_Name[]="MSI GE66 Raider Dragonshield";
        char Gpu[]="Nvidia GeForce RTX 3070,";
        char Display[]= "15.6 inches 2560 x 1440 pixels	";
        char Storage[]="1TB NVMe SSD";
        char Dimensions[]="0.92 x 14.09 x 10.51 inches	";
        char Weight[]="5.3 pounds";
        char Price[]="$1,749.00";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/MSI-GE66-Raider-i7-11800H-11UG-070/dp/B0956JJVXG/ref=sr_1_2?ascsubtag=laptopmag-row-1107695907098446000-20&geniuslink=true&keywords=MSI+GE66+Raider+Dragonshield&qid=1669920604&sr=8-2");
        }

}
if(pc_return==5){
        char Cpu[]="Intel Core i7-10875H/i9-10980HK";
        char Ram[]="16GB/32GB/64GB";
        char Pc_Name[]="MSI WS66 10TL-079";
        char Gpu[]="Nvidia Quadro RTX 3000, Nvidia Quadro 4000 Max-Q";
        char Display[]= "15.6 inches, 1080p touchscreen @ 60Hz";
        char Storage[]="1TB NVMe SSD";
        char Dimensions[]="14.2 x 9.7 x 0.7 inches";
        char Weight[]="4.6 pounds";
        char Price[]="$3,699.00";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);
if(Pc_Speces_Con==1){
            system("START https://www.walmart.com/ip/MSI-WS66-10TL-079-15-6-Gaming-Mobile-Workstation-Core-i7-10875H-32GB-RAM-1TB-SSD-1920-x-1080-NVIDIA-Quadro-RTX-4000-Windows-10-Pro-Space-Gray/870541545?irgwc=1&sourceid=imp_xBwy9Sy3OxyNT7OTPiwKfypUUkA043za1QavXE0&veh=aff&wmlspartner=imp_64065&clickid=xBwy9Sy3OxyNT7OTPiwKfypUUkA043za1QavXE0&sharedid=6388f93c16107e64b86f7c6c&affiliates_ad_id=568844&campaign_id=9383");
        }

}
if(pc_return==4) {
        char Cpu[]="Intel Core i7-1185G7";
        char Ram[]="8GB";
        char Pc_Name[]="MSI Prestige 14 Evo";
        char Gpu[]="Intel Iris Xe";
        char Display[]= "14-inch, 1080p";
        char Storage[]="1TB NVMe SSD";
        char Dimensions[]="12.5 x 8.5 x 0.6 inches";
        char Weight[]="2.7 pounds";
        char Price[]="$1,045.41";
        Pc_Speces(Cpu,Ram,Pc_Name,Gpu,Display,Storage,Dimensions,Weight,Price);

if(Pc_Speces_Con==1){
            system("START https://www.amazon.com/dp/B0B7VM2QML/ref=asc_df_B0B7VM2QML1669647600000?tag=georiot-us-default-20&ascsubtag=laptopmag-row-4040445346193148400-20&geniuslink=true ");
        }

}




}
if(pc_return==6)
    break;
}while(Pc_Speces_Con==0);
    }while(pc_return==6);

}
