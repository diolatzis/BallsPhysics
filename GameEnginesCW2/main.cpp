#include "GameEnginesCW2.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <GL\glut.h>
#include <qtimer.h>
#include <vector>

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	QApplication a(argc, argv);
	GameEnginesCW2 w;
	w.show();

	return a.exec();
}

