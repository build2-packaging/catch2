# catch2

`catch2` is a multi-paradigm test framework for C++. which also supports Objective-C (and maybe C). It is primarily distributed as a single header file, although certain extensions may require additional headers.

This is a build2 package for `catch2`. The package uses `lib{catch2}` as the header only version and `liba{catch2wmain}` is a static library for more scalable use of `catch2`. When building the static library, a default reporter can be set using a configuration variable, which this package leaves empty.
```
config [string] config.catch2.default_reporter ?= ""
```
In this case, the default reporter is auto configured by `catch2` (to `console`).
