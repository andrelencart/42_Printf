# 42_Printf

Small reimplementation of the C standard `printf` function following the 42 school constraints.

## Quick overview
Provides:
- int ft_printf(const char *format, ...);
- Behavior targeted to match the 42 cursus requirements for the common subset of specifiers and flags.

## Supported conversions
- %c — character
- %s — string
- %p — pointer (hex)
- %d, %i — signed decimal integer
- %u — unsigned decimal integer
- %x, %X — unsigned hexadecimal (lower / upper)
- %% — literal percent sign

Supported flags and modifiers:
- `-` (left-justify)
- `0` (zero padding)
- field width and precision (including `*` from argument list)
- precision behavior for strings and numbers

## Build
Run the Makefile in the repository root.

Common targets:
- make — build
- make clean — remove object files
- make fclean — remove objects and binaries
- make re — fclean then make

Example:
```bash
make
```

## Author
andrelencart
