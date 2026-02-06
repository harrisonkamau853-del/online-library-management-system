#include "Library.h"
#include <algorithm>

void Library::addBook(const Book &book)
{
    books.push_back(book);
}

void Library::addUser(const User &user)
{
    users.push_back(user);
}

bool Library::borrowBook(int userId, int bookId)
{
    for (auto &user : users)
    {
        if (user.getId() == userId)
        {
            for (auto &book : books)
            {
                if (book.getId() == bookId && !book.getStatus())
                {
                    book.borrowBook();
                    user.borrowBook(bookId);
                    return true;
                }
            }
        }
    }
    return false;
}

bool Library::returnBook(int userId, int bookId)
{
    for (auto &user : users)
    {
        if (user.getId() == userId)
        {
            for (auto &book : books)
            {
                if (book.getId() == bookId && book.getStatus())
                {
                    book.returnBook();
                    user.returnBook(bookId);
                    return true;
                }
            }
        }
    }
    return false;
}
