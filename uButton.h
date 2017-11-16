/*
	Button library
	Phillip Schmidt, 02/17
	v1.0
	
	OBJECT CREATION:
	Button ButtonObject(pin, debounce time[MS], switch normal state)
	

*/

#ifndef uButton_h
	#define uButton_h

	#include <arduino.h>

	class uButton
	{
		public:
			uButton(int pin, int normState);
			
			bool check();


		private:

			int pin;
			bool stateLast, switchDown, state, notRun;
	};

#endif