#include<conio.h>
#include<graphics.h>
#include<dos.h>
void bird();
void handup();
void handdown();
int a,b,c,d,e , f ;
void background();
void background2();
class doll
{
     public:
	void dolldraw(int x)
	{
		int y=100;
		circle(x,y+10,10);
		line(x,y+20,x,y+100);
		line(x,y+40,x-20,y+70);
		line(x,y+40,x+20,y+70);
		line(x,y+100,x-20,y+120);
		line(x,y+100,x+20,y+120);
	}
	void dollmoll(int x)
	{
		int y=100;
		circle(x,y+10,10);
		line(x,y+20,x,y+100);
		line(x,y+50,x-20,y+30);
		line(x,y+50,x+20,y+30);
		line(x,y+100,x-20,y+90);
		line(x,y+100,x+20,y+90);
	}

};
void main()
{
int gd=DETECT,gm,i=0 , m,s,j ;
doll a1, b1, c1 ,d1, e1 ;
int h , k , w = 50 ;
initgraph(&gd,&gm,"c:\\tc\\bgi");
for(i;i<600;i++)
{
outtextxy(20 , 30 , " Delhi " ) ;
line(80+i,300-i,250+i,300-i);
line(150+i,340-i,200+i,340-i);
line(150+i,340-i,100+i,400-i);
line(200+i,340-i,100+i,400-i);
line(80+i,380-i,115+i,380-i);
line(132+i,380-i,250+i,380-i);
ellipse(250+i,340-i,270,90,80,40);
line(100+i,270-i,150+i,300-i);
line(100+i,270-i,200+i,300-i);
line(80+i,300-i,65+i,260-i);
arc(80+i,340-i,180,270,40);
line(40+i,340-i,40+i,260-i);
line(40+i,260-i,65+i,260-i);
ellipse(250+i,338-i,10,81,70,30);
line(261+i,333-i,320+i,333-i);
line(261+i,333-i,261+i,310-i);
rectangle(100+i,310-i,120+i,330-i);
rectangle(130+i,310-i,150+i,330-i);
rectangle(160+i,310-i,180+i,330-i);
rectangle(190+i,310-i,210+i,330-i);
rectangle(220+i,310-i,240+i,330-i);
//
line(0,459,679,459);

rectangle(510-i,459,550-i,430) ;
rectangle(550-i,459,610-i,430);
line(530-i,410,550-i,430);
line(530-i,410,510-i,430);
line(590-i,410,610-i,430);
line(590-i,410,530-i,410);

rectangle(430-i,430,490-i,459);
rectangle(390-i,430,430-i,459);
line(410-i,410,430-i,430);
line(410-i,410,390-i,430);
line(410-i,410,470-i,410);
line(470-i,410,490-i,430);

delay(5);
cleardevice();
}
outtextxy( 0 , 10 , "Bhubaneshwar");
line(100,1,500,1);
line(0,100,600,100);
line(100,1,0,100);
line(500,1,600,100);
line(200,90,400,90);
line(200,90,210,100);
line(400,90,390,100);
line(210,100,210,250);
line(390,100,390,250);
line(210,250,390,250);
circle(300,60,20);
floodfill(310,61,WHITE);
line(390,185,210,185);
m=0;
for(i=0;i<18;i++)
{
line(220+m,185,220+m,250);
m=m+10;
}
line(270,115,270,185);
line(330,115,330,185);
line(270,115,330,115);
circle(320,175,2);

line(200,90,300,1);
line(400,90,300,1);
line(30,100,30,260);
line(30,260,570,260);
line(570,100,570,260);

//window
m=0;
for(i=0;i<2;i++)
{
rectangle(90+m,140,140+m,210);
line(80+m,135,150+m,135);
line(80+m,135,90+m,140);
line(150+m,135,140+m,140);
line(115+m,140,115+m,210);
rectangle(80+m,210,150+m,217);
m=m+350;
}
line(30,260,30,450);
line(570,260,570,430);
line(30,265,570,265);
line(30,280,570,280);
line(60,280,60,450);
line(100,430,570,430);

line(100,280,100,430);
line(300,280,300,430);
line(300,380,570,380);

m=0;
for(i=0;i<8;i++)
{
line(320+m,380,320+m,430);
line(330+m,380,330+m,430);
s=0;
for(j=0;j<17;j++)
{
line(320+m,380+s,330+m,380+s);
s=s+3;
}
s=0;
m=m+30;

}
line(480,300,480,380);
line(480,300,540,300);
line(540,300,540,380);

rectangle(170,310,220,360);
rectangle(30,110,210,115);
rectangle(390,110,570,115);
rectangle(290,280,300,430);
rectangle(32,282,58,448);
floodfill(40,300,WHITE);
floodfill(180,200,WHITE);
floodfill(180,300,WHITE);
floodfill(120,30,WHITE);
floodfill(500,30,WHITE);
floodfill(450,350,WHITE);
delay(800);
cleardevice();
for (i=0;i<500;i++)
{
/***CAR BODY ******/
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);

/***CAR Windows***/
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

/**Wheels**/
circle(110+i,370,17);
circle(240+i,370,17);

delay(10);
cleardevice();
line(0,390,639,390);  //ROAD
}
outtextxy(10, 20 , " Odisha : Full of scenic beauty with its beaches ... " );
background();

//man
circle(280,340,8);
circle(284,338,1);
line(282,343,285,343);
line(278,348,278,355);
line(282,348,282,355);
rectangle(275,355,285,375);
line(280,360,310,355);
line(280,363,310,358);
line(285,375,287,395);
line(275,375,282,395);
rectangle(282,395,288,398);
line(288,395,290,398);

delay(1000);
cleardevice();
outtextxy(10, 20 , " Odisha : Full of scenic beauty with its beaches ... " );
background();


//man
circle(290,325,7);
circle(294,323,1);
line(292,328,294,328);
line(290,333,290,338);
line(293,333,293,338);
rectangle(287,340,294,355);
//leg
line(287,355,305,370);
line(294,355,304,366);
//hand
line(289,345,305,340);
line(290,342,305,338);




//man climbing
d=0;
for(c=0;c<75;c++)
{
outtextxy(10, 20 , " Odisha : Full of scenic beauty with its beaches ... " );
circle(290,325-d,7);
circle(294,323-d,1);
line(292,328-d,294,328-d);
line(290,333-d,290,338-d);
line(293,333-d,293,338-d);
rectangle(287,340-d,294,355-d);

//leg
line(287,355-(d-1),305,370-(d-1));
line(294,355-(d-1),304,366-(d-1));


if(c%3==0)
{

//hand
line(289,345-d,305,340-d);
line(290,342-d,305,338-d);
delay(200);
line(289,345-d,305,340-d+3);
line(290,342-d,305,338-d+3);
delay(200);
}
//leg
line(287,355-d,305,370-d);
line(294,355-d,304,366-d);


d=d+2;
 delay(40);
 cleardevice();

background();

}
//man top
outtextxy(10, 20 , " Odisha : Full of scenic beauty with its beaches ... " );
circle(290,325-d,7);
circle(294,323-d,1);
line(292,328-d,294,328-d);
line(290,333-d,290,338-d);
line(293,333-d,293,338-d);
rectangle(287,340-d,294,355-d);

//leg
outtextxy(10, 20 , " Odisha : Full of scenic beauty with its beaches ... " );
line(287,355-(d-1),305,370-(d-1));
line(294,355-(d-1),304,366-(d-1));
//hand
line(289,345-d,305,340-d);
line(290,342-d,305,338-d);

delay(500);
cleardevice();
{
outtextxy(10, 20 , " Odisha : Full of scenic beauty with its beaches ... " );
background();


//man top
circle(290,325-d,7);
circle(294,323-d,1);
line(292,328-d,294,328-d);
line(290,333-d,290,338-d);
line(293,333-d,293,338-d);
rectangle(287,340-d,294,355-d);

//leg
line(287,355-(d-1),305,370-(d-1));
line(294,355-(d-1),304,366-(d-1));

//new hand
//hand
line(289,345-d,305,347-d);
line(290,342-d,288,321-d);
}
delay(500);
 e=0;
 //falling coc
for(c=0;c<90;c++)
{
outtextxy(10, 20 , " Odisha : Full of scenic beauty with its beaches ... " );
circle(285,160+e,10);
floodfill(286,162+e,WHITE);

line(285,150+e,276,145+e);
line(285,150+e,293,145+e);

e=e+3;

delay(20);
cleardevice();

background2();

//man top
circle(290,325-d,7);
circle(294,323-d,1);
line(292,328-d,294,328-d);
line(290,333-d,290,338-d);
line(293,333-d,293,338-d);
rectangle(287,340-d,294,355-d);

//leg
line(287,355-(d-1),305,370-(d-1));
line(294,355-(d-1),304,366-(d-1));

//hand
line(289,345-d,305,340-d);
line(290,342-d,305,338-d);

}
circle(285,160+e,10);
floodfill(286,162+e,WHITE);
line(285,150+e,276,145+e);
line(285,150+e,293,145+e);

delay(1000);
//man comng dwn
f=0;
for(c=0;c<60;c++)
{
//man top
outtextxy(10, 20 , " Odisha : Full of scenic beauty with its beaches ... " );
circle(290,325-d+f,7);
circle(294,323-d+f,1);
line(292,328-d+f,294,328-d+f);
line(290,333-d+f,290,338-d+f);
line(293,333-d+f,293,338-d+f);
rectangle(287,340-d+f,294,355-d+f);

//leg
line(287,355-d+f,305,370-d+f);
line(294,355-d+f,304,366-d+f);

//hand
line(289,345-d+f,305,340-d+f);
line(290,342-d+f,305,338-d+f);
f=f+3;
delay(30);
cleardevice();
circle(285,160+e,10);
floodfill(286,162+e,WHITE);

line(285,150+e,276,145+e);
line(285,150+e,293,145+e);
background2();
}
//man top
circle(290,325-d+f,7);
circle(294,323-d+f,1);
line(292,328-d+f,294,328-d+f);
line(290,333-d+f,290,338-d+f);
line(293,333-d+f,293,338-d+f);
rectangle(287,340-d+f,294,355-d+f);

//leg
line(287,355-d+f,305,370-d+f);
line(294,355-d+f,304,366-d+f);

//hand
line(289,345-d+f,305,340-d+f);
line(290,342-d+f,305,338-d+f);
for (i=0;i<500;i++)
{
/***CAR BODY ******/
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);

/***CAR Windows***/
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

/**Wheels**/
circle(110+i,370,17);
circle(240+i,370,17);

delay(10);
cleardevice();
line(0,390,639,390);  //ROAD
}
b=0;
c=0;
d=0;

for(a=1 , i = 0  ;a<220 && i<500 ;a++ , i++ )
{
outtextxy(10 , 20 , " chilika Lake : Destination to Migratory birds... " );
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);

/***CAR Windows***/
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

/**Wheels**/
circle(110+i,370,17);
circle(240+i,370,17);

delay(10);
line(0,390,639,390);
bird();
if(a%2==0)
{
handup();
}
else
{
handdown();
}
delay(100);
cleardevice();
b=b+3;
}
outtextxy(10,20 , " Odisha : State of temples ... Konark,jagannath puri and many more");
line(250,250,350,250) ;
  line(250,260,350,260) ;
  line(250,250,250,260) ;
  line(350,250,350,260) ;
  //Base 2
  line(230,260,370,260) ;
  line(230,270,370,270) ;
  line(230,260,230,270) ;
  line(370,260,370,270) ;
  // Middle Part
  line(265,250,265,170) ;
  line(335,250,335,170) ;
  line(280,250,280,200) ;
  line(320,250,320,200) ;
  line(280,200,320,200) ;
  line(265,170,335,170) ;
  // Pattern
  line(280,200,284,196) ;
  line(284,196,288,200) ;
  line(288,200,292,196) ;
  line(292,196,296,200) ;
  line(296,200,300,196) ;
  line(300,196,304,200) ;
  line(304,200,308,196) ;
  line(308,196,312,200) ;
  line(312,200,316,196) ;
  line(316,196,320,200) ;
  //Tomb
  arc(300,170,0,180,35) ;
  //Circle
  circle(300,125,10) ;
  circle(300,110,5) ;
  // Pole
  line(300,105,300,65) ;
  // Flag
  line(300,65,320,75);
  line(320,75,300,85) ;
  delay(600);
for (i=0;i<500;i++)
{
/***CAR BODY ******/
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);

/***CAR Windows***/
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

/**Wheels**/
circle(110+i,370,17);
circle(240+i,370,17);

delay(10);
cleardevice();
line(0,390,639,390);  //ROAD
}
while(!kbhit())
{
		outtextxy( 10 , 20 , "Odissi dance : Dance depicting stories of Radha and Krishna ");
		a1.dolldraw(w);
		h=w+45;
		b1.dolldraw(h);
		j=h+45;
		c1.dolldraw(j);
		i=j+45;
		d1.dolldraw(i);
		k=i+45;
		e1.dolldraw(k);
		delay(200);
		cleardevice();
		a1.dollmoll(w);
		b1.dollmoll(h);
		c1.dollmoll(i);
		d1.dollmoll(j);
		e1.dollmoll(k);
		delay(200);
		cleardevice();
	}
outtextxy( 40 , 50 , " Odisha.. state with scenic beauty , state of culture , state of adventure... " ) ;
outtextxy ( 40 , 60 , " Come N Visit Odisha ...Sbagata " );
getch();
getch();
}
void bird()
{
//bird
circle(50+b,100,5);
line(53+b,98,60+b,100);
line(53+b,102,60+b,100);
circle(50+b,98,1);
ellipse(35+b,100,0,360,10,5);
line(28+b,100,15+b,95);
line(28+b,100,14+b,96);
line(29+b,100,13+b,97);
line(29+b,101,12+b,98);
line(29+b,102,10+b,99);
line(29+b,103,12+b,100);

}


void handdown()
{
c=b;
//handdown
ellipse(35+c,106,210,360,6,15);
line(36+c,100,30+c,110);
line(39+c,107,36+c,113);
line(36+c,107,33+c,113);

}

void handup()
{
d=b;
//handup
ellipse(35+d,94,0,150,6,15);
line(36+d,100,30+d,90);
line(36+d,87,38+d,93);
line(34+d,87,36+d,93);

}
void background()
{

line(300,150,300,400);
line(320,150,320,400);
b=0;

for(a=0;a<10;a++)
{
line(300,155+b,320,155+b);
b=b+25;
 }
ellipse(320,430,0,90,35,30);
ellipse(300,430,90,180,35,30);
//1st leaf
line(295,140,240,130);
line(240,130,180,160);
line(180,160,210,155);
line(210,155,205,160);
line(205,160,235,150);
line(235,150,225,158);
line(225,158,275,145);
//2nd leaf
line(325,145,385,130);
line(385,130,420,160);
line(420,160,395,155);
line(395,155,400,160);
line(400,160,365,150);
line(365,150,370,155);
line(370,155,330,150);

line(296,130,220,110);
line(220,110,200,140);
line(200,140,215,135);
line(325,135,390,100);
line(390,100,410,130);
line(410,130,400,125);
line(390,115,410,142);
line(410,142,400,140);

line(300,120,390,80);
line(390,80,400,110);
line(310,110,260,80);
line(260,80,230,110);
circle(285,160,10);
floodfill(286,162,WHITE);
line(285,150,276,145);
line(285,150,293,145);
circle(280,157,10);
floodfill(271,158,WHITE);
circle(275,157,10);
circle(330,159,10);
floodfill(329,157,WHITE);
circle(330,164,10);
circle(335,160,10);
line(300,150,300,400);
line(320,150,320,400);


b=0;
for(a=0;a<10;a++)
{
line(300,155+b,320,155+b);
b=b+25;
 }
ellipse(320,430,0,90,35,30);
ellipse(300,430,90,180,35,30);
//1st leaf
line(295,140,240,130);
line(240,130,180,160);
line(180,160,210,155);
line(210,155,205,160);
line(205,160,235,150);
line(235,150,225,158);
line(225,158,275,145);
//2nd leaf
line(325,145,385,130);
line(385,130,420,160);
line(420,160,395,155);
line(395,155,400,160);
line(400,160,365,150);
line(365,150,370,155);
line(370,155,330,150);

line(296,130,220,110);
line(220,110,200,140);
line(200,140,215,135);
line(325,135,390,100);
line(390,100,410,130);
line(410,130,400,125);
line(390,115,410,142);
line(410,142,400,140);

line(300,120,390,80);
line(390,80,400,110);
line(310,110,260,80);
line(260,80,230,110);
circle(285,160,10);
floodfill(286,162,WHITE);
line(285,150,276,145);
line(285,150,293,145);
circle(280,157,10);
floodfill(271,158,WHITE);
circle(275,157,10);
circle(330,159,10);
floodfill(329,157,WHITE);
circle(330,164,10);
circle(335,160,10);


}
void background2()
{

 line(300,150,300,400);
line(320,150,320,400);
b=0;

for(a=0;a<10;a++)
{
line(300,155+b,320,155+b);
b=b+25;
 }
ellipse(320,430,0,90,35,30);
ellipse(300,430,90,180,35,30);
//1st leaf
line(295,140,240,130);
line(240,130,180,160);
line(180,160,210,155);
line(210,155,205,160);
line(205,160,235,150);
line(235,150,225,158);
line(225,158,275,145);
//2nd leaf
line(325,145,385,130);
line(385,130,420,160);
line(420,160,395,155);
line(395,155,400,160);
line(400,160,365,150);
line(365,150,370,155);
line(370,155,330,150);

line(296,130,220,110);
line(220,110,200,140);
line(200,140,215,135);
line(325,135,390,100);
line(390,100,410,130);
line(410,130,400,125);
line(390,115,410,142);
line(410,142,400,140);

line(300,120,390,80);
line(390,80,400,110);
line(310,110,260,80);
line(260,80,230,110);
circle(280,157,10);
floodfill(271,158,WHITE);
circle(275,157,10);
circle(330,159,10);
floodfill(329,157,WHITE);
circle(330,164,10);
circle(335,160,10);


}