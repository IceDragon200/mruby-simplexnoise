# mruby-simplexnoise
Wrapper of the simplexnoise libraries by Stefan Gustavson

Some edits had to be made to get it compiled (ISO C90 hacks...).

types:
Currently all float/doubles in the library are replaced with `sn_float`

The sn_float type is currently set to mrb_float, but can be changed back to
float or double.
