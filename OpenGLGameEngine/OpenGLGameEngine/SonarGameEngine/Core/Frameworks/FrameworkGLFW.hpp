//
//  SGE_GLFW.hpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

#include "DEFINITIONS.hpp"

#ifdef SGE__GLFW

#include "FrameworkInterface.hpp"

#include <GLFW/glfw3.h>

namespace SonarGameEngine
{
    class FrameworkGLFW: public FrameworkInterface
    {
    public:
        FrameworkGLFW( );
        
        void Init( ) override;
                
        void PollEvents( ) override;
        
        void SwapBuffers( ) override;
        
        void CleanUp( ) override;
        
        bool WindowIsOpen( ) const override;
        
        void CloseWindow( ) override;
        
        static void KeyCallback( GLFWwindow *window, int key, int scancode, int action, int mods );
        static void MouseButtonCallback( GLFWwindow *window, int button, int action, int mods );
        static void MouseScrollCallback( GLFWwindow *window, double xoffset, double yoffset );
        static void CursorCallback( GLFWwindow *window, double xpos, double ypos );
        static void CursorEnterWindowCallback( GLFWwindow *window, int entered );
        
    private:
        GLFWwindow *window;
    };
}
#endif
