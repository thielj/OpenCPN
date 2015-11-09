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
    #include <GL/gl.h>
    #include <GL/glu.h>
    namespace GLEXT {
    #include <GL/glext.h>
    }
    #if __OCPN__ANDROID__
        #include <EGL/egl.h>	// eglGetProcAddress
    #endif
#endif

#endif      // ocpnUSE_GL

#endif      // _OPENGL_H_
