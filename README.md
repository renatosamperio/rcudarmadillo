# Package `rcudarmadillo`
R package to work with CUDA


## Run debugger
```
R -d gdb -e "devtools::load_all(); solveMatrix();"
```

Then, `gdb` would run before executing `R`.
```

GNU gdb (GDB) Red Hat Enterprise Linux 10.2-13.el9
Copyright (C) 2021 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-redhat-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from /usr/local/lib64/R/bin/exec/R...
(gdb) 
```

## Set break point
 
```
(gdb) break arma_matrix.cpp:12
No source file named sum_vectors.cpp.
Make breakpoint pending on future shared library load? (y or [n]) y
Breakpoint 1 (arma_matrix.cpp:8) pending.

```

## Run `gdb`

```
(gdb) run
Starting program: /usr/local/lib64/R/bin/exec/R -e devtools::load_all\(\)\;\~+\~function\(\)
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib64/libthread_db.so.1".

R version 4.1.1 (2021-08-10) -- "Kick Things"
Copyright (C) 2021 The R Foundation for Statistical Computing
Platform: x86_64-pc-linux-gnu (64-bit)

```