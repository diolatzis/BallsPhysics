#ifndef GL_WIDGET_H
#define GL_WIDGET_H

#include <ctime>
#include <qopenglwidget.h>
#include <qgl>
#include <vector>
#include <qtimer.h>
#include <QMouseEvent>
#include <qthread.h>
#include <qlcdnumber.h>
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qvalidator.h>
#include <string>
#include "Types.h"
#include "PhysicsManager.h"
#include "RenderManager.h"
#include "Sphere.h"
#include "Plane.h"

class GLWidget : public QGLWidget

{
	//Meta declaration because of creation of Qt signal
	Q_OBJECT

	//PI used in spherical coords
	#define PI 3.14159265

	QTimer timer;			//Timer used for the main loop
	
	//UI elements
	QLCDNumber *lcdFPS;		
	QPushButton *buSwitchState, *buStop, *buRestart, *buCreateSphere, *buCreateRandomSphere, *buAddGlobalForce;
	QLineEdit *leditRed, *leditGreen, *leditBlue, *leditX, *leditY, *leditZ, *leditVelX,
		*leditVelY, *leditVelZ, *leditMass, *leditRestitution, *leditRadius, *leditTimestep,
		*leditForceX, *leditForceY, *leditForceZ;

	
	float timestep = 0.0;	//Timestep of simulation

	float fps = 0;		//Frames per second
	float frames = 0;	//Frames counter

	//Variables to compute time of next frame
	double nextGameTick = GetTickCount();
	int startTime = GetTickCount();

	// Lighting information
	GLfloat ambient[4] = { 0.2f, 0.2f, 0.2f, 1.0f };
	GLfloat lightPos[4] = { 0.0f, 10.0f, 5.0f, 0.0f };

	//Camera variables
	GLdouble fov = 40.0, nearZ = 1, farZ = 20, theta = 0, phi = 135, radius = 8;
	GLdouble eyePos[3] = { radius*cosf(phi*PI / 180.0f)*sinf(theta*PI / 180.0f) ,radius*sinf(phi*PI / 180.0f) ,radius*cosf(phi*PI / 180.0f)*cosf(theta*PI / 180.0f) };	//Using spherical coords
	GLdouble targetPos[3] = { 0, 0, 2 };
	GLdouble up[3] = { 0,1,0 };

	//Last point of mouse click used in camera
	QPoint lastPos;

public:

	GLWidget(QWidget *parent);
	~GLWidget();

	//OpenGL functions
	void initializeGL(); 
	void paintGL();
	void resizeGL(int w, int h);

	//Functions that set the UI
	void bindWidgets(QWidget * parent);
	void connectListeners();

	void addBox();	//Adds a box for the spheres


	void recalculateEyePos();	//Recalculate the eye position after changes to spherical coords

	//Functions that handle input
	void mouseMoveEvent(QMouseEvent *event);	
	void mousePressEvent(QMouseEvent *event);
	void wheelEvent(QWheelEvent *event);

	double fRand(double fMin, double fMax);

private	slots:	
	
	void mainLoop();	//Function that handles the game loop

	//Functions that handle button presses
	void handleBuStop();
	void handleBuRestart();
	void handleBuCreateSphere();
	void handleBuSwitchState();
	void handleBuCreateRandomSphere();
	void handleBuAddGlobalForce();

};

#endif