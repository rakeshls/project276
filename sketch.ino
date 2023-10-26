#include <TVout.h>
#include "my_pic.h"

TVout TV;

void setup() {

  TV.begin(PAL, 128, 96); //PAL or NTSC
  TV.clear_screen();
  TV.bitmap(0, 0, d2);

}

void loop() {


}