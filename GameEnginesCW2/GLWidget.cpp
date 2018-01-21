#include "GLWidget.h"
#include <GL/glut.h>

const int FRAMES_PER_SECOND = 60;						//Constant used to choose FPS
const double SKIP_TICKS = 1000.0 / FRAMES_PER_SECOND;	//Number of ticks per second

GLWidget::GLWidget(QWidget * parent) : QGLWidget(parent)
{
	PhysicsManager::get().startUp();	
	RenderManager::get().startUp();		

	bindWidgets(parent);	
	connectListeners();

	addBox();
}

GLWidget::~GLWidget()
{

}

//Render function
void GLWidget::initializeGL()
{
	//Call the mainLoop function as fast as possible
	connect(&timer, SIGNAL(timeout()), this, SLOT(mainLoop()));
	timer.start(0);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);

	//Initialize camera
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(fov, 1.0, nearZ, farZ);
	gluLookAt(eyePos[0], eyePos[1], eyePos[2], targetPos[0], targetPos[1], targetPos[2], up[0], up[1], up[2]);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//Initialize lighting
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
}

void GLWidget::paintGL()
{
	++frames;	//Count a frame

	//Update camera
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(fov, 1.0, nearZ, farZ);
	gluLookAt(eyePos[0], eyePos[1], eyePos[2], targetPos[0], targetPos[1], targetPos[2], up[0], up[1], up[2]);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//Clear color and depth buffer
	glClearColor(0, 0, 0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Render the scene
	RenderManager::get().render();
}

void GLWidget::resizeGL(int w, int h)
{
	//Update camera and viewport depending on resize
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(fov, (GLfloat)w / (GLfloat)h, nearZ, farZ);
	gluLookAt(eyePos[0], eyePos[1], eyePos[2], targetPos[0], targetPos[1], targetPos[2], up[0], up[1], up[2]);
	glViewport(0, 0, w, h);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

//Bind widgets to local variables
void GLWidget::bindWidgets(QWidget * parent)
{
	lcdFPS = parent->findChild<QLCDNumber *>("lcdFPS");
	buStop = parent->findChild<QPushButton *>("buStop");
	buSwitchState = parent->findChild<QPushButton *>("buSwitchState");
	buRestart = parent->findChild<QPushButton *>("buRestart");
	buCreateSphere = parent->findChild<QPushButton *>("buCreateSphere");
	buCreateRandomSphere = parent->findChild<QPushButton *>("buCreateRandomSphere");
	buAddGlobalForce = parent->findChild<QPushButton *>("buAddGlobalForce");

	leditForceX = parent->findChild<QLineEdit *>("leditForceX");
	leditForceY = parent->findChild<QLineEdit *>("leditForceY");
	leditForceZ = parent->findChild<QLineEdit *>("leditForceZ");

	leditRed = parent->findChild<QLineEdit *>("leditRed");
	leditGreen = parent->findChild<QLineEdit *>("leditGreen");
	leditBlue = parent->findChild<QLineEdit *>("leditBlue");

	leditX = parent->findChild<QLineEdit *>("leditX");
	leditY = parent->findChild<QLineEdit *>("leditY");
	leditZ = parent->findChild<QLineEdit *>("leditZ");

	leditVelX = parent->findChild<QLineEdit *>("leditVelX");
	leditVelY = parent->findChild<QLineEdit *>("leditVelY");
	leditVelZ = parent->findChild<QLineEdit *>("leditVelZ");

	leditMass = parent->findChild<QLineEdit *>("leditMass");
	leditRestitution = parent->findChild<QLineEdit *>("leditRestitution");
	leditRadius = parent->findChild<QLineEdit *>("leditRadius");

	leditTimestep = parent->findChild<QLineEdit *>("leditTimestep");
}

//Connect buttons to listeners
void GLWidget::connectListeners()
{
	connect(buCreateRandomSphere, SIGNAL(released()), this, SLOT(handleBuCreateRandomSphere()));
	connect(buStop, SIGNAL(released()), this, SLOT(handleBuStop()));
	connect(buRestart, SIGNAL(released()), this, SLOT(handleBuRestart()));
	connect(buCreateSphere, SIGNAL(released()), this, SLOT(handleBuCreateSphere()));
	connect(buSwitchState, SIGNAL(released()), this, SLOT(handleBuSwitchState()));
	connect(buAddGlobalForce, SIGNAL(released()), this, SLOT(handleBuAddGlobalForce()));
}

//Create box for the spheres
void GLWidget::addBox()
{
	//Plane 0 
	Vec3<float> planeVer0[4] = { Vec3<float>(2,-2,0),Vec3<float>(-2,-2,0),Vec3<float>(-2,-2,4),Vec3<float>(2,-2,4) };

	Plane * plane0 = new Plane(PhysicsObject::SHAPE_FLOOR, planeVer0, Colour(0.8, 0.8, 0.8));

	RenderManager::get().addRenderableObj(plane0);

	PhysicsManager::get().addPhysicsObj(plane0);

	//Plane 1
	Vec3<float> planeVer1[4] = { Vec3<float>(2,-2,0),Vec3<float>(2,-2,4),Vec3<float>(2,2,4),Vec3<float>(2,2,0) };

	Plane * plane1 = new Plane(PhysicsObject::SHAPE_FLOOR, planeVer1, Colour(0.8, 0.8, 0.8));

	RenderManager::get().addRenderableObj(plane1);

	PhysicsManager::get().addPhysicsObj(plane1);

	//Plane 2
	Vec3<float> planeVer2[4] = { Vec3<float>(-2,-2,0),Vec3<float>(-2,2,0),Vec3<float>(-2,2,4),Vec3<float>(-2,-2,4) };

	Plane * plane2 = new Plane(PhysicsObject::SHAPE_FLOOR, planeVer2, Colour(0.8, 0.8, 0.8));

	RenderManager::get().addRenderableObj(plane2);

	PhysicsManager::get().addPhysicsObj(plane2);

	//Plane 3
	Vec3<float> planeVer3[4] = { Vec3<float>(2,2,0),Vec3<float>(2,2,4),Vec3<float>(-2,2,4),Vec3<float>(-2,2,0) };

	Plane * plane3 = new Plane(PhysicsObject::SHAPE_FLOOR, planeVer3, Colour(0.8, 0.8, 0.8));

	RenderManager::get().addRenderableObj(plane3);

	PhysicsManager::get().addPhysicsObj(plane3);

	//Plane 4
	Vec3<float> planeVer4[4] = { Vec3<float>(2,-2,4),Vec3<float>(-2,-2,4),Vec3<float>(-2,2,4),Vec3<float>(2,2,4) };

	Plane * plane4 = new Plane(PhysicsObject::SHAPE_FLOOR, planeVer4, Colour(0.8, 0.8, 0.8));

	RenderManager::get().addRenderableObj(plane4);

	PhysicsManager::get().addPhysicsObj(plane4);

	//Plane 5
	Vec3<float> planeVer5[4] = { Vec3<float>(2,-2,0),Vec3<float>(2,2,0),Vec3<float>(-2,2,0),Vec3<float>(-2,-2,0) };

	Plane * plane5 = new Plane(PhysicsObject::SHAPE_FLOOR, planeVer5, Colour(0.8, 0.8, 0.8));

	RenderManager::get().addRenderableObj(plane5);

	PhysicsManager::get().addPhysicsObj(plane5);

}

//Recalculate position using spherical coords
void GLWidget::recalculateEyePos()
{
	eyePos[0] = radius*cosf(phi*PI / 180.0f)*sinf(theta*PI / 180.0f);
	eyePos[1] = radius*sinf(phi*PI / 180.0f);
	eyePos[2] = radius*cosf(phi*PI / 180.0f)*cosf(theta*PI / 180.0f);
}

//Use mouse movement to rotate camera
void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
	float dx = event->x() - lastPos.x();
	float dy = event->y() - lastPos.y();

	if (event->buttons() & Qt::LeftButton) {
		phi -= dy / 50.0f;
		theta -= dx / 30.0f;

		if (phi > 275) phi = 275;
		if (phi < 80) phi = 80;


		recalculateEyePos();
	}

}

//Store the starting mouse position
void GLWidget::mousePressEvent(QMouseEvent *event)
{
	lastPos = event->pos();
}

//Use wheel to zoom in and out
void GLWidget::wheelEvent(QWheelEvent * event)
{
	float zoom = event->delta();

	if (event->modifiers().testFlag(Qt::ControlModifier))
	{
		radius -= event->delta() / 100;
		recalculateEyePos();
	}
}

//Function that gives random float in range
double GLWidget::fRand(double fMin, double fMax)
{
	double f = (double)rand() / RAND_MAX;
	return fMin + f * (fMax - fMin);
}

//Main loop function
void GLWidget::mainLoop()
{

	PhysicsManager::get().handleCollisions();	//Check for collisions and resolve them
	PhysicsManager::get().simulate(timestep);	//Timestep the physics objects

	updateGL();									//Call the render function (calls paintGL)

	nextGameTick += SKIP_TICKS;

	int sleepTime = nextGameTick - GetTickCount();	//Time remaining until next frame

	if (GetTickCount() - startTime >= 1000)				//If one second has passed update FPS
	{
		fps = frames;
		frames = 0;
		lcdFPS->display(fps);
		startTime = GetTickCount();
	}

	if (sleepTime > 0)	//Sleep for the remainng available time
	{
		QThread::msleep(sleepTime);
	}
}


void GLWidget::handleBuStop()
{
	//Reset the managers
	RenderManager::get().clear();
	PhysicsManager::get().clear();

	//Stop the simulation
	timer.stop();
	timestep = 0;
	fps = 0;
	frames = 0;
	lcdFPS->display(fps);

	//Reset the play button
	buSwitchState->setText("Play");
	buSwitchState->setEnabled(false);
}

void GLWidget::handleBuRestart()
{
	//Reset the physics manager and recreate the scene
	PhysicsManager::get().reset();
	buSwitchState->setEnabled(true);
	timer.start(0);
	addBox();
}

//Create a sphere defined by the UI
void GLWidget::handleBuCreateSphere()
{ 
	Sphere * sphere = new Sphere(PhysicsObject::SHAPE_SPHERE, Vec3<float>(leditX->text().toDouble(), leditY->text().toDouble(), leditZ->text().toDouble()), Vec3<float>(leditVelX->text().toDouble(), leditVelY->text().toDouble(), leditVelZ->text().toDouble()), leditRadius->text().toDouble(), Vec3<float>(leditRed->text().toDouble(), leditGreen->text().toDouble(), leditBlue->text().toDouble()), leditMass->text().toDouble(), leditRestitution->text().toDouble());
	PhysicsManager::get().addPhysicsObj(sphere);
	RenderManager::get().addRenderableObj(sphere);

}

void GLWidget::handleBuSwitchState()
{
	if (buSwitchState->text().toLower() == "play")	//If simulation is paused play it
	{
		timestep = leditTimestep->text().toDouble();
		buSwitchState->setText("Pause");
		timer.start(0);
	}
	else    //If simulation is playing pause it
	{
		timestep = 0;
		buSwitchState->setText("Play");

	}

}

//Create a random sphere
void GLWidget::handleBuCreateRandomSphere()
{
	float radius = fRand(0.1, 0.3);
	float mass = 2*radius;	//Mass proportional to it's radius
	Sphere * sphere = new Sphere(PhysicsObject::SHAPE_SPHERE, Vec3<float>(fRand(-1.4, 1.4), fRand(-1, 1), fRand(1, 3)), Vec3<float>(fRand(-1, 1), fRand(-1, 1), fRand(-1, 1)), radius, Vec3<float>(fRand(0, 1), fRand(0, 1), fRand(0, 1)), mass, leditRestitution->text().toDouble());
	PhysicsManager::get().addPhysicsObj(sphere);
	RenderManager::get().addRenderableObj(sphere);
}

//Add a global force defined by the UI
void GLWidget::handleBuAddGlobalForce()
{
	PhysicsManager::get().addGlobalForce(Force(leditForceX->text().toDouble(), leditForceY->text().toDouble(), leditForceZ->text().toDouble()));
}



