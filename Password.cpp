#include <cctype>
bool Password::has_mixed_case(string str)
{
  bool has_lower = false;
  bool has_upper = false;
  for (char ch : str)
  {
    if (std::islower(ch))
    {
      has_lower = true;
    }
    else if (std::isupper(ch))
    {
      has_upper = true;
    }
  }
  return has_lower && has_upper;
}
// #include "Password.h"
// #include <string>

// using std::string;

// /*
//   The function receives a string counts how many times the same character 
//   occurs at the beginning of the string, before any other characters (or the
//   end of the string). The function is case-sensitive so 'Z' is different than
//   'z' and any ASCII characters are allowed.
// */
// int Password::count_leading_characters(string phrase){
//   if (phrase!="")
//   {
//     int repetition = 1;
//     int index = 0;
//     while( index < phrase.length()-1 && phrase[index] == phrase[index+1] ){
//       repetition++;
//       index++;
//     }
//     return repetition;
//   }
//   return 0;
// }


// /*
//   receives a string and returns whether it has both at least one upper-case
//   letter and at least one lower-case letter
// */
// bool Password::has_mixed_case(string pass){
//   return false;
// }
