cmake_minimum_required(VERSION 3.20)
project(EngineCore VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(EngineCore SHARED
    Source/Fyragic/Application.cpp
    Source/Fyragic/Log.cpp
    Source/Test.cpp
)

target_include_directories(EngineCore
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Source>
        $<INSTALL_INTERFACE:include>
        ${CMAKE_SOURCE_DIR}/.vessel/ExternalLibraries/spdlog/include
)

target_compile_definitions(EngineCore
    PRIVATE
        F_PlatformWindows
        F_BuildDll
        $<$<CONFIG:Debug>:_DEBUG;_CONSOLE>
        $<$<CONFIG:Release>:NDEBUG;_CONSOLE>
)

target_compile_options(EngineCore
    PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/utf-8 /W3>
)



install(TARGETS EngineCore
    EXPORT EngineCoreTargets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)
