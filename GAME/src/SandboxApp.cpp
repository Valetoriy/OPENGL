#include "../../ENGINE/src/ENGINE.hpp"

class Sandbox : public ENG::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }
};

ENG::Application* ENG::CreateApplication()
{
    return new Sandbox();
}