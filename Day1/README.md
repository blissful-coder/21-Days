`g++ hello.cpp`
Initially it gave following output. I am seeing this for first time.

```
Undefined symbols for architecture x86_64:
  "_main", referenced from:
     implicit entry/start for main executable
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
```

`g++ hello.cpp -o hello`
Using this compiles the program and generates an executable `hello`

It can be run using
`./hello`

After deleting hello, using `rm -rf hello`

I ran the first command again: `g++ hello.cpp`

This time it generated a default executable `a.out`

> Different searches are giving different answers. spelling checks, to compiler options -c. I am also assuming this is something to do with the way compiler geneerates class file.