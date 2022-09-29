In order to get rid of the trailing newline character in the last line of a file, you need to do this in vim:
```Vim
:set nodendofline binary
:w
```
