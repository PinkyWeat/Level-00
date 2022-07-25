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
 
