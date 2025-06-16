#pragma once

#include "Core.h"

namespace Unify
{

    class UNIFY_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };
}