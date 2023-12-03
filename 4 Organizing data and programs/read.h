#ifndef GUARD_read
#define GUARD_read
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

/*
 * Write a function that reads words from an input stream and stores them in a vector.
 * Use that function both to write programs that count the number of words in the input,
 * and to count how many times each word occurred.
 */

std::vector<std::string> read();
int count_words(std::vector<std::string>);
int count_word_occurences(std::vector<std::string>);

#endif