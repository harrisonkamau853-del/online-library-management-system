#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User
{
private:
    int userId;
    std::string name;
    std::vector<int> borrowedBooks;

public:
    User(int id, std::string name);

    int getId() const;
    std::string getName() const;

    void borrowBook(int bookId);
    void returnBook(int bookId);
};

#endif
