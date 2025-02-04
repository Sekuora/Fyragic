#pragma once

#include "EtherCore.h"

namespace Fengine 
{
	class Fyragic_API Application
	{
	public:
		// Construction
		Application();

		virtual ~Application();

		// Functions

		/*
		* @brief Application Entry Point
		*/
		void Run();
	};

	/*
	* @brief Aplication entry point: Initialized by client
	*/
	Application* StartApplication();
}



