#include "Arduino.h"
#include "ButtonStateManager.h"
#include "ButtonState.h"

// returns the number of elements in the array
#define SIZE(array) (sizeof(array) / sizeof(*array))

ButtonStateManager::ButtonStateManager() {}

void ButtonStateManager::observer()
{
	Serial.println(SIZE(*_states));
	//for (int i = 0; i <= _count; i++) {
		//_states[i].observer();
	//}

	delay(1000);
}

void ButtonStateManager::add(ButtonState& btn)
{
	_states[1] = &btn;
}
