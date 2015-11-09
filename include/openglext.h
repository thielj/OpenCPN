#ifndef _OPENGLEXT_H_
#define _OPENGLEXT_H_

// This should be included as late as possible to prevent types being acciddentially defined in GLEXT

#ifdef ocpnUSE_GL

#include <stddef.h>
#include <stdint.h>
#include <inttypes.h>

#ifdef __WXMSW__
    // ????
#else
    namespace GLEXT {
    #include <GL/glext.h>
    #ifndef __OCPN__ANDROID__
        #include <GL/glxext.h>
    #endif
    }
    #if __OCPN__ANDROID__
        #include <EGL/egl.h>	// eglGetProcAddress
    #endif
#endif

#endif      // ocpnUSE_GL

#endif      // _OPENGL_H_
