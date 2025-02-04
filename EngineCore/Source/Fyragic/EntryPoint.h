#pragma once

#ifdef F_PlatformWindows

extern Fengine::Application* Fengine::StartApplication();

int main(int argc, char** argv)
{
	Fengine::Log::Init();
	F_CoreLog_Error("Initialized Core Log!");
	F_Log_Info("Initialized Client Log!");

	auto app = Fengine::StartApplication();
	app->Run();
	delete app;
}

#endif