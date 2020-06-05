#include<gl/glut.h>
int n = 0, count=0;
float xm, ym, x, y;
int ctr;

struct coord
{
	float xc;
	float yc;
}arr[2];

void init(void)
{
	glClearColor(0.5, 0.9, 0.4,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 640, 0.0, 480);
	glPointSize(2.0);
}

void display(void)
{
	if (ctr)
	{
		x = xm;
		y = ym;
		glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_POINTS);
		glColor3f(1.0, 0.0, 0.0);
		glVertex2f(x, y);
		glEnd();
		glFlush();
		arr[n].xc = x;
		arr[n].yc = y;
		++n;
		++count;
		if (count == 2)
		{
			glBegin(GL_LINES);
			glVertex2f(arr[0].xc, arr[0].yc);
			glVertex2f(arr[1].xc, arr[1].yc);
			glEnd();
			glFlush();
			n = 0;
			count = 0;
		}
		ctr = 0;
	}
}

void mouse(int button, int state, int xmouse, int ymouse)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
	{
		ctr = 1;
		xm = xmouse;
		ym = 480 - ymouse;
		glutPostRedisplay();
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Line");
	init();
	glutMouseFunc(mouse);
	glutDisplayFunc(display);
	glutMainLoop();
}
