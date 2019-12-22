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
int meghmegh = 1;
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
//////rain
int rainstatus=0;
int x=0;
int y=0;
float wx=0;
float wy=0;
////
int lightstatus = 0;
int snowStatus = 0;
int  CloudmeghStatus =0;
int  winter =0;
int  waterboat =1;
GLfloat cloudSpeed=5.0f;
GLfloat Position3= 330;




void drawQuad(GLint x0, GLint y0, GLint x1, GLint y1, GLint x2, GLint y2, GLint x3, GLint y3)
{ glBegin(GL_QUADS);
  glVertex2f(x0,y0);glVertex2f(x1,y1);glVertex2f(x2,y2);glVertex2f(x3,y3);
  glEnd();
}

void drawTriangle(GLint x0, GLint y0, GLint x1, GLint y1, GLint x2, GLint y2)
{   glBegin(GL_TRIANGLES);
    glVertex2f(x0,y0);glVertex2f(x1,y1);glVertex2f(x2,y2);
    glEnd();
}
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
void snow(){
  if(winter ==1){
    glPushMatrix();
    //glTranslatef(0.0f,Position3, 0.0f);

    glTranslatef(0.0f,Position3, 0.0f);

    glColor3ub(255, 255, 255);
    DrawCircle(400, 480, 1, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(600, 480, 1, 2000);
   glColor3ub(255, 255, 255);
	DrawCircle(420, 480, 1, 2000);
	DrawCircle(440, 480, .5, 2000);
	DrawCircle(460, 500, 1, 2000);
glColor3ub(255, 255, 255);
	DrawCircle(480, 490, 1, 2000);
	DrawCircle(500, 480, .5, 2000);
	DrawCircle(520, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(570, 500, .5, 2000);
	DrawCircle(580, 480, 1, 2000);
	DrawCircle(590, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(100, 480, .8, 2000);
	DrawCircle(120, 490, .5, 2000);
	DrawCircle(140, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(160, 480, .5, 2000);
	DrawCircle(180, 480, .5, 2000);
	DrawCircle(200, 490, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(220, 490, 1, 2000);
	DrawCircle(240, 480, .5, 2000);
	DrawCircle(260, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(280, 500, .5, 2000);
	DrawCircle(300, 480, .5, 2000);
	DrawCircle(320, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(340, 480, .5, 2000);
	DrawCircle(360, 490, .5, 2000);
	DrawCircle(380, 480, 1, 2000);

    glTranslatef(0.0f,Position3, 0.0f);

   glColor3ub(255, 255, 255);
    DrawCircle(10, 600, 1, 2000);
	DrawCircle(30, 681, .5, 2000);
	DrawCircle(90, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(10, 500, .8, 2000);
	DrawCircle(30, 690, .5, 2000);
	DrawCircle(50, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(70, 600, .5, 2000);
	DrawCircle(90, 681, .5, 2000);
	DrawCircle(21, 690, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(610, 600, 1, 2000);
	DrawCircle(630, 681, .5, 2000);
	DrawCircle(690, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(610, 500, .8, 2000);
	DrawCircle(630, 690, .5, 2000);
	DrawCircle(650, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(670, 600, .5, 2000);
	DrawCircle(690, 681, .5, 2000);
	DrawCircle(621, 690, 1, 2000);
    glColor3ub(28, 40, 51);
    DrawCircle(410, 480, .5, 2000);
	DrawCircle(510, 490, .5, 2000);
	DrawCircle(610, 480, 1, 2000);
    glColor3ub(255, 255, 255);
	DrawCircle(410, 480, .5, 2000);
	DrawCircle(430, 490, .5, 2000);
	DrawCircle(450, 480, 1, 2000);
	glColor3ub(255, 255, 255);
	DrawCircle(470, 480, .5, 2000);
	DrawCircle(490, 480, .5, 2000);
	DrawCircle(530, 490, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(570, 500, .5, 2000);
	DrawCircle(580, 480, 1, 2000);
	DrawCircle(590, 490, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(110, 500, .8, 2000);
	DrawCircle(130, 490, .5, 2000);
	DrawCircle(150, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(170, 480, .5, 2000);
	DrawCircle(190, 490, .5, 2000);
	DrawCircle(210, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(230, 500, .5, 2000);
	DrawCircle(250, 490, .5, 2000);
	DrawCircle(270, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(290, 500, .5, 2000);
	DrawCircle(310, 490, .5, 2000);
	DrawCircle(330, 480, .5, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(350, 500, .5, 2000);
	DrawCircle(370, 480, .5, 2000);
	DrawCircle(390, 490, .5, 2000);

    glTranslatef(Position3,Position3, 0.0f);

   glColor3ub(255, 255, 255);
    DrawCircle(10, 600, 1, 2000);
	DrawCircle(30, 681, .5, 2000);
	DrawCircle(90, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(10, 500, .8, 2000);
	DrawCircle(30, 690, .5, 2000);
	DrawCircle(50, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(70, 600, .5, 2000);
	DrawCircle(90, 681, .5, 2000);
	DrawCircle(21, 690, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(610, 600, 1, 2000);
	DrawCircle(630, 681, .5, 2000);
	DrawCircle(690, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(610, 500, .8, 2000);
	DrawCircle(630, 690, .5, 2000);
	DrawCircle(650, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(670, 600, .5, 2000);
	DrawCircle(690, 681, .5, 2000);
	DrawCircle(621, 690, 1, 2000);
    glColor3ub(255, 255, 255);
    DrawCircle(400, 500, .7, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(600, 480, .7, 2000);
glColor3ub(255, 255, 255);
	DrawCircle(420, 500, .7, 2000);
	DrawCircle(440, 490, .7, 2000);
	DrawCircle(460, 480, .7, 2000);
	glColor3ub(255, 255, 255);
	DrawCircle(480, 500, .5, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(520, 480, .5, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(570, 500, .7, 2000);
	DrawCircle(580, 490, .7, 2000);
	DrawCircle(590, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(100, 500, .8, 2000);
	DrawCircle(120, 490, .8, 2000);
	DrawCircle(140, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(160, 500, .7, 2000);
	DrawCircle(180, 490, .7, 2000);
	DrawCircle(200, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(220, 500, 1, 2000);
	DrawCircle(240, 490, .5, 2000);
	DrawCircle(260, 480, .5, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(280, 500, 1, 2000);
	DrawCircle(300, 490, .5, 2000);
	DrawCircle(320, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(340, 500, .5, 2000);
	DrawCircle(360, 490, 1, 2000);
	DrawCircle(380, 480, .5, 2000);
    glColor3ub(255, 255, 255);
    DrawCircle(410, 500, 1, 2000);
	DrawCircle(510, 490, .7, 2000);
	DrawCircle(610, 480, .6, 2000);
   glColor3ub(255, 255, 255);
	DrawCircle(410, 480, .7, 2000);
	DrawCircle(430, 490, .6, 2000);
	DrawCircle(450, 500, .5, 2000);
	glColor3ub(255, 255, 255);
	DrawCircle(470, 500, 1, 2000);
	DrawCircle(490, 490, .5, 2000);
	DrawCircle(530, 489, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(570, 500, 1, 2000);
	DrawCircle(580, 481, .7, 2000);
	DrawCircle(590, 491, .8, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(110, 500, .8, 2000);
	DrawCircle(130, 490, .5, 2000);
	DrawCircle(150, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(170, 500, 1, 2000);
	DrawCircle(190, 481, .5, 2000);
	DrawCircle(210, 490, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(230, 500, .5, 2000);
	DrawCircle(250, 498, .7, 2000);
	DrawCircle(270, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(290, 500, .5, 2000);
	DrawCircle(310, 490, .7, 2000);
	DrawCircle(330, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(350, 500, .5, 2000);
	DrawCircle(370, 490, 1, 2000);
	DrawCircle(390, 480, .7, 2000);
   glColor3ub(255, 255, 255);
    DrawCircle(400, 500, 1, 2000);
	DrawCircle(500, 490, .5, 2000);
	DrawCircle(600, 480, .7, 2000);
glColor3ub(255, 255, 255);
	DrawCircle(420, 500, 1, 2000);
	DrawCircle(440, 490, 1, 2000);
	DrawCircle(460, 480, 1, 2000);
glColor3ub(255, 255, 255);
	DrawCircle(480, 500, .7, 2000);
	DrawCircle(500, 490, 1, 2000);
	DrawCircle(520, 480, .7, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(570, 500, 1, 2000);
	DrawCircle(580, 490, .5, 2000);
	DrawCircle(590, 480, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(100, 500, .8, 2000);
	DrawCircle(120, 490, .5, 2000);
	DrawCircle(140, 480, .8, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(160, 500, .7, 2000);
	DrawCircle(180, 490, 1, 2000);
	DrawCircle(200, 480, 1, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(220, 500, 1, 2000);
	DrawCircle(240, 490, .5, 2000);
	DrawCircle(260, 480, 1, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(280, 500, 1, 2000);
	DrawCircle(300, 490, .5, 2000);
	DrawCircle(320, 480, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(340, 500, .5, 2000);
	DrawCircle(360, 490, .7, 2000);
	DrawCircle(380, 480, 1, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(410, 500, 1, 2000);
	DrawCircle(510, 490, .7, 2000);
	DrawCircle(610, 480, 1, 2000);
   glColor3ub(255, 255, 255);
	DrawCircle(410, 480, 1, 2000);
	DrawCircle(430, 490, .7, 2000);
	DrawCircle(450, 500, 1, 2000);
	glColor3ub(255, 255, 255);
	DrawCircle(470, 600, 1, 2000);
	DrawCircle(490, 690, .5, 2000);
	DrawCircle(530, 689, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(570, 600, 1, 2000);
	DrawCircle(580, 681, .5, 2000);
	DrawCircle(590, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(110, 500, .8, 2000);
	DrawCircle(130, 690, .5, 2000);
	DrawCircle(150, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(170, 600, .5, 2000);
	DrawCircle(190, 681, .5, 2000);
	DrawCircle(210, 690, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(230, 600, 1, 2000);
	DrawCircle(250, 698, .7, 2000);
	DrawCircle(270, 680, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(290, 600, 1, 2000);
	DrawCircle(310, 690, .5, 2000);
	DrawCircle(330, 680, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(350, 600, 1, 2000);
	DrawCircle(370, 690, .7, 2000);
	DrawCircle(390, 680, 1, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(10, 600, 1, 2000);
	DrawCircle(30, 681, .5, 2000);
	DrawCircle(90, 691, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(10, 500, .8, 2000);
	DrawCircle(30, 690, .5, 2000);
	DrawCircle(50, 680, .8, 2000);
	glColor3ub(255, 255, 255);
    DrawCircle(70, 600, .5, 2000);
	DrawCircle(90, 681, .5, 2000);
	DrawCircle(21, 690, 1, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(610, 600, 1, 2000);
	DrawCircle(630, 681, .5, 2000);
	DrawCircle(690, 691, .8, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(610, 500, .8, 2000);
	DrawCircle(630, 690, .5, 2000);
    DrawCircle(650, 680, .8, 2000);
glColor3ub(255, 255, 255);
    DrawCircle(670, 600, .5, 2000);
	DrawCircle(690, 681, .5, 2000);
	DrawCircle(621, 690, 1, 2000);

    glPopMatrix();

    }
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
    if(position2 > 300)
    position2 = +1500;
    position2 -= speed2;
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
void wintersky()
{
    if(winter==1)
    {
         glColor3ub (200, 220, 220);
         glBegin(GL_QUADS);
    glVertex2f(0, 480);
    glVertex2f(0, 255);
    glVertex2f(640, 255);
    glVertex2f(640, 480);
    glEnd();
    }
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
   glColor3ub (19, 141, 117);
    glBegin(GL_QUADS);
    glVertex2f(0, 255);
    glVertex2f(500, 255);
    glVertex2f(500, 258);
    glVertex2f(0, 258);
    glEnd();
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
void tree()
 {
    glColor3f(0,1,0);
    drawTriangle(588,217,600,217,594,290);
    glColor3ub(145,96,81);
    drawQuad(593,210,595,210,595,217,593,217);

    glColor3f(0,1,0);
    drawTriangle(575,215,585,215,580,280);
    glColor3ub(145,96,81);
    drawQuad(579,210,581,210,581,215,579,215);


    glColor3f(0,1,0);
    drawTriangle(583,213,591,213,587,270);
    glColor3ub(145,96,81);
    drawQuad(586,210,588,210,588,213,586,213);
 }
void land(){
    glColor3ub (3, 90, 30);
    glBegin(GL_POLYGON);
    glVertex2f(640, 150);
    glVertex2f(400, 150);
    glVertex2f(450, 225);
    glVertex2f(640, 227);
    glEnd();
    glColor3ub (3, 71, 23);
    glBegin(GL_POLYGON);
    glVertex2f(640, 150);
    glVertex2f(400, 150);
    glVertex2f(450, 216);
    glVertex2f(640, 215);
    glEnd();
}
void winterscene()
{
    if(winter==1)
    {
        glColor3ub(255, 255, 255);
    glBegin(GL_TRIANGLES);////// from left
    glVertex2f(100, 280);
    glVertex2f(120, 290);
    glVertex2f(140, 280);
    glEnd();

  /*  glColor3ub(21, 67, 96);
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
    glVertex2f(470, 255);*/

    //glEnd();
    glFlush();
    }
}
void river(){
    glColor3ub (118, 215, 196);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(640, 0);
    glVertex2f(640, 255);
      glVertex2f(0, 255);

    glEnd();
}
void winterriver(){
    if (winter==1){
    glColor3ub (179, 230, 244);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(640, 0);
    glVertex2f(640, 255);
      glVertex2f(0, 255);

    glEnd();}
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



    glVertex2f(270,235);
    glVertex2f(275,235);



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

void lighthouse()
{
     glColor3ub (51, 102, 153);
    glBegin(GL_POLYGON);
    glVertex2f(517, 240);
    glVertex2f(580, 240);
    glVertex2f(577, 260);
    glVertex2f(520, 260);
    glEnd();

     glColor3ub (255, 204, 153);
    glBegin(GL_POLYGON);
    glVertex2f(520, 210);
    glVertex2f(577, 210);
    glVertex2f(577, 240);
    glVertex2f(520, 240);
    glEnd();
    ///////////door
    glColor3ub (102, 51, 0);
    glBegin(GL_POLYGON);
    glVertex2f(560, 210);
    glVertex2f(570, 210);
    glVertex2f(570, 230);
    glVertex2f(560, 230);
    glEnd();
    ////////window
    glColor3ub (153,102,51);
    glBegin(GL_POLYGON);
    glVertex2f(525, 220);
    glVertex2f(534, 220);
    glVertex2f(534, 230);
    glVertex2f(525, 230);
    glEnd();

    glColor3ub (153,102,51);
    glBegin(GL_POLYGON);
    glVertex2f(539, 220);
    glVertex2f(548, 220);
    glVertex2f(548, 230);
    glVertex2f(539, 230);
    glEnd();


}

////////////////////////////////////////////////////move  the  water
void nightwater(){
    glColor3ub (169, 242, 242);
    glBegin(GL_LINES);
    glVertex2f(200, 220);
    glVertex2f(220, 220);

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

    if (shipX>310)
    {
        shipX =+ 310;
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

if(waterboat==1)
    {

        boatx-= .5;

    }
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

            if(meghStatus ==1){
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
	DrawCircle(550, 495, 15, 1000);
	//////////////////ray of sun

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
//////////////////////Light
void Light()
{
    if(lightstatus==0)
    {


        glColor3ub (192, 192, 192);
        glBegin(GL_POLYGON);
        glVertex2f(450, 220);
        glVertex2f(530, 220);
        glVertex2f(530, 225);
        glVertex2f(450, 225);
        glEnd();
        ////white one 1st
        glColor3ub (255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2f(454, 225);
        glVertex2f(526, 225);
        glVertex2f(522, 250);
        glVertex2f(458, 250);
        glEnd();
        //////////red 2nd
        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(458, 250);
        glVertex2f(522, 250);
        glVertex2f(517, 285);
        glVertex2f(463, 285);
        glEnd();
        //////////white 3rd
        glColor3ub (255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2f(463, 285);
        glVertex2f(517, 285);
        glVertex2f(512, 320);
        glVertex2f(468, 320);
        glEnd();

        ///////////red 4th
        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(468, 320);
        glVertex2f(512, 320);
        glVertex2f(509, 340);
        glVertex2f(471, 340);
        glEnd();
        //////////////white relling
        glColor3ub (255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2f(461, 340);
        glVertex2f(519, 340);
        glVertex2f(519, 345);
        glVertex2f(461, 345);
        glEnd();
        ////////red 5th
         glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(471, 345);
        glVertex2f(509, 345);
        glVertex2f(506, 370);
        glVertex2f(474, 370);
        glEnd();
        /////////red
        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(465, 370);
        glVertex2f(515, 370);
        glVertex2f(515, 375);
        glVertex2f(465, 375);
        glEnd();
        /////////chad
    glLineWidth(3.0);

        glBegin(GL_LINES);
        glColor3ub (51, 51, 51);
        glVertex2f(470.0f, 375.0f);
        glVertex2f(470.0f, 395.0f);    // x, y

        glEnd();
        glBegin(GL_LINES);
        glColor3ub (51, 51, 51);
        glVertex2f(480.0f, 375.0f);
        glVertex2f(480.0f, 395.0f);    // x, y

        glEnd();
        glBegin(GL_LINES);
        glColor3ub (51, 51, 51);
        glVertex2f(490.0f, 375.0f);
        glVertex2f(490.0f, 395.0f);    // x, y

        glEnd();
        glBegin(GL_LINES);
        glColor3ub (51, 51, 51);
        glVertex2f(500.0f, 375.0f);
        glVertex2f(500.0f, 395.0f);    // x, y

        glEnd();
        glBegin(GL_LINES);
        glColor3ub (51, 51, 51);
        glVertex2f(510.0f, 375.0f);
        glVertex2f(510.0f, 395.0f);    // x, y
        glEnd();
        /////////chowni
        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(465, 395);
        glVertex2f(515, 395);
        glVertex2f(515, 400);
        glVertex2f(465, 400);
        glEnd();
        glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
        glColor3ub (255, 0, 0); // Red

        glVertex2f(466.0f, 400.0f);    // x, y
        glVertex2f(514.0f, 400.0f);
        glVertex2f(490.0f,  420.0f);

        glEnd();

        /////////////relling
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(462.0f, 345.0f);
        glVertex2f(462.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(466.0f, 345.0f);
        glVertex2f(466.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(470.0f, 345.0f);
        glVertex2f(470.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(474.0f, 345.0f);
        glVertex2f(474.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(478.0f, 345.0f);
        glVertex2f(478.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(482.0f, 345.0f);
        glVertex2f(482.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(486.0f, 345.0f);
        glVertex2f(486.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(490.0f, 345.0f);
        glVertex2f(490.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(494.0f, 345.0f);
        glVertex2f(494.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(498.0f, 345.0f);
        glVertex2f(498.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(502.0f, 345.0f);
        glVertex2f(502.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(506.0f, 345.0f);
        glVertex2f(506.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(510.0f, 345.0f);
        glVertex2f(510.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(514.0f, 345.0f);
        glVertex2f(514.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(518.0f, 345.0f);
        glVertex2f(518.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(461.10f, 353.0f);
        glVertex2f(519.0f, 353.0f);    // x, y
        glEnd();

        ///////door
        glColor3ub (102, 51, 0);
        glBegin(GL_POLYGON);
        glVertex2f(482, 225);
        glVertex2f(498, 225);
        glVertex2f(498, 245);
        glVertex2f(482, 245);
        glEnd();
        ///////////light
         glColor3ub (28, 28, 28);
       glBegin(GL_POLYGON);
        glVertex2f(485, 375);
        glVertex2f(495, 375);
        glVertex2f(495, 380);
        glVertex2f(485, 380);
        glEnd();


        glColor3ub (233, 211, 164);
        DrawCircle(490, 386, 6, 6000);
        glEnd();
    }

    else if(lightstatus==1)
    {
         //light on
         glColor3ub (242, 248, 191);
       glBegin(GL_POLYGON);
        glVertex2f(465, 375);
        glVertex2f(515, 375);
        glVertex2f(515, 395);
        glVertex2f(465, 395);
        glEnd();



        //light spread

          glColor3ub (243, 248, 197);
       glBegin(GL_POLYGON);
        glVertex2f(0, 350);
        glVertex2f(465, 375);
        glVertex2f(465, 395);
        glVertex2f(0, 430);
        glEnd();


          glColor3ub (243, 248, 197);
       glBegin(GL_POLYGON);
        glVertex2f(515, 375);
        glVertex2f(640, 367);
        glVertex2f(640, 410);
        glVertex2f(515, 395);
        glEnd();


        glColor3ub (192, 192, 192);
        glBegin(GL_POLYGON);
        glVertex2f(450, 220);
        glVertex2f(530, 220);
        glVertex2f(530, 225);
        glVertex2f(450, 225);
        glEnd();
        ////white one 1st
        glColor3ub (255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2f(454, 225);
        glVertex2f(526, 225);
        glVertex2f(522, 250);
        glVertex2f(458, 250);
        glEnd();
        //////////red 2nd
        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(458, 250);
        glVertex2f(522, 250);
        glVertex2f(517, 285);
        glVertex2f(463, 285);
        glEnd();
        //////////white 3rd
        glColor3ub (255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2f(463, 285);
        glVertex2f(517, 285);
        glVertex2f(512, 320);
        glVertex2f(468, 320);
        glEnd();

        ///////////red 4th
        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(468, 320);
        glVertex2f(512, 320);
        glVertex2f(509, 340);
        glVertex2f(471, 340);
        glEnd();
        //////////////white relling
        glColor3ub (255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2f(461, 340);
        glVertex2f(519, 340);
        glVertex2f(519, 345);
        glVertex2f(461, 345);
        glEnd();
        ////////red 5th
         glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(471, 345);
        glVertex2f(509, 345);
        glVertex2f(506, 370);
        glVertex2f(474, 370);
        glEnd();
        /////////red
        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(465, 370);
        glVertex2f(515, 370);
        glVertex2f(515, 375);
        glVertex2f(465, 375);
        glEnd();
        /////////chad
    glLineWidth(3.0);

        glBegin(GL_LINES);
        glColor3ub (51, 51, 51);
        glVertex2f(470.0f, 375.0f);
        glVertex2f(470.0f, 395.0f);    // x, y

        glEnd();
        glBegin(GL_LINES);
        glColor3ub (51, 51, 51);
        glVertex2f(480.0f, 375.0f);
        glVertex2f(480.0f, 395.0f);    // x, y

        glEnd();
        glBegin(GL_LINES);
        glColor3ub (51, 51, 51);
        glVertex2f(490.0f, 375.0f);
        glVertex2f(490.0f, 395.0f);    // x, y

        glEnd();
        glBegin(GL_LINES);
        glColor3ub (51, 51, 51);
        glVertex2f(500.0f, 375.0f);
        glVertex2f(500.0f, 395.0f);    // x, y

        glEnd();
        glBegin(GL_LINES);
        glColor3ub (51, 51, 51);
        glVertex2f(510.0f, 375.0f);
        glVertex2f(510.0f, 395.0f);    // x, y
        glEnd();
        /////////chowni
        glColor3ub (255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(465, 395);
        glVertex2f(515, 395);
        glVertex2f(515, 400);
        glVertex2f(465, 400);
        glEnd();
        glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
        glColor3ub (255, 0, 0); // Red

        glVertex2f(466.0f, 400.0f);    // x, y
        glVertex2f(514.0f, 400.0f);
        glVertex2f(490.0f,  420.0f);

        glEnd();

        /////////////relling
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(462.0f, 345.0f);
        glVertex2f(462.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(466.0f, 345.0f);
        glVertex2f(466.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(470.0f, 345.0f);
        glVertex2f(470.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(474.0f, 345.0f);
        glVertex2f(474.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(478.0f, 345.0f);
        glVertex2f(478.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(482.0f, 345.0f);
        glVertex2f(482.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(486.0f, 345.0f);
        glVertex2f(486.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(490.0f, 345.0f);
        glVertex2f(490.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(494.0f, 345.0f);
        glVertex2f(494.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(498.0f, 345.0f);
        glVertex2f(498.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(502.0f, 345.0f);
        glVertex2f(502.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(506.0f, 345.0f);
        glVertex2f(506.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(510.0f, 345.0f);
        glVertex2f(510.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(514.0f, 345.0f);
        glVertex2f(514.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(518.0f, 345.0f);
        glVertex2f(518.0f, 353.0f);    // x, y
        glEnd();
        glBegin(GL_LINES);
        glColor3ub (248, 248, 248);
        glVertex2f(461.10f, 353.0f);
        glVertex2f(519.0f, 353.0f);    // x, y
        glEnd();

        ///////door
        glColor3ub (102, 51, 0);
        glBegin(GL_POLYGON);
        glVertex2f(482, 225);
        glVertex2f(498, 225);
        glVertex2f(498, 245);
        glVertex2f(482, 245);
        glEnd();
        ///////////light
    }

}
void rain()
{

   // glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(0,1,0);
    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {


      x=rand(),y=rand();
    x%=1000; y%=1000;
        //if(x>=120&&x<=280&&y<=280)continue;
        glBegin(GL_LINES);
        glColor3b(1,1,1);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

    for(int i=1;i<=1000;i+=5){
  x=rand(),y=rand();
       x%=1000; y%=1000;
        //if(x>=120&&x<=280&&y<=280)continue;
        glBegin(GL_LINES);
        glColor3b(1,1,1);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();

    }

}
void moverain(int x)
{ if(rainstatus ==1){
        wx -= 0.01;
        wy -= 0.01;
    glPushMatrix();
    glTranslatef(wx, wy, 0);
if (x==1){
    rain();
}
    glPopMatrix();

    //glFlush();
}
}

void myDisplay(void){
if(position2>= -230.0f){
    sky();
    wintersky();
    hills();
    winterscene();
    mountain();
    oposite_village();

    drawSun();



    river();
winterriver();
    moveWater(1);
 land();
    // moveShip(1);
    movebirds();

    moveMegh(1);
      Light();
      lighthouse();
      tree();
      moveWaterboat(1);
snow();
moverain(1);
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

 moveWater(2);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient5[] = {0.0,1.50,1.25, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient5);
    land();

    glDisable(GL_LIGHTING);


    moveMegh(2);
    //dayboat();
    moveShip(1);
    tree();

 Light();
 lighthouse();
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
	 else if (key == 'w' || key == 'W'){		////bird strt
		winter = 1;
		waterboat=0;

	}
	 else if (key == 'z' || key == 'Z'){		////bird strt
		winter = 0;
		waterboat=1;

	}
else if (key == 'l' || key == 'L'){		//bird stop
		lightstatus = 1;
	}
else if (key == 'h' || key == 'H'){		//bird stop
		lightstatus = 0;
	}
	else if (key == '1' ){		//bird stop
		rainstatus = 1;
	}
	else if (key == '2' ){		//bird stop
		rainstatus = 0;
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
