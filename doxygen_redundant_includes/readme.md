# Find Redundant Includes Using Graphviz in Doxygen

These instructions are for Linux or WSL.

1. Install Doxygen and Graphviz.

`sudo apt install doxygen graphviz`

2. To recreated this example, create a Doxygen config file. Otherwise, open your project's existing Doxygen file.

`doxygen -g Doxyfile`

3. If you're trying to replicate this example, leave everything as the default except for the following items ChatGPT instructed me to verify. Otherwise, set these in your project's Doxygen file.
```
    # Generate include dependency graphs
    HAVE_DOT = YES
    DOT_PATH = /usr/bin   # path to Graphviz dot executable
    CALL_GRAPH = YES
    CALLER_GRAPH = YES
    INCLUDE_GRAPH = YES     # shows what each file includes
    INCLUDED_BY_GRAPH = YES # shows which files include this file
    
    # Only process your project headers
    EXTRACT_ALL = YES
    RECURSIVE = YES
    INPUT = ./src          # path to your source code
```

As I write this, it is my first time using Doxygen, so
TODO: Read the Doxygen comments for each of these to better understand what each option controls.

4. Run Doxygen.

`doxygen Doxyfile`

5. Open the html/index.html file.

6. Navigate to each file's page to look at the dependency graph.




# Notes:
The program can be compiled with `clang src/file2.c -o src/filetwoprogram`.
No -I flags are necessary because the headers are in src/ with the source file.
Remember `clang -c src/file2.c -o src/file2.o` will compile only and then linking is done with `clang src/file2.o -o src/filetwoprogram`.
You can get preprocessor output with `-E` and leave in the preprocessor directive names with `-dD` and the full command is `clang -E -dD src/filetwo.c -o src/filetwo.i`.
