#include<GL\glut.h>
void init()
{
	glClearColor(0.5, 0.9, 0.4, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 800, 0.0, 600);
}

void house()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.3, 0.5, 0.8);
	glBegin(GL_POLYGON);
	glVertex2i(100, 400);
	glVertex2i(200, 500);
	glVertex2i(500, 500);
	glVertex2i(400, 400);
	glEnd();

	glColor3f(0.1, 0.5, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2i(400, 400);
	glVertex2i(500, 500);
	glVertex2i(600, 400);
	glEnd();

	glColor3f(0.7, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(100, 100);
	glVertex2i(400, 100);
	glVertex2i(400, 400);
	glVertex2i(100, 400);
	glEnd();

	glColor3f(0.7, 0.2, 0.9);
	glBegin(GL_POLYGON);
	glVertex2i(400, 400);
	glVertex2i(600, 400);
	glVertex2i(600, 100);
	glVertex2i(400, 100);
	glEnd();

	glColor3f(0.1, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(450, 100);
	glVertex2i(550, 100);
	glVertex2i(550, 250);
	glVertex2i(450, 250);
	glEnd();
	
	glColor3f(0.3, 0.5, 0.7);
	glBegin(GL_POLYGON);
	glVertex2i(200, 200);
	glVertex2i(200, 300);
	glVertex2i(300, 300);
	glVertex2i(300, 200);
	glEnd();

	glColor3f(0.3, 0.1, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(300, 450);
	glVertex2i(300, 550);
	glVertex2i(350, 550);
	glVertex2i(350, 450);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowPosition(0, 0);
	glutInitWindowSize(800, 600);
	glutCreateWindow("House");

	init();
	glutDisplayFunc(house);
	glutMainLoop();
	return 0;
}
