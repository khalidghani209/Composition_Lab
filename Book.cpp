#include "Book.h"
#include <iostream>

Book::Book(const std::string& bookTitle)
    : title(bookTitle) {}

void Book::addPage(const Page& page) {
    pages.push_back(page);
}

void Book::displayBook() const {
    std::cout << "Book: " << title << "\n";
    for (const auto& page : pages) {
        page.display();
    }
}
