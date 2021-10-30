#include <GL/freeglut.h> //OpenGL
#include <math.h>

GLfloat gerak, water;
int i,radius,jumlah_titik,x_tengah,y_tengah;

// Draw the Ship, Kapal means ship
void kapal(){
	glScaled(20, 20, 0); //Transform
    //lt 2 kapal
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(3.5, 5.5);
	glVertex2f(3.5, 8.5);
	glVertex2f(19.5, 8.5);
	glVertex2f(19.5, 5.5);
	glEnd();
    //Segitiga kiri kanan
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1, 5.5);
	glVertex2f(4, 1);
	glVertex2f(19, 1);
	glVertex2f(21.5, 5.5);
	glEnd();
    //pintu
	glColor3f(0.7, 0.4, 0.2);
	glBegin(GL_POLYGON);
	glVertex2f(4, 5.5);
	glVertex2f(4, 8);
	glVertex2f(5, 8);
	glVertex2f(5, 5.5);
	glEnd();
    //Jendela kiri lt 2
	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex2f(7, 7.5);
	glVertex2f(7, 8);
	glVertex2f(10, 8);
	glVertex2f(10, 7.5);
	glEnd();
    //Jendela tengah lt 2
	glBegin(GL_POLYGON);
	glVertex2f(11.5, 7.5);
	glVertex2f(11.5, 8);
	glVertex2f(15, 8);
	glVertex2f(15, 7.5);
	glEnd();
    //Jendela kanan lt 2
	glBegin(GL_POLYGON);
	glVertex2f(16, 7.5);
	glVertex2f(16, 8);
	glVertex2f(19, 8);
	glVertex2f(19, 7.5);
	glEnd();
    //Atap Kapal
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(4.5, 8.5);
	glVertex2f(4.5, 10);
	glVertex2f(18.5, 10);
	glVertex2f(18.5, 8.5);
	glEnd();
    //cerobong asap kiri
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(5.5, 10);
	glVertex2f(5.5, 12.9);
	glVertex2f(7, 12.9);
	glVertex2f(7, 10);
	glEnd();
    //ujung cerobong asap kiri
	glColor3f(0.9, 0.5, 0.2);
	glBegin(GL_POLYGON);
	glVertex2f(5.5, 12.9);
	glVertex2f(5.5, 13.5);
	glVertex2f(7, 13.5);
	glVertex2f(7, 12.9);
	glEnd();
    //cerobong asap kiri 2
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(8.5, 10);
	glVertex2f(8.5, 12.9);
	glVertex2f(10, 12.9);
	glVertex2f(10, 10);
	glEnd();
    //ujung cerobong asap kiri 2
	glColor3f(0.9, 0.5, 0.2);
	glBegin(GL_POLYGON);
	glVertex2f(8.5, 12.9);
	glVertex2f(8.5, 13.5);
	glVertex2f(10, 13.5);
	glVertex2f(10, 12.9);
	glEnd();
	//pagar kapal
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(1.5, 5.5);
	glVertex2f(1.5, 6.5);
	glVertex2f(2, 6.2);
	glVertex2f(3, 6.2);
	glVertex2f(3.5, 6.5);
	glVertex2f(3.5, 5.5);
	glEnd();
    //masih pager kapal
	glBegin(GL_LINE_LOOP);
	glVertex2f(3.5, 5.5);
	glVertex2f(3.5, 6.5);
	glVertex2f(4, 6.2);
	glVertex2f(5, 6.2);
	glVertex2f(5.5, 6.5);
	glVertex2f(5.5, 5.5);
	glEnd();
    //pager kapal 
	glBegin(GL_LINE_LOOP);
	glVertex2f(5.5, 5.5);
	glVertex2f(5.5, 6.5);
	glVertex2f(6, 6.2);
	glVertex2f(7, 6.2);
	glVertex2f(7.5, 6.5);
	glVertex2f(7.5, 5.5);
	glEnd();
    //pager kapal 
	glBegin(GL_LINE_LOOP);
	glVertex2f(7.5, 5.5);
	glVertex2f(7.5, 6.5);
	glVertex2f(8, 6.2);
	glVertex2f(9, 6.2);
	glVertex2f(9.5, 6.5);
	glVertex2f(9.5, 5.5);
	glEnd();
    //pager kapal juga
	glBegin(GL_LINE_LOOP);
	glVertex2f(9.5, 5.5);
	glVertex2f(9.5, 6.5);
	glVertex2f(10, 6.2);
	glVertex2f(11, 6.2);
	glVertex2f(11.5, 6.5);
	glVertex2f(11.5, 5.5);
	glEnd();
    //pager kapal juga
	glBegin(GL_LINE_LOOP);
	glVertex2f(11.5, 5.5);
	glVertex2f(11.5, 6.5);
	glVertex2f(12, 6.2);
	glVertex2f(13, 6.2);
	glVertex2f(13.5, 6.5);
	glVertex2f(13.5, 5.5);
	glEnd();
    //pager kapal juga
	glBegin(GL_LINE_LOOP);
	glVertex2f(13.5, 5.5);
	glVertex2f(13.5, 6.5);
	glVertex2f(14, 6.2);
	glVertex2f(15, 6.2);
	glVertex2f(15.5, 6.5);
	glVertex2f(15.5, 5.5);
	glEnd();
    //pager kapal juga
	glBegin(GL_LINE_LOOP);
	glVertex2f(15.5, 5.5);
	glVertex2f(15.5, 6.5);
	glVertex2f(16, 6.2);
	glVertex2f(17, 6.2);
	glVertex2f(17.5, 6.5);
	glVertex2f(17.5, 5.5);
	glEnd();
    //pager kapal juga
	glBegin(GL_LINE_LOOP);
	glVertex2f(17.5, 5.5);
	glVertex2f(17.5, 6.5);
	glVertex2f(18, 6.2);
	glVertex2f(19, 6.2);
	glVertex2f(19.5, 6.5);
	glVertex2f(19.5, 5.5);
	glEnd();
    //pager kapal juga
	glBegin(GL_LINE_LOOP);
	glVertex2f(19.5, 5.5);
	glVertex2f(19.5, 6.5);
	glVertex2f(20, 6.2);
	glVertex2f(20.5, 6.2);
	glVertex2f(21, 6.5);
	glVertex2f(21, 5.5);
	glEnd();
    //jendela di lt 1
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(4.5, 3.5);
	glVertex2f(4.5, 4.5);
	glVertex2f(5.5, 4.5);
	glVertex2f(5.5, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(7, 3.5);
	glVertex2f(7, 4.5);
	glVertex2f(8, 4.5);
	glVertex2f(8, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(9.5, 3.5);
	glVertex2f(9.5, 4.5);
	glVertex2f(10.5, 4.5);
	glVertex2f(10.5, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(12, 3.5);
	glVertex2f(12, 4.5);
	glVertex2f(13, 4.5);
	glVertex2f(13, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(14.5, 3.5);
	glVertex2f(14.5, 4.5);
	glVertex2f(15.5, 4.5);
	glVertex2f(15.5, 3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(17, 3.5);
	glVertex2f(17, 4.5);
	glVertex2f(18, 4.5);
	glVertex2f(18, 3.5);
	glEnd();
	
}

//Draw Sea water and waves
void air(){
	glPushMatrix(); 
		glTranslated(water, 0, 0.0); 
		glColor3f(0.1, 0.5, 1.0);
		glBegin(GL_POLYGON);
        glVertex2f(0, 0);
		glVertex2f(0, 105);     glVertex2f(16, 92);
		glVertex2f(23, 99);     glVertex2f(39, 93);
        glVertex2f(51, 94);     glVertex2f(73, 102);
		glVertex2f(83, 94);     glVertex2f(95, 97);
		glVertex2f(112, 100);   glVertex2f(129, 99);
		glVertex2f(141, 97);    glVertex2f(147, 97);
		glVertex2f(157, 101);   glVertex2f(172, 103);
		glVertex2f(192, 101);   glVertex2f(214, 95);
		glVertex2f(254, 92);    glVertex2f(284, 96);
		glVertex2f(344, 98);    glVertex2f(360, 93);
		glVertex2f(392, 94);    glVertex2f(410, 99);
		glVertex2f(451, 94);    glVertex2f(485, 100);
		glVertex2f(504, 92);    glVertex2f(552, 92);
		glVertex2f(593, 96);    glVertex2f(630, 105);
		glVertex2f(684, 95);    glVertex2f(720, 97);
		glVertex2f(753, 96);    glVertex2f(800, 95);
		glVertex2f(852, 95);    glVertex2f(880, 108);
		glVertex2f(901, 97);    glVertex2f(920, 93);
		glVertex2f(954, 99);    glVertex2f(980, 92);
		glVertex2f(1004, 98);   glVertex2f(1000, 0);
		glVertex2f(1602, 14);   glVertex2f(3000, 280);
		glEnd();
	glPopMatrix();
}

//Draw a Sun
void sun(){
	glBegin(GL_POLYGON);
		glColor3f(1.0, 1.0, 0.0);
		radius=13500;
		jumlah_titik = 100;
		x_tengah = 50;
		y_tengah = 50;

	for (i=0;i<=360;i++){
		float sudut=i*(2*M_PI/jumlah_titik);
		float x= x_tengah+radius*cos(sudut);
		float y= y_tengah+radius*sin(sudut);
		glVertex2f(x/100, y/100);
	}
	glEnd();

}

//This Function is to make the ship and water moves
void idle(){
	water -= 12.5; //gerak air | water movement
	if (water <= -20)
		water = 0.75;

	if (gerak>1000){ //relokasi kapal | ship relocate
		gerak=-480;
	}
	else{
		gerak+=0.096; //kecepatan gerak kapal | ship movement speed
	}
	glutPostRedisplay();

}

//Fuction to show every object to the screen or window
void layar(){
	glPushMatrix();
		glTranslatef(gerak, 70, 0.0);
		kapal();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(150.0, 750.0, 0.0);
		sun();
	glPopMatrix();

		air();
}

//make the ship and window ready to use
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	layar();
	glFlush();
    glutSwapBuffers();
}

void inisialisasi(){
	glClearColor(0.0f, 0.9f, 0.9f, 0.1f); 
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 999.0, 0.0, 799.0);
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Kapal Laut");
	glutDisplayFunc(display); //callback
	inisialisasi();
	glutIdleFunc(idle); //callback
	glutMainLoop();
}
