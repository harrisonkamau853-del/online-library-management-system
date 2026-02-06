#include "Book.h"

Book::Book(int id, std::string title, std::string author)
    : id(id), title(title), author(author), isBorrowed(false) {}

int Book::getId() const { return id; }
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
bool Book::getStatus() const { return isBorrowed; }

void Book::borrowBook() { isBorrowed = true; }
void Book::returnBook() { isBorrowed = false; }
