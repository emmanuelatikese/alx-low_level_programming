###This is the respository we  all been looking for
### 1-create_dynamic_lib.sh
gcc -c -fPIC _abs.c -o _abs.o: This line compiles the _abs.c source file into an object file named _abs.o, following the same process as the previous lines.

gcc -c -fPIC _isupper.c -o _isupper.o: This line compiles the _isupper.c source file into an object file named _isupper.o, following the same process as the previous lines.

gcc -c -fPIC _isdigit.c -o _isdigit.o: This line compiles the _isdigit.c source file into an object file named _isdigit.o, following the same process as the previous lines.

gcc -c -fPIC _strlen.c -o _strlen.o: This line compiles the _strlen.c source file into an object file named _strlen.o, following the same process as the previous lines.

gcc -c -fPIC _puts.c -o _puts.o: This line compiles the _puts.c source file into an object file named _puts.o, following the same process as the previous lines.

gcc -c -fPIC _strcpy.c -o _strcpy.o: This line compiles the _strcpy.c source file into an object file named _strcpy.o, following the same process as the previous lines.

gcc -c -fPIC _atoi.c -o _atoi.o: This line compiles the _atoi.c source file into an object file named _atoi.o, following the same process as the previous lines.

gcc -c -fPIC _strcat.c -o _strcat.o: This line compiles the _strcat.c source file into an object file named _strcat.o, following the same process as the previous lines.

gcc -c -fPIC _strncat.c -o _strncat.o: This line compiles the _strncat.c source file into an object file named _strncat.o, following the same process as the previous lines.

gcc -c -fPIC _strncpy.c -o _strncpy.o: This line compiles the _strncpy.c source file into an object file named _strncpy.o, following the same process as the previous lines.

gcc -c -fPIC _strcmp.c -o _strcmp.o: This line compiles the _strcmp.c source file into an object file named _strcmp.o, following the same process as the previous lines.

gcc -c -fPIC _memset.c -o _memset.o: This line compiles the _memset.c source file into an object file named _memset.o, following the same process as the previous lines.

gcc -c -fPIC _memcpy.c -o _memcpy.o: This line compiles the _memcpy.c source file into an object file named _memcpy.o, following the same process as the previous lines.

gcc -c -fPIC _strchr.c -o _strchr.o: This line compiles the _strchr.c source file into an object file named _strchr.o, following the same process as the previous lines.

gcc -c -fPIC _strspn.c -o _strspn.o: This line compiles the _strspn.c source file into an object file named _strspn.o, following the same process as the previous lines.

gcc -c -fPIC _strpbrk.c -o _strpbrk.o: This line compiles the _strpbrk.c source file into an object file named _strpbrk.o, following the same process as the previous lines.

gcc -c -fPIC _strstr.c -o _strstr.o: This line compiles the _strstr.c source file into an object file named _strstr.o, following the same process as the previous lines.

gcc -shared -o liball.so _putchar.o ... _strstr.o: This line links all the object files (_putchar.o, _islower.o, ..., _strstr.o) into a single shared library named liball.so. The -shared flag tells gcc to create a shared library, and -o liball.so specifies the output file name.
