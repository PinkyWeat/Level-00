# README in process

# Level-00

## Descritpion

### We are all in this together

**PID & PPID** -  [man 2 getpid](https://man7.org/linux/man-pages/man2/getpid.2.html).

**Arguments**

The command line arguments are passed through the ``main`` function: ``int main(int ac, char **av);``

- ``av`` is a ``NULL`` terminated array of strings
- ``ac`` is the number of items in ``av``

``av[0]`` usually contains the name used to invoke the current program. ``av[1]`` is the first argument of the program, ``av[2]`` the second, and so on.

**Executing a program**  - [man 2 execve](https://man7.org/linux/man-pages/man2/execve.2.html)

**Creating processes** - [man 2 fork](https://man7.org/linux/man-pages/man2/fork.2.html)

**Wait** - [man 2 wait](https://man7.org/linux/man-pages/man2/wait.2.html)

**File information** - [man 2 stat](https://man7.org/linux/man-pages/man2/lstat.2.html)

**Environment** - [printenv](https://man7.org/linux/man-pages/man1/printenv.1.html)

**main()** - [main function](https://en.cppreference.com/w/c/language/main_function)

# Personal Notes

- All files starting with F are the ones I'm compiling at the moment + main.h
- Code handles ``/bin/ls`` and ls as ``argv[0]``.
- Code recognizes ``**argv`` with flags and arg of /dir/.
- Code has ``Fget_func.c`` which includes 3 functions in order to make work easier:
- ``printMe`` - function has been used to debug.
- ``executeMe`` - returns the cmd line tokenized.
- ``repeatMe`` - function returns num of repeated times a character appears in a string.
- Code handles exit ``ctrl+d``.
- Code contains a commented ``main`` in order to be used for an easier debugging.

## For tomorrow

- Code needs to recognize flags. ``done``
- Code needs to find current usr for /usr/ part in location variable in main that's currently hardocoded. ``done``
- Code needs to be verified with valgrind + betty. ``TO DO``
- Code needs to be double checked for ifs of cases that there are errors (excess of args, 'n that stuff). ``Double check, I think it's done``.
- Re-read mandatory 4 due to fork thingy.
- Research each exit depending on which exit should be used. 
- Run the checker.

## More

Compiled with:

	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 Fmain.c Fget_funcs.c F_getenv.c Fstr_concat.c F_which.c -o hsh
