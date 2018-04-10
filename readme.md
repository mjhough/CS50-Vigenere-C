# CS50-Vigenere-C
An alphanumeric string encrypter in C for Harvard's CS50 course.

The program uses [Vigenere's Cypher](https://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher) to encrypt strings.

### Instructions to run:
1. Compile the code by running the following command: `clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wshadow vigenere.c -lcrypt -lcs50 -lm -o vigenere`.

2. Run the compiled code by typing `./vigenere <ENCRYPTION KEY HERE>`, asssuming you are in the same directory as the compiled file.
