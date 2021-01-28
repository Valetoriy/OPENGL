#pragma once

#include "Application.hpp"

extern ENG::Application* ENG::CreateApplication();

int main()
{
    auto app = ENG::CreateApplication();
    app->Run();
    delete app;
}