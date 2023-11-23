-- premake5.lua
workspace "ActionTest"
   configurations { "Debug", "Release" }
   
   project "BasicApp"
   kind "ConsoleApp"
   language "C++"
   cppdialect "C++20"
   architecture "x64"
   targetdir "bin/%{cfg.buildcfg}"

   includedirs {
        "./src/includes"
    }

   files { "**.h", "**.hpp", "**.cpp", "**.cc", "**.cx", "**.c" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"