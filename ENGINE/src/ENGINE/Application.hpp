#pragma once

#include "Core.hpp"

namespace ENG
{
    class ENG_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    Application* CreateApplication();
}