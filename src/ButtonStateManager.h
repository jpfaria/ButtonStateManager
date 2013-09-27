#ifndef ButtonStateManager_h
#define ButtonStateManager_h

#include "Arduino.h"
#include "ButtonState.h"

class ButtonStateManager
{
  public:
    ButtonStateManager();
    void observer();
    void add(ButtonState& btn);
  private:
    ButtonState *_states[];
};

#endif
