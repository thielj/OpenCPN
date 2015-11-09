#ifndef _OPENGL_H_
#define _OPENGL_H_

#ifdef ocpnUSE_GL

#ifdef __WXMSW__
    #include "GL/gl.h"            // local copy for Windows
    #include "GL/glu.h"
    // ??? because gl.h includes windows.h which defines symbols that conflict with wx
    //#include <wx/msw/winundef.h>
#else
    #if __OCPN__ANDROID__
        #include <QtGui/qopengl.h>
    #endif

    #define GL_GLEXT_LEGACY
    #define GLX_GLXEXT_LEGACY
    #include <GL/gl.h>
    #ifndef __OCPN__ANDROID__
        #include <GL/glx.h>
    #endif

    #include <GL/glu.h>
#endif

#include <wx/glcanvas.h>

#endif      // ocpnUSE_GL

#endif      // _OPENGL_H_
