#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book
{
private:
    int id;
    std::string title;
    std::string author;
    bool isBorrowed;

public:
    Book(int id, std::string title, std::string author);

    int getId() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    bool getStatus() const;

    void borrowBook();
    void returnBook();
};

#endif
