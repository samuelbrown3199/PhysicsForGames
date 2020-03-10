#include "Simulation.h"
Simulation::Simulation(const float& i_DeltaT)
{
	deltaT = i_DeltaT;

	x = 0;
	y = 20.0f;
	z = 0;

	hit = false;
	runSimulation = false;
}
Simulation::~Simulation()
{
	// No resources allocated by constructor.
}
bool Simulation::Initialisation()
{
	redBall.setPosition(-22, 5, -22);
	redBall.setScale(5, 5, 5);
	redBall.setType(PHY_SPHERE);
	redBall.setColor(1, 0, 0);
	/*greenBall.setPosition(1, 1, 0);
	greenBall.setScale(5, 5, 5);
	greenBall.setType(PHY_SPHERE);
	greenBall.setColor(0, 1, 0);
	blueBall.setPosition(1, 2, 0);
	blueBall.setScale(5, 5, 5);
	blueBall.setType(PHY_SPHERE);
	blueBall.setColor(0, 0, 1);*/

	redBrick.setPosition(0, 20, 0);
	redBrick.setScale(1, 0.5, 1);
	redBrick.setType(PHY_CUBE);
	redBrick.setColor(1, 0, 0);

	yellowCube.setPosition(0, 2, 0);
	yellowCube.setScale(1, 1, 1);
	yellowCube.setType(PHY_CUBE);
	yellowCube.setColor(1, 1, 0.25);

	return true;
}
void Simulation::Update()
{
	float redBrickY = 20;

	if (runSimulation)
	{
		if (y >= 2.5f && !hit)
		{
			y -= 0.1f;
		}
		else
		{
			hit = true;
		}
		if (y <= 20.0 && hit)
		{
			y += 0.1f;
		}
		if (y >= 20.0 && hit)
		{
			hit = false;
		}

		if (yRot <= 360)
		{
			yRot++;
		}
		else
		{
			yRot = 0;
		}

		x += 0.1f;
		PE::BasicNewtonianPhysics::FreeFallVelocityDueToGravity(deltaT, brickVel);
		redBrickY -= brickVel;
		redBrick.setPosition(0, redBrickY, 0);

		deltaT += 1.0f;
	}
}
void Simulation::Render()
{
	if (runSimulation)
	{
		glm::vec3 initialSpherePos(-22, 5, -22);
		glm::vec3 spherePos(-22, 5, -22);
		glm::vec3 targetSpherePos(22, 5, 22);

		PE::Geometry::Lerp(initialSpherePos, targetSpherePos, deltaT, spherePos);

		redBall.setPosition(spherePos.x, spherePos.y, spherePos.z);
		/*greenBall.setPosition(0, y, 0);
		blueBall.setPosition(15, y, -15);*/
		yellowCube.setPosition(x, y, z);
		yellowCube.setRotation(0, yRot, 0);

		wait(30);
	}
}
void Simulation::ProcessInput()
{
	// Game specific events processed here.
	if (runSimulation)
	{
	}
}
void Simulation::GetDeltaT(float& o_DeltaT)
{
	o_DeltaT = deltaT;
}
void Simulation::GetHit(bool& o_Hit)
{
	o_Hit = hit;
}
void Simulation::GetRunSimulation(bool& o_RunSimulation)
{
	o_RunSimulation = runSimulation;
}
void Simulation::SetDeltaT(const float& i_DeltaT)
{
	deltaT = i_DeltaT;
}
void Simulation::SetHit(const bool& i_Hit)
{
	hit = i_Hit;
}
void Simulation::SetRunSimulation(const bool& i_RunSimulation)
{
	runSimulation = i_RunSimulation;
}
int main()
{
	Simulation* mySimulation;
	float deltaT = 1.0;
	bool run = true;
	mySimulation = new Simulation(deltaT);
	mySimulation->Initialisation();
	mySimulation->SetRunSimulation(run);
	system("CLS");
	std::cout << "================= Running Simulation. ===============" << std::endl;
	while (run)
	{
		mySimulation->ProcessInput();
		mySimulation->Update();
		mySimulation->Render();
		mySimulation->GetDeltaT(deltaT);
		std::cout << "deltaT = " << deltaT << std::endl;
		deltaT += 1.0f;
	}
	delete mySimulation;
	return 0;
}
