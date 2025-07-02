#pragma once

#include "Core.h"

namespace FURY
{
	class FURY_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}

