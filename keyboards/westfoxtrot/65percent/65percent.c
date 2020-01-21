#include "65percent.h"

void keyboard_pre_init_kb (void) {
  setPinOutput(B12);
  setPinOutput(A9);
}

bool led_update_kb(led_t led_state) {
  bool res = led_update_user(led_state);
  if(res) {
    // writePin sets the pin high for 1 and low for 0.
    // In this example the pins are inverted, setting
    // it low/0 turns it on, and high/1 turns the LED off.
    // This behavior depends on whether the LED is between the pin
    // and VCC or the pin and GND.
    writePin(B12, led_state.caps_lock);
  }
  return res;
}

__attribute__((weak)) layer_state_t layer_state_set_user(layer_state_t state) {
  writePin(A9, (state & (1UL << 1)));
  return state;
}
