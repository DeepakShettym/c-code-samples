# c-code-samples
C programs demonstrating core concepts


✅ How to Compile with -I(for header files in diff location)

gcc -c -I ../include main.c

gcc -c -I ../include utils.c

gcc -o myapp main.o utils.o

-I ../include: Tells the compiler to look inside ../include/ for header files like myheader.h.

-c: Compiles to object files (.o) without linking.

-o myapp ...: Links object files into the final executable.

🔁 Run the Program

./myapp

Add C program to demonstrate macro-based condition

- Uses MYDEBUG macro to show different output based on definition

- Shows how to define macro via gcc -D flag

- Useful for learning conditional compilation and build-time configuration

