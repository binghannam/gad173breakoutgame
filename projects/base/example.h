#pragma once

#define LINE_THICKNESS 1

#define GRID_OFFSET_X 200
#define GRID_OFFSET_Y 200

#define CELL_SIZE_X 196
#define CELL_SIZE_Y 32

#define CELL_WIDTH 32
#define CELL_HEIGHT 32

#define TOTAL_CELLS_X 5		+ 1
#define TOTAL_CELLS_Y 5	+ 1

#include "app.h"
#include "kage2dutil/physics.h"
#include "SceneManager.h"

class Example : public App
{
public:
	Example();
	virtual ~Example();
	virtual bool start();
	virtual void update(float deltaT);
	virtual void render();
	virtual void cleanup();

	SceneManager sceneManager;
};
