///This is final
#include<windows.h>
#include <iostream>
#include <GL/glut.h>
#include <math.h>

//////water
int waterStatus = 0;
float waterX = 0;
float waterY = 0;
float boatx=0;
float boaty=0;
//////car
int carStatus = 0;
float carX = 0;
float carY = 0;
//////cloud
int meghStatus = 0;
float meghX = 0;
float meghY = 0;
/////sun
int sunStatus = 0;
float sunX = 0;
float sunY = 0;
//////bird
int birdsStatus = 0;
float birdsX = 0;
float birdsY = 0;
//////moon
float moonX = 0;
float moonY = 0;
//////
float shipX = 0;
float shipY =0;
//////
int snowStatus = 0;
int  CloudmeghStatus =0;
GLfloat cloudSpeed=5.0f;
GLfloat Position3= 330;





void DrawCircle(float cx, float cy, float r, int num_segments) {

	glBegin(GL_TRIANGLE_FAN);
	for (int i = 0; i < num_segments; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle

		float x = r * cosf(theta);//calculate x
		float y = r * sinf(theta);//calculate y

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
	glFlush();
}

/// rain start and stop
void update3(int value){
    if(Position3<-300)
    {
        Position3=30.0f;
    }
    if(Position3>300)
       {
           Position3=3;
       }
      Position3 -= cloudSpeed;
      glutPostRedisplay();
      glutTimerFunc(25, update3, 0);
}

/// sun movement
float position2 = 0.0f;
float speed2 = 0.7f;

void update2(int value){
    if(position2 >300)
    position2 = -1500;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(100, update2, 0);
}
void sky(){
    glColor3ub (84, 153, 199);
    glBegin(GL_QUADS);
    glVertex2f(0, 480);
    glVertex2f(0, 255);
    glVertex2f(640, 255);
    glVertex2f(640, 480);
    glEnd();
}
void hills(){
    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);////// from left
    glVertex2f(80, 255);
    glVertex2f(120, 290);
    glVertex2f(160, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2f(140, 255);
    glVertex2f(170, 280);
    glVertex2f(200, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2f(180, 255);
    glVertex2f(270, 320);
    glVertex2f(360, 255);
    glEnd();
    //////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(180, 255);
    glVertex2f(270, 320);

    glVertex2f(270, 320);
    glVertex2f(360, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2f(260, 255);
    glVertex2f(320, 300);
    glVertex2f(380, 255);
    glEnd();
    //////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(260, 255);
    glVertex2f(320, 300);

    glVertex2f(320, 300);
    glVertex2f(380, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2f(370, 255);
    glVertex2f(420, 275);
    glVertex2f(470, 255);

    glEnd();
    glFlush();
}
void mountain(){
   /*glColor3ub (19, 141, 117);
    glBegin(GL_QUADS);
    glVertex2f(0, 255);
    glVertex2f(500, 255);
    glVertex2f(500, 258);
    glVertex2f(0, 258);
    glEnd();*/
}
void oposite_village(){
    //////tree 1st(from left)
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(110, 255);
    glVertex2f(110, 270);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(110, 270, 5, 5000);
    DrawCircle(110, 274, 3, 5000);
    glEnd();
    glFlush();
    //////tree 2nd(from left)
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(200, 255);
    glVertex2f(200, 270);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(200, 270, 5, 5000);
    DrawCircle(200, 274, 3, 5000);
    glEnd();
    glFlush();
    //////tree 3rd(from left)
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(250, 255);
    glVertex2f(250, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(250, 275, 5, 5000);
    DrawCircle(250, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tee 4th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(270, 255);
    glVertex2f(270, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(270, 275, 5, 5000);
    DrawCircle(270, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 5th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(300, 255);
    glVertex2f(300, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(300, 275, 5, 6000);
    DrawCircle(300, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 6th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(310, 255);
    glVertex2f(310, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(310, 275, 5, 6000);
    DrawCircle(310, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 7th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(355, 255);
    glVertex2f(355, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(355, 275, 5, 6000);
    DrawCircle(355, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 8th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2f(360, 255);
    glVertex2f(360, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(360, 275, 5, 6000);
    DrawCircle(360, 279, 3, 6000);
    glEnd();
    glFlush();

    //////house 1st
    glColor3ub (144, 164, 174);
    glBegin(GL_POLYGON);//roof
    glVertex2f(150, 260);
    glVertex2f(165, 260);
    glVertex2f(163, 265);
    glVertex2f(152, 265);
    glEnd();

    glColor3ub(153, 153, 153);
    glBegin(GL_QUADS);//body
    glVertex2f(152, 255);
    glVertex2f(163, 255);
    glVertex2f(163, 260);
    glVertex2f(152, 260);
    glEnd();
    glFlush();
    //////house 2nd
    glColor3ub (144, 164, 174);
    glBegin(GL_POLYGON);//roof
    glVertex2f(220, 260);
    glVertex2f(235, 260);
    glVertex2f(233, 265);
    glVertex2f(222, 265);
    glEnd();

    glColor3ub(153, 153, 153);
    glBegin(GL_QUADS);//body
    glVertex2f(222, 255);
    glVertex2f(233, 255);
    glVertex2f(233, 260);
    glVertex2f(222, 260);
    glEnd();
    glFlush();
}
void land(){
    glColor3ub (14, 102, 85);
    glBegin(GL_POLYGON);
    glVertex2f(640, 180);
    glVertex2f(320, 180);
    glVertex2f(450, 250);
    glVertex2f(640, 252);
    glEnd();
}
void river(){
    glColor3ub (118, 215, 196);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(640, 0);
    glVertex2f(640, 180);
    glVertex2f(320, 180);
    glVertex2f(450, 250);
    glVertex2f(450, 252);
   glVertex2f(450, 255);
    glVertex2f(0, 255);
    glEnd();

     glColor3ub (118, 215, 196);
    glBegin(GL_POLYGON);

    glVertex2f(450, 250);
   glVertex2f(450, 255);
    glVertex2f(640, 255);
      glVertex2f(640, 252);

    glEnd();
}

void daywater(){
    glColor3ub (169, 242, 242);
    glBegin(GL_LINES);
    glVertex2f(200, 220);
    glVertex2f(220, 220);

    glVertex2f(210, 230);
    glVertex2f(220, 230);

    glVertex2f(300, 220);
    glVertex2f(320, 220);

    glVertex2f(400, 220);
    glVertex2f(420, 220);

    glVertex2f(100, 240);
    glVertex2f(120, 240);

    glVertex2f(150, 180);
    glVertex2f(150, 180);

    glVertex2f(0, 190);
    glVertex2f(10, 190);

    glVertex2f(0, 200);
    glVertex2f(10, 200);

    glVertex2f(30, 185);
    glVertex2f(40, 185);

    glVertex2f(100, 250);
    glVertex2f(125, 250);

    glVertex2f(150,240);
    glVertex2f(165,240);

    glVertex2f(90,200);
    glVertex2f(100,200);

    glVertex2f(300,190);
    glVertex2f(320,190);

    glVertex2f(270,235);
    glVertex2f(275,235);

    glVertex2f(500,200);
    glVertex2f(510,200);

    glVertex2f(600,220);
    glVertex2f(615,220);

    glVertex2f(550,200);
    glVertex2f(555,200);

    glVertex2f(520,225);
    glVertex2f(540,225);

    glVertex2f(370,215);
    glVertex2f(380,215);

    glEnd();
   //////boat

    ////////////////////////////////noukar body
    glColor3ub (150, 129, 117);
    glBegin(GL_QUADS);
    glVertex2f(20, 220);
    glVertex2f(60, 220);
    glVertex2f(70, 230);
    glVertex2f(10, 230);
    glEnd();
    //////////////

    ///////////////////////////////noukar soi
    glColor3ub (206, 175, 109);
    glBegin(GL_POLYGON);
    glVertex2f(27, 230);
    glVertex2f(57, 230);
    glVertex2f(57, 240);
    glVertex2f(27, 240);
    glEnd();
    //glFlush();
    ////////////////////////////////pal er chera kapor
    glColor3ub (209, 102, 27);
    glBegin(GL_TRIANGLES);
    glVertex2f(57, 230);
    glVertex2f(90, 280);
    glVertex2f(50, 290);
    glEnd();
        ///////////////////////////noukar pal er khuda :D
    glColor3ub (206, 175, 109);
    glBegin(GL_LINES);
    glVertex2f(57, 230);
    glVertex2f(73, 290);
    glEnd();

    /////////////////////////////////gach er guri
    glColor3ub (206, 175, 109);
    glBegin(GL_POLYGON);
    glVertex2f(300, 200);
    glVertex2f(330, 200);
    glVertex2f(330, 210);
    glVertex2f(300, 210);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(310, 210);
    glVertex2f(315, 210);
    glVertex2f(310, 217);
    glVertex2f(305, 217);
    glEnd();
    glFlush();
    /////////////////////////////////gach er gurir shadow
    glColor3ub (149, 187, 198);
    glBegin(GL_POLYGON);
    glVertex2f(295, 190);
    glVertex2f(325, 190);
    glVertex2f(330, 200);
    glVertex2f(300, 200);
    glEnd();
    glFlush();
    ///////////////////////////////noukar shadow
    glColor3ub (149, 187, 198);
    glBegin(GL_QUADS);
    glVertex2f(15, 210);
    glVertex2f(55, 210);
    glVertex2f(60, 220);
    glVertex2f(20, 220);
    glEnd();
}
////////////////boat////////////////
void dayboat()///boat
{
    glColor3ub (153, 51, 0);
    glBegin(GL_QUADS);
    glVertex2f(380, 60);
    glVertex2f(470, 60);
    glVertex2f(490, 100);
    glVertex2f(360, 100);
    glEnd();
    glColor3ub (255, 255, 153);
    glBegin(GL_QUADS);
    glVertex2f(410, 100);
    glVertex2f(470, 100);
    glVertex2f(470, 126);
    glVertex2f(410, 126);
    glEnd();
    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(415.0f, 100.0f);
	glVertex2f(415.0f, 126.0f);
    glEnd();
    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(430.0f, 100.0f);
	glVertex2f(430.0f, 126.0f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(433.0f, 100.0f);
	glVertex2f(433.0f, 126.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(390.0f, 118.0f);    // x, y
	glVertex2f(415.0f, 125.0f);
	glVertex2f(415.0f,  210.0f);

	glEnd();

	 glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(405.0f, 118.0f);    // x, y
	glVertex2f(430.0f, 125.0f);
	glVertex2f(430.0f,  240.0f);

	glEnd();

	 glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(458.0f, 118.0f);    // x, y
	glVertex2f(433.0f, 125.0f);
	glVertex2f(433.0f,  240.0f);

	glEnd();




}
//////////////Ship////////////////////
void nightship()
{
    //////red part
    glColor3ub (255, 51,0 );
    glBegin(GL_QUADS);
    glVertex2f(30, 200);
    glVertex2f(120, 200);
    glVertex2f(126, 209);
    glVertex2f(27, 209);

    glEnd();
     ////white part
    glColor3ub (234, 234, 234);
    glBegin(GL_QUADS);
    glVertex2f(27, 209);
    glVertex2f(126, 209);
    glVertex2f(144, 230);
    glVertex2f(20, 230);
    glEnd();
    //////circle
    glColor3ub (0, 0, 102);
    DrawCircle(30, 219, 4, 6000);
    glEnd();
    glColor3ub (0, 0, 102);
    DrawCircle(45, 219, 4, 6000);
    glEnd();
    glColor3ub (0, 0, 102);
    DrawCircle(60, 219, 4, 6000);
    glEnd();
    glColor3ub (0, 0, 102);
    DrawCircle(75, 219, 4, 6000);
    glEnd();
    glColor3ub (0, 0, 102);
    DrawCircle(90, 219, 4, 6000);
    glEnd();

    glColor3ub (0, 0, 102);
    DrawCircle(105, 219, 4, 6000);
    glEnd();

    glColor3ub (0, 0, 102);
    DrawCircle(120, 219, 4, 6000);
    glEnd();
    //////////////1st

    glColor3ub (255, 204, 102);
    glBegin(GL_QUADS);
    glVertex2f(30, 230);
    glVertex2f(120, 230);
    glVertex2f(110, 250);
    glVertex2f(40, 250);
    glEnd();
   ///////////chad
   glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(70, 250);
    glVertex2f(107, 250);
    glVertex2f(100, 270);
    glVertex2f(70, 270);
    glEnd();
//////////////////line

	glLineWidth(3.0);

	glBegin(GL_LINES);
	glColor3ub (153, 51, 0);
	glVertex2f(40.0f, 250.0f);    // x, y
	glVertex2f(50.0f, 278.0f);
	glVertex2f(50.0f, 278.0f);   // x, y
	glVertex2f(70.0f, 278.0f);
	glVertex2f(70.0f, 278.0f);
	glVertex2f(70.0f, 269.8f);
     glEnd();
     glBegin(GL_LINES);
	glColor3ub (153, 51, 0);
	glVertex2f(50.0f, 250.0f);
	glVertex2f(50.0f, 278.0f);
	glVertex2f(55.0f, 250.0f);
	glVertex2f(55.0f, 278.0f);
	glVertex2f(60.0f, 250.0f);
	glVertex2f(60.0f, 278.0f);
	glVertex2f(65.0f, 250.0f);
	glVertex2f(65.0f, 278.0f);
     glEnd();
     /////////////window
     glBegin(GL_POLYGON);
	glColor3ub (77, 77,77);
	glVertex2f(42.0f, 235.0f);
	glVertex2f(50.0f, 235.0f);
	glVertex2f(50.0f, 245.0f);
	glVertex2f(42.0f, 245.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub (77, 77,77);
	glVertex2f(54.0f, 235.0f);
	glVertex2f(62.0f, 235.0f);
	glVertex2f(62.0f, 245.0f);
	glVertex2f(54.0f, 245.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub (77, 77,77);
	glVertex2f(66.0f, 235.0f);
	glVertex2f(74.0f, 235.0f);
	glVertex2f(74.0f, 245.0f);
	glVertex2f(66.0f, 245.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub (77, 77,77);
	glVertex2f(78.0f, 235.0f);
	glVertex2f(86.0f, 235.0f);
	glVertex2f(86.0f, 245.0f);
	glVertex2f(78.0f, 245.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub (77, 77,77);
	glVertex2f(90.0f, 235.0f);
	glVertex2f(98.0f, 235.0f);
	glVertex2f(98.0f, 245.0f);
	glVertex2f(90.0f, 245.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub (77, 77,77);
	glVertex2f(102.0f, 235.0f);
	glVertex2f(110.0f, 235.0f);
	glVertex2f(110.0f, 245.0f);
	glVertex2f(102.0f, 245.0f);
	glEnd();
//////////////
     glBegin(GL_POLYGON);
	glColor3ub (77, 77,77);
	glVertex2f(78.0f, 255.0f);
	glVertex2f(86.0f, 255.0f);
	glVertex2f(86.0f, 265.0f);
	glVertex2f(78.0f, 265.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub (77, 77,77);
	glVertex2f(90.0f, 255.0f);
	glVertex2f(98.0f, 255.0f);
	glVertex2f(98.0f, 265.0f);
	glVertex2f(90.0f, 265.0f);
	glEnd();



}

////////////////////////////////////////////////////move  the  water
void nightwater(){
    glColor3ub (169, 242, 242);
    glBegin(GL_LINES);
    glVertex2f(200, 220);
    glVertex2f(220, 220);

    glVertex2f(210, 230);
    glVertex2f(220, 230);

    glVertex2f(300, 220);
    glVertex2f(320, 220);

    glVertex2f(400, 220);
    glVertex2f(420, 220);

    glVertex2f(100, 240);
    glVertex2f(120, 240);

    glVertex2f(150, 180);
    glVertex2f(150, 180);

    glVertex2f(0, 190);
    glVertex2f(10, 190);

    glVertex2f(0, 200);
    glVertex2f(10, 200);

    glVertex2f(30, 185);
    glVertex2f(40, 185);

    glVertex2f(100, 250);
    glVertex2f(125, 250);

    glVertex2f(150,240);
    glVertex2f(165,240);

    glVertex2f(90,200);
    glVertex2f(100,200);

    glVertex2f(300,190);
    glVertex2f(320,190);

    glVertex2f(270,235);
    glVertex2f(275,235);

    glVertex2f(500,200);
    glVertex2f(510,200);

    glVertex2f(600,220);
    glVertex2f(615,220);

    glVertex2f(550,200);
    glVertex2f(555,200);

    glVertex2f(520,225);
    glVertex2f(540,225);

    glVertex2f(370,215);
    glVertex2f(380,215);

    glEnd();

    glFlush();

}
void moveWater(int x){
    if (waterStatus ==1)
    {
        waterX += .5;
    }
    if (waterX>300)
    {
        waterX = -200;
    }

    glPushMatrix();
    glTranslatef(waterX, waterY, 0);
    if(x==1)
        {
    daywater();
    }
    else{
        nightwater();
    }
    glPopMatrix();

    glFlush();
}
void moveShip(int x){

        shipX += .5;

    if (shipX>250)
    {
        shipX =+ 250;
    }

    glPushMatrix();
    glTranslatef(shipX, shipY, 0);
    if(x==1)
        {
  nightship();
    }
    else{
        nightship();
    }
    glPopMatrix();

    glFlush();
}
void moveWaterboat(int xx){


        boatx-= .5;


    if (boatx<-600)
    {
        boatx =+ 200;
    }

    glPushMatrix();
    glTranslatef(boatx, boaty, 0);
    if(xx==1)
        {
    dayboat();
    }
    else{
       dayboat();
    }
    glPopMatrix();
    glFlush();
}

void megh(){
    glColor3ub (200, 220, 220);
	DrawCircle(170, 400, 25, 2000);
	DrawCircle(200, 400, 35, 2000);
	DrawCircle(230, 400, 25, 2000);

    glColor3ub (200, 220, 220);
	DrawCircle(300, 420, 25, 2000);
	DrawCircle(330, 420, 35, 2000);
	DrawCircle(360, 420, 25, 2000);

	 glColor3ub (200, 220, 220);
	DrawCircle(500, 400, 25, 2000);
	DrawCircle(530, 400, 35, 2000);
	DrawCircle(560, 400, 25, 2000);
	glFlush();
}

void Cloudmegh(){
    glColor3ub (112, 123, 124  );
	DrawCircle(170, 400, 25, 2000);
	DrawCircle(200, 400, 35, 2000);
	DrawCircle(230, 400, 25, 2000);

    glColor3ub (112, 123, 124  );
	DrawCircle(300, 420, 25, 2000);
	DrawCircle(330, 420, 35, 2000);
	DrawCircle(360, 420, 25, 2000);

    glColor3ub (112, 123, 124 );
	DrawCircle(500, 400, 25, 2000);
	DrawCircle(530, 400, 35, 2000);
	DrawCircle(560, 400, 25, 2000);

	glFlush();
}
void moveMegh(int x){
	if (meghStatus == 1)
        {
            meghX +=.5;
        }
	if (meghX>2000)
        {
            meghX = -200;
        }
	glPushMatrix();
	glTranslatef(meghX, meghY, 0);


      if(x==1)
    {
       megh();
    }
    else{
        Cloudmegh();
    }

	glPopMatrix();
	glFlush();
}
void drawSun(){
    glPushMatrix();
    glTranslatef(0,position2, 0.0f);
    glColor3ub (243, 156, 18);
	DrawCircle(550, 275, 15, 1000);
	//////////////////ray of sun
    glColor3ub (243, 156, 18);
    glBegin(GL_LINES);
    glVertex2f(550, 290);//up
    glVertex2f(550, 300);

    glVertex2f(565, 275);//right
    glVertex2f(575, 275);

    glVertex2f(550, 260);//down
    glVertex2f(550, 250);

    glVertex2f(535, 275);//left
    glVertex2f(525, 275);
    glEnd();
    glPopMatrix();
    //glFlush();

}

void drawMoon(){
    //
    //glTranslatef(0,position4, 0.0f);

    glColor3ub (243, 156, 18);
	DrawCircle(100, 300, 15, 1000);
	//////////////////ray of sun

    //glPopMatrix();
    glFlush();

}
///////////////////////////// birds
void birds(int x){
    //////////////////////1st bird
    glColor3ub (0, 0, 0);
	DrawCircle(60, 300, 3, 1000);
	DrawCircle(63, 300, 2, 1000);
	glBegin(GL_LINES);
	glLineWidth(5);
	glVertex2f(60, 300);
    glVertex2f(65, 307);

    glVertex2f(60, 300);
    glVertex2f(55, 307);
    glEnd();
	///////////////////////2nd bird
	DrawCircle(70, 310, 3, 1000);
	DrawCircle(73, 310, 2, 1000);
	glBegin(GL_LINES);
	glVertex2f(70, 310);
    glVertex2f(75, 317);

    glVertex2f(70, 310);
    glVertex2f(65, 317);
    glEnd();
	//////////////////////////3rd bird
	DrawCircle(75, 290, 3, 1000);
	DrawCircle(78, 290, 2, 1000);
	glBegin(GL_LINES);
	glVertex2f(75, 290);
    glVertex2f(80, 297);

    glVertex2f(75, 290);
    glVertex2f(70, 297);
    glEnd();
	//////////////////////////////4th bird
	DrawCircle(90, 300, 3, 1000);
	DrawCircle(93, 300, 2, 1000);
	glBegin(GL_LINES);
	glVertex2f(90, 300);
    glVertex2f(95, 307);

    glVertex2f(90, 300);
    glVertex2f(85, 307);
    glEnd();
	/////////////////////////////5th bird
	DrawCircle(75, 320, 3, 1000);
	DrawCircle(78, 320, 2, 1000);
	glBegin(GL_LINES);
	glVertex2f(75, 320);
    glVertex2f(80, 327);

    glVertex2f(75, 320);
    glVertex2f(70, 327);
    glEnd();
}
//////////////////////////////move bird
void movebirds(){
	if (birdsStatus == 1)
        {
            birdsX += 2;
        }
	if (birdsX>600)
        {
            birdsX = -200;
        }
	glPushMatrix();
	glTranslatef(birdsX, birdsY, 0);
	birds(1);
	glPopMatrix();
}

void moveMoon(int x){

            moonY += 0.1f;

	if (moonY>400)
        {
            moonY = -150;
        }
	glPushMatrix();
	glTranslatef(moonX, moonY, 0);
	 if(x==1)
    {
       drawMoon();
    }
	glPopMatrix();
	glFlush();
}



void myDisplay(void){
if(position2<=225.0f){
    sky();
    hills();
    mountain();
    oposite_village();

    drawSun();
    land();

    river();

    moveWater(1);
    moveWaterboat(1);
    // moveShip(1);
    movebirds();

    moveMegh(1);

    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();}
    else{
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient[] = {0.41,1.31,1.88, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
    sky();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient2[] = {1.29,1.29,1.29, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);
    hills();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient3[] = {1.9,1.9,1.9, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);
    mountain();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient1[] = {.60,1.90,2.76, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);
    river();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient4[] = {4.0,4.0,4.0, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);
    //drawMoon();
     moveMoon(1);
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient5[] = {0.0,1.50,1.25, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient5);
    land();
    glDisable(GL_LIGHTING);

    moveWater(2);

    moveMegh(2);
    //dayboat();
    moveShip(1);
 moveWaterboat(1);
	glFlush();
    glutPostRedisplay();
    glutSwapBuffers();

    }


}
/*void displaynight(){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient[] = {0.41,1.31,1.88, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
    sky();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient2[] = {1.29,1.29,1.29, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);
    hills();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient3[] = {1.9,1.9,1.9, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);
    mountain();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient1[] = {.60,1.90,2.76, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);
    river();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient4[] = {4.0,4.0,4.0, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);
    drawMoon();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient5[] = {0.0,1.50,1.25, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient5);
    land();
    glDisable(GL_LIGHTING);

    moveWater(2);
//    nightShipyard();
//    nightTree();
//    nightLamp();
//    nightRoad();
//    nightHouse();
    moveMegh(2);
	glFlush();
    glutPostRedisplay();
    glutSwapBuffers();

}*/


//////////////moving algorithms
void keyboard(unsigned char key, int x, int y){


	 if (key == 'C' || key == 'c'){		//megh start
		meghStatus = 1;
	}
	else if (key == 'e' || key == 'E'){		//megh STOP
		meghStatus = 0;
	}
	else if (key == 'R' || key == 'r'){		////water strt
		waterStatus = 1;
	}
	else if (key == 'T' || key == 't'){		//water stop
		waterStatus = 0;
	}

    else if (key == 'B' || key == 'b'){		////bird strt
		birdsStatus = 1;
	}
	else if (key == 'G' || key == 'g'){		//bird stop
		birdsStatus = 0;
	}

}

void myInit(void){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glColor3f(.0f,.0f,.0f);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("Light House");
    glutPostRedisplay();
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(keyboard);
    myInit();
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(25,update3,0);
    glutMainLoop();
    return 0;
}
