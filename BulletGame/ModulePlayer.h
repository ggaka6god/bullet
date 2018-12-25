#pragma once
#include "Module.h"
#include "Globals.h"
#include "p2Point.h"

struct PhysVehicle3D;

#define MAX_ACCELERATION 1000.0f
#define TURN_DEGREES 15.0f * DEGTORAD
#define BRAKE_POWER 1000.0f

class ModulePlayer : public Module
{
public:
	ModulePlayer(Application* app, bool start_enabled = true);
	virtual ~ModulePlayer();

	bool Start();
	update_status Update(float dt);
	int CheckWinner();
	bool CleanUp();

public:

	PhysVehicle3D* vehicle;
	PhysVehicle3D* vehicle2;
	float turn1;
	float acceleration1;
	float brake1;
	float turn2;
	float acceleration2;
	float brake2;
};