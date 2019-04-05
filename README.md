# salahtime

salahtime is a small command line application written in C for Linux and BSD that displays the Islamic prayer times for Copenhagen in Denmark.

salahtime uses a multidimensional array to store the time table and the table can easily be substituted for another if needed.

## Installation

Clone this repository or download the zip version.

```
$ git clone https://github.com/unixsheikh/c-salahtime
```

The Makefile uses clang, but if you want to use gcc instead just change the `CC` variable to gcc, then run the make command:

```
$ cd c-salahtime
$ make
```

Or:

```
$ make CC=gcc
```

Then simply copy the `salahtime` executable to somewhere in your home directory and add that directory to your `$PATH` variable.

The following example uses the Bash shell.

```
$ mkdir $HOME/bin
$ cp salahtime $HOME/bin/
```

Edit `.bashrc` in your home directory with your favorite text editor and add the "bin" folder to your $PATH variable.

```
export PATH=$HOME/bin:$PATH
```

Remember to reload bash.

```
$ exec bash
```

If you need to uninstall salahtime just remove it from the "bin" folder.

See the man page for usage information:

```
$ man salahtime.1
```

