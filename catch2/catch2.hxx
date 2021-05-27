#pragma once

#include <iosfwd>
#include <string>

#include <catch2/export.hxx>

namespace catch2
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  CATCH2_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
