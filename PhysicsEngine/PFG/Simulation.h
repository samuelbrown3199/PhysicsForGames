#pragma once
#include "phy.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>

#include "Geometry.h"
#include "KinematicEquations.h"
#include "BasicNewtonianPhysics.h"

class Simulation
{
private:
	Object redBall;/*, greenBall, blueBall;*/
	Object yellowCube, redBrick;

	float deltaT;
	float yRot = 0;
	float x, y, z;
	bool hit, runSimulation;

	double brickVel;
public:

	Simulation(const float& i_DeltaT);
	~Simulation();
	bool Initialisation();
	void ProcessInput();
	void Update();
	void Render();
	void GetDeltaT(float& o_DeltaT);
	void GetHit(bool& o_Hit);
	void GetRunSimulation(bool& o_RunSimulation);
	void SetDeltaT(const float& i_DeltaT);
	void SetHit(const bool& i_Hit);
	void SetRunSimulation(const bool& i_RunSimulation);
};
