#pragma once

#include "EtherCore.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace Fengine
{
	class Fyragic_API Log
	{
	public:
		// Log Initializer
		static void Init();

		// Get Loggers
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return ClientLogger; }

	private:
		// Define Loggers
		static std::shared_ptr<spdlog::logger> CoreLogger;
		static std::shared_ptr<spdlog::logger> ClientLogger;

	};

}

// Define CoreLog Macros
#define F_CoreLog_Trace(...) ::Fengine::Log::GetCoreLogger()->trace (__VA_ARGS__)
#define F_CoreLog_Info(...) ::Fengine::Log::GetCoreLogger()->info   (__VA_ARGS__)
#define F_CoreLog_Warning(...) ::Fengine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define F_CoreLog_Error(...) ::Fengine::Log::GetCoreLogger()->error (__VA_ARGS__)
#define F_CoreLog_Fatal(...) ::Fengine::Log::GetCoreLogger()->fatal (__VA_ARGS__)

// Define CoreLog Macros
#define F_Log_Trace(...) ::Fengine::Log::GetCoreLogger()->trace (__VA_ARGS__)
#define F_Log_Info(...) ::Fengine::Log::GetCoreLogger()->info   (__VA_ARGS__)
#define F_Log_Warning(...) ::Fengine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define F_Log_Error(...) ::Fengine::Log::GetCoreLogger()->error (__VA_ARGS__)
#define F_Log_Fatal(...) ::Fengine::Log::GetCoreLogger()->fatal (__VA_ARGS__)
