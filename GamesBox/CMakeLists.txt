cmake_minimum_required(VERSION 3.20)
project(Gamesbox VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Gamesbox
    Source/Sandbox.cpp  # Replace with your main executable source files
)

target_link_libraries(Gamesbox
    PRIVATE
        EngineCore
)

target_include_directories(Gamesbox
    PRIVATE
        ${CMAKE_SOURCE_DIR}/EngineCore/Source
        ${CMAKE_SOURCE_DIR}/.vessel/ExternalLibraries/spdlog/include
)

target_compile_definitions(Gamesbox
    PRIVATE
        F_PlatformWindows
        $<$<CONFIG:Debug>:_DEBUG;_CONSOLE>
        $<$<CONFIG:Release>:NDEBUG;_CONSOLE>
)

target_compile_options(Gamesbox
    PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/utf-8 /W3>
)

# Add a custom command to copy enginecore.dll to Gamesbox output directory
add_custom_command(TARGET Gamesbox POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        "$<TARGET_FILE:EngineCore>"
        "$<TARGET_FILE_DIR:Gamesbox>"
)


install(TARGETS Gamesbox
    DESTINATION bin
)
