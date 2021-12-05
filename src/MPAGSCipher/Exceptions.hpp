#ifndef MPAGSCIPHER_EXCEPTIONS_HPP
#define MPAGSCIPHER_EXCEPTIONS_HPP

#include <iostream>
#include <string>
#include <exception>

class MissingArg : public std::invalid_argument {
    public:
        MissingArg(const std::string& message) 
            : std::invalid_argument(message)
        {}
};

class UnknownArg : public std::invalid_argument {
    public:
        UnknownArg(const std::string& message) 
            : std::invalid_argument(message)
        {}
};

#endif