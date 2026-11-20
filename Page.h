#ifndef PAGE_H
#define PAGE_H

#include <string>

class Page {
private:
    int pageNumber;
    std::string content;

public:
    Page(int num, const std::string& text);
    int getPageNumber() const;
    std::string getContent() const;
    void display() const;
};

#endif // PAGE_H
