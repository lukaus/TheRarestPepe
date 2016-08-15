# TheRarestPepe
Feels good man



-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

Only tested this in linux with xterm-256color
The default colors get redefined by ncurses, (which you'll need to comipile I think) so it'll look weird on an 8-color terminal
DEPENDENCIES:

compiling this requires you have the ncurses library installed. 


INSTALLATION:

Make sure the BINDIR flag is correct, then:

make
  #This compiles

make install
  #This copies the executable to BINDIR (defaults to /usr/local/bin
make clean
  #removes the executable from working directory
  
Makefiles are new to me, so if I am doing this wrong or violating some conventions, let me know


TODO: Get compiled for Windows, and add to random people's Startup folders.
