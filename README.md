# ft_printf

42 cursus project: recode the C standard library's `printf` from scratch, with support for variadic arguments and format specifiers, under 42's strict coding style rules (no `for`, one function per file, etc.).

## Supported conversions

`%c` character · `%s` string · `%p` pointer · `%d` / `%i` int · `%u` unsigned · `%x` / `%X` hex · `%%` literal percent

## How it works

- `ft_printf.c` — parses the format string, dispatches each conversion to its handler and accumulates the printed length
- `handlechar.c` — per-conversion writers (ints, strings, hex, pointers)
- `ft_basicfunc.c` — minimal replacements for libc helpers (`ft_strlen`, `ft_itoa`-style conversions, ...) since libc isn't allowed

## Build & run

```bash
make        # builds libftprintf.a
```

Link it into any C project:

```c
#include "ft_printf.h"

ft_printf("Hello %s, %d%% done in %x bytes\n", "world", 42, 255);
```

## Stack

C · variadic functions (`va_list`, `va_arg`) · format-string parsing
