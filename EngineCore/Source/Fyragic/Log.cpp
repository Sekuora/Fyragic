#include "Log.h"

namespace Fengine 
{
	std::shared_ptr<spdlog::logger> Log::CoreLogger;
	std::shared_ptr<spdlog::logger> Log::ClientLogger;


	void Log::Init()
	{
		// Format Logger
		spdlog::set_pattern("%^[%H:%M:%S] %n: %v%$");

		// Core Logger Data
		CoreLogger = spdlog::stdout_color_mt("Log");
		CoreLogger->set_level(spdlog::level::trace);

		// Client Logger Data
		ClientLogger = spdlog::stdout_color_mt("AppLog");
		CoreLogger->set_level(spdlog::level::trace);
	}

}
