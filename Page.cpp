#include "Page.h"
#include <iostream>

Page::Page(int num, const std::string& text)
    : pageNumber(num), content(text) {}

int Page::getPageNumber() const {
    return pageNumber;
}

std::string Page::getContent() const {
    return content;
}

void Page::display() const {
    std::cout << "Page " << pageNumber << ": " << content << "\n";
}
