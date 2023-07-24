 /*---------- WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ---------------*/
//__________________ C++ PROGRAM TO DRAW INDIA GATE________________________//

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
void main()
{
   int gd = DETECT, gm;
   int maxx, maxy,i,j;

 // polygon array
   int poly[10];


   // initialize graphics and local variables
   initgraph(&gd, &gm, "c://tc//bgi");

   //______argiment total area
   poly[0]=20;
   poly[1]=20;
   poly[2]=600;
   poly[3]=20;
   poly[4]=600;
   poly[5]=450;
   poly[6]=20;
   poly[7]=450;
   poly[8]=20;
   poly[9]=20;

   //___draw the polygon

   drawpoly(5, poly);

   //____in side gate
   line(250,445,250,230);
   line(350,445,350,230);
   arc(300,250,20,160,54);
   line(245,445,245,150);
   line(242,450,242,150);
   line(355,445,355,150);
   line(358,450,358,150);
   line(242,450,245,445);
   line(245,445,355,445);
   line(355,445,358,450);

   //____ out side layer
   poly[0]=175;
   poly[1]=450;
   poly[2]=175;
   poly[3]=150;
   poly[4]=425;
   poly[5]=150;
   poly[6]=425;
   poly[7]=450;

   //_____draw the polygon
   drawpoly(4, poly);

   //______border 1st pole
   poly[0]=172;
   poly[1]=250;
   poly[2]=243;
   poly[3]=250;
   poly[4]=245;
   poly[5]=253;
   poly[6]=245;
   poly[7]=255;
   poly[8]=243;
   poly[9]=253;
   poly[10]=172;
   poly[11]=253;
   poly[12]=175;
   poly[13]=257;
   drawpoly(7,poly);
   line(172,251,243,251);

    //___border 2nd pole
   poly[0]=427;
   poly[1]=250;
   poly[2]=357;
   poly[3]=250;
   poly[4]=355;
   poly[5]=253;
   poly[6]=355;
   poly[7]=255;
   poly[8]=357;
   poly[9]=253;
   poly[10]=427;
   poly[11]=253;
   poly[12]=425;
   poly[13]=257;
   drawpoly(7,poly);
   line(427,251,357,251);

   //____1th layer
   poly[0]=175;
   poly[1]=150;
   poly[2]=175;
   poly[3]=100;
   poly[4]=425;
   poly[5]=100;
   poly[6]=425;
   poly[7]=150;

   //_____ draw the polygon
   drawpoly(4, poly);

  //______ 2nd layer
   poly[0]=190;
   poly[1]=100;
   poly[2]=190;
   poly[3]=75;
   poly[4]=410;
   poly[5]=75;
   poly[6]=410;
   poly[7]=100;

   // draw the polygon
   drawpoly(4, poly);

   // 3rd layer
   poly[0]=200;
   poly[1]=75;
   poly[2]=200;
   poly[3]=50;
   poly[4]=400;
   poly[5]=50;
   poly[6]=400;
   poly[7]=75;

   // draw the polygon
   drawpoly(4, poly);

   // 4th layer
   poly[0]=250;
   poly[1]=50;
   poly[2]=250;
   poly[3]=30;
   poly[4]=350;
   poly[5]=30;
   poly[6]=350;
   poly[7]=50;

   // draw the polygon
   drawpoly(4, poly);

 //______bordar
 poly[0]=175;
 poly[1]=170;
 poly[2]=155;
 poly[3]=148;
 poly[4]=450;
 poly[5]=148;
 poly[6]=425;
 poly[7]=170;
 drawpoly(4, poly);

 // 3d view of in side
  line(250,445,265,425);
  line(350,445,335,425);
  line(265,425,335,425);
  line(265,425,265,240);
  line(335,425,335,240);
  arc(300,255,20,154,38);

rectangle(10,10,610,460);
rectangle(15,15,605,455);

   //_______gate in side color
   setfillstyle(9,9);
   floodfill(255,425,15);

   setfillstyle(9,15);
   floodfill(280,155,15);

   setfillstyle(4,15);
   floodfill(275,430,15);

   //________3D fill*********
   setfillstyle(6,15);
   floodfill(160,150,15);

   setfillstyle(6,15);
   floodfill(424,149,15);

   setfillstyle(6,15);
   floodfill(445,150,15);

    //_____1st layaer fill
   setfillstyle(10,15);
   floodfill(180,105,15);

   //______ window
   rectangle(200,300,230,400);
   rectangle(375,300,405,400);
   circle(210,215,20);
   circle(390,215,20);

   setfillstyle(6,15);
   floodfill(201,301,15);
   floodfill(376,301,15);
   floodfill(210,215,15);
   floodfill(390,215,15);

     //_____2nd layaer fill
   setfillstyle(9,10);
   floodfill(195,80,15);

   //________3rd layer fill
    setfillstyle(9,15);
   floodfill(205,70,15);

   //________4th layer fill
    setfillstyle(9,4);
   floodfill(255,35,15);

    setfillstyle(10,15);
   floodfill(180,155,15);

   setfillstyle(10,15);
   floodfill(365,155,15);

    setfillstyle(10,15);
   floodfill(180,350,15);

   setfillstyle(10,15);
   floodfill(365,350,15);

   setcolor(6);
   outtextxy(50,30,"I AM PROUD");
   setcolor(15);
   outtextxy(65,45,"TO BE");
   setcolor(10);
   outtextxy(50,60,"AN INDIAN");
   outtextxy(435,425,"Created by :- ");
    outtextxy(435,440,"ROHIT TECH STUDY");

   getch();
   closegraph();
}


/*---------------- I HOPE YOU LIKE THIS PROGRAMMING ---------------------*/

/*____________ LIKE __________ SHARE _________ SUBSCRIBE _________________*/

