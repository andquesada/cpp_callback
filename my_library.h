#ifndef _MY_LIBRARY_H_
#define _MY_LIBRARY_H_

typedef unsigned int RtAudioStreamStatus;

typedef int (* RtAudioCallback) (
   void * outputBuffer,   
   void * inputBuffer,
   unsigned intFrames,
   double streamTime,
   RtAudioStreamStatus status,
   void *userData
);

class MyClass
{
public:
   static int handle_event(
      void * outputBuffer,   
      void * inputBuffer,
      unsigned intFrames,
      double streamTime,
      RtAudioStreamStatus status,
      void *userData
   );
};

#endif
