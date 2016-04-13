#include "my_library.cpp"

#ifndef NULL
#define NULL 0
#endif

int main(int argc, const char ** argv)
{
   MyClass c;
   RtAudioCallback cb;

    cb = c.handle_event; 
    cb(NULL,
       NULL,
       7,
       7.7,
       2,
       NULL);
}
