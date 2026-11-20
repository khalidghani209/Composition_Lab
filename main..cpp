#include <iostream>
#include "Book.h"
#include "Page.h"

int main() {
    Book myBook("C++ Multi-File Design");

    myBook.addPage(Page(1, "Header files declare class interfaces."));
    myBook.addPage(Page(2, "Source files define class implementations."));
    myBook.addPage(Page(3, "Include guards prevent duplicate declarations."));

    myBook.displayBook();

    return 0;
}
