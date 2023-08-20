workspace "spdlog"
    architecture "x64"
    staticruntime "on"
    linkoptions { "/NODEFAULTLIB:library" }

    configurations 
    {
        "Debug", 
        "Release"
    }

outputdir = "%{cfg.buildcfg}"

project "spdlog"
    language  "C++"
    cppdialect  "C++20"
    systemversion "latest"
    kind "StaticLib"
    targetdir  ("bin/" .. outputdir.. "-%{prj.name}")
    objdir  ("bin-int/" .. outputdir .. "-%{prj.name}")

    files
    {
        "src/Base/Base.cpp",
        "include/**.h"
    }
    
    includedirs
    {
        "include",
    }

    libdirs
    {
    }

    links
    {
    }
    
    filter "configurations:Debug"
        defines { "_DEBUG" }
        runtime "Debug"

    filter "configurations:Release"
        defines { "NDEBUG" }
        runtime "Release"
