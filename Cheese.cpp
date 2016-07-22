#include <iostream>
#include <string>

const unsigned int max = 4294967295U;

main ()
{
  // Use as an index.
  unsigned int s;
  string a ("Cheese.txt");
  s = a.rfind (".");
  cout << "s " << s << endl;
  a = "bb";
  s = a.rfind (".");
  if (s == max)
  {
    cout << "Not found" << endl;
  }
  else
  {
    cout << "s " << s << endl;
  }
  cout << a << endl;
  a.assign ("tt");
  cout << a << endl;
}
