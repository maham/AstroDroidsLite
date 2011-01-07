#include "Precompiled.h"

//#include "AstroDroidsApplication.h"


/**
 *	Program entry point.
 */
int WINAPI WinMain( HINSTANCE const, HINSTANCE const, LPSTR const, int const ) {
	//AstroDroids::ApplicationSPtr app = AstroDroids::Application::Create( "" );
	MSG message;
	
	//app->init();
	
	for( ;; ) {
		// check for messages
		if ( PeekMessage( &message, NULL, 0, 0, PM_REMOVE ) )  {
			// handle or dispatch messages
			if ( message.message == WM_QUIT ) {
				break;
			}
			
			TranslateMessage( &message );
			DispatchMessage( &message );
		} else {
			//if( app->update() == false ) {
			//	break;
			//}
		}
	}
	
	return 0;
}
