/*

The first program to write is the same for all languages:

Print the words

hello, world

#include <stdio.h>

int main()
{
printf("hello, world\n");
}

*/

import std.ui;     //future UI module
import std.core;

int main()
{
   static std::map<std::language_id_t, std::u8string> hellos{ //language_id_t comes from std.ui
       { "English"lid, "Hello, world" }, //a literal produces the right language type
       { "Chinese"lid,  "你好，世界" },
       { "Hindi"lid, "नमस्ते दुनिया" },
       { "Spanish"lid, "Hola Mundo" },
       { "French"lid, "Bonjour le monde" },
       { "Arabic"lid, "مرحبا بالعالم" },
       { "Bengali"lid, "ওহে বিশ্ব" },
       { "Russian"lid, "Привет, мир" },
       { "Portuguese"lid, "Olá Mundo" },
       { "Indonesian"lid, "Halo Dunia" },
       { "Urdu"lid, "ہیلو، دنیا" },
       { "German"lid, "Hallo Welt" },
       { "Japanese"lid, "こんにちは世界" },
       { "Swahili"lid, "Salamu, Dunia" },
       { "Punjabi"lid, "ਸਤਿ ਸ੍ਰੀ ਅਕਾਲ ਦੁਨਿਆ" },
       { "Telugu"lid, "హలో, ప్రపంచం" },
       { "Javanese"lid, "Hello, donya" },
       { "Marathi"lid, "हॅलो, जग" },
       { "Turkish"lid, "Selam Dünya" },
   };

   //More than 75 % of the world population would be able to read and understand its greeting.

   std::post_notification (  //this also comes from std.ui
      // if we can define variables in an if statement, why can't we in a tetriary operator?
      (std::optional<std::u8string> hello = hellos[std::get_language_id()]) //get the default system language
      ? *hello
      : *hellos["English"lid];
   );
}

