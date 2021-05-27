#include <cassert>
#include <sstream>
#include <stdexcept>

#include <catch2/version.hxx>
#include <catch2/catch2.hxx>

int main ()
{
  using namespace std;
  using namespace catch2;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
