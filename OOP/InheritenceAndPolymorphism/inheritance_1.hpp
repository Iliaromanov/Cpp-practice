#include <string>

class Book {
    std::string author, title;
    int length;
  public:
    Book( const std::string &author, 
      const std::string &title, 
      int length );
    std::string getTitle() const;
    std::string getAuthor() const;
    int getLength() const;
    bool isHeavy() const;
};

class Text : public Book { // inhertis from Book
    std::string topic;
  public:
    Text( const std::string &author, 
        const std::string &title, 
        int length, 
        const std::string &topic ) 
        : Book{title, author, length}, topic{topic} {} // note how Book ctor used for inherited fields
    std::string getTopic() const;
};

class Comic : public Book { // inhertis from Book
    std::string hero;
  public:
    Comic( const std::string &author, 
        const std::string &title, 
        int length, 
        const std::string &hero )
        : Book{title, author, length}, hero{hero} {}
    std::string getHero() const;
};