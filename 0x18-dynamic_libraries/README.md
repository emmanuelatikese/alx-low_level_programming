###This is the respository we  all been looking for
### 1-create_dynamic_lib.sh
Compiles all .c files in the current directory into corresponding .o object files using gcc -c -fPIC *.c.
Links all the .o files into a single shared library named liball.so using gcc -shared -o liball.so *.o.
Removes all .o files after creating the shared library to clean up the directory using rm *.o.
