#include <string>
#include "inheritance_1.hpp"

// Copy ctor:
Text::Text(const Text &other): Book{other}, topic{other.topic} {}

// Copy assignment:
Text &Text::operator=(const Text &other) {
    Book::operator=(other);
    topic = other.topic;
    return *this;
}

// Move ctor:
Text::Text(Text &&other): Book{std::move(other)}, topic{std::move(other.topic)} {}

// Move assignment:
Text &Text::operator=(Text &&other) {
    Book::operator=(std::move(other));
    topic = std::move(other.topic);
    return *this;
}