-Methods and variables for Width, Height and anything else generic in the framework such as OpenGL version.  <% IN PROGRESS  %>


Settings Class<br />
-Rename screen size methods to window size
-Retina variables - maybe call them scaledWindowSize and by default assign the normal variables to the reina variables<br />
-Depth bits<br />
-Stencil Bits<br />
-Major and Minor Version<br />
-Resizable window true or false<br />
-Anti Aliasing <br />
-Fullscreen <br />
-Window Title<br />
-VSYNC<br />



-Fix window not closing<br />



Add using name define for SonarGameEngine as USING_NAMESPACE_SGE and USING_NAMESPACE_SONAR_GAME_ENGINE<br />






SDL GET RETINA SIZE

int actualWidth, actualHeight;
SDL_GL_GetDrawableSize( window, &actualWidth, &actualHeight );

std::cout << actualWidth << std::endl;
std::cout << actualHeight << std::endl;



