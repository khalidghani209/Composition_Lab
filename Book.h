#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>
#include "Page.h"

class Book {
private:
    std::string title;
    std::vector<Page> pages;

public:
    Book(const std::string& bookTitle);
    void addPage(const Page& page);
    void displayBook() const;
};

#endif // BOOK_H
