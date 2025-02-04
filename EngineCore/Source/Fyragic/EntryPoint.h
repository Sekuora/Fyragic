#pragma once

#ifdef F_PlatformWindows

extern Fengine::Application* Fengine::StartApplication();

int main(int argc, char** argv)
{
	printf("Fyragic App Initialized");
	auto app = Fengine::StartApplication();
	app->Run();
	delete app;
}

#endif