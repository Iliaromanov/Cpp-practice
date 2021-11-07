#include <string>

class Book {
    std::string author, title;
    int length;
  protected:
    int getLength() const;
  public:
    Book( const std::string &author, 
      const std::string &title, 
      int length );
    std::string getTitle() const;
    std::string getAuthor() const;
    bool virtual isHeavy() const {return length > 200;}
};

class Text : public Book { // inhertis from Book
    std::string topic;
  public:
    Text( const std::string &author, 
        const std::string &title, 
        int length, 
        const std::string &topic ) 
        : Book{title, author, length}, topic{topic} {} // note how Book ctor used for inherited fields

    Text(const Text &other);
    Text &operator=(const Text &other);
    Text(Text &&other);
    Text &operator=(Text &&other);


    std::string getTopic() const;
    bool isHeavy() const override {return getLength() > 400; }
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
    bool isHeavy() const override {return getLength() > 30;}
};