# catch2

`catch2` is a multi-paradigm test framework for C++, which also supports Objective-C (and maybe C). Starting from v3.0.1, `catch2` distributed as a static library.

This is a `build2` package for `catch2`. The package uses `liba{catch2}`,`liba{catch2wmain}` are the static library targets with and without the `main` function.
There are several configuration options available. But default `catch2` does the the right thing in most circumstances. See [Catch2/docs/configuration.md](https://github.com/catchorg/Catch2/blob/605a34765aa5d5ecbf476b4598a862ada971b0cc/docs/configuration.md) for details.
In general, these configurations are available as `build2` config variables with the name `config.catch2.*`.
This package generates a file `catch2/catch_user_config.hpp` based on the selected configuration which may be included in user code.
