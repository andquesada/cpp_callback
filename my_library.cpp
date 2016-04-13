#include <stdio.h>

#include "my_library.h"

int MyClass :: handle_event(
   void *               outputBuffer,
   void *               inputBuffer,
   unsigned             intFrames,
   double               streamTime,
   RtAudioStreamStatus  status,
   void *               userData)
{
   printf("El codigo si llego a este punto.\n\n");
}
