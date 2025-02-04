#include <Fyragic.h>


/*
* @brief Sandbox class created to test Fengine
* @author Sekuora
*/
class Sandbox : public Fengine::Application
{

public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};


Fengine::Application* Fengine::StartApplication()
{
	return new Sandbox();
}