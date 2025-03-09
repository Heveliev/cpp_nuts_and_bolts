#include "StringValidation.h"
#include <sstream>
#include <unordered_map>
#include <unordered_set>

unsigned int StringValidation::uniqueWordsCount(const std::string& line)
{
    std::unordered_map<std::string, int> word_count;
    std::unordered_set<std::string> unique_words;

    std::stringstream ss(line);
    std::string word;

    while (ss >> word)
    {
        if (word_count[word]++ == 0)
        {
            unique_words.insert(word);
        }
        else
        {
            unique_words.erase(word);
        }
    }
    return unique_words.size();
}




std::string StringValidation::mostOccuredWord(const std::string& line)
{
    std::unordered_map<std::string, int> word_count;
    std::string mostOccurredWord = "";
    int count = 0;

    std::stringstream ss(line);
    std::string word;

    while (ss >> word)
    {
        word_count[word]++;
        if(word_count[word] > count)
        {
            count = word_count[word];
            mostOccurredWord = word;
        }
    }

    return mostOccurredWord;
}
