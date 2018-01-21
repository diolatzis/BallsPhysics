#ifndef RENDERABLE_OBJECT
#define RENDERABLE_OBJECT

class RenderableObject		//Abstract class of renderable object
{
public:

	RenderableObject();

	~RenderableObject();

	//Render the object
	virtual void render() = 0;
};

#endif

