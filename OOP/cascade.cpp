#include <iostream>
using namespace std;

class Book {
    private:
        string bookName;
        string authorName;

    public:
        Book(string bookName, string authorName) {
           this->bookName = bookName;
           this->authorName = authorName;
        }

        Book getBookName() {
            cout << this->bookName << '\n';
            return *this; // durch das dereferencing des pointers wird das objekt returned
        }
        Book getAuthorName() {
            cout << this->authorName << '\n';
            return *this;
        }

        void setBookName(string newBookName) {

            bookName = newBookName;
        }
        void setAuthorName(string newAuthorName) {
             authorName = newAuthorName;
        }
};

int main() {

    Book myBook("ASOIAF", "George");
    myBook.getBookName().getAuthorName(); // weil das Objekt bei jedem call wieder returned wird, können mehrere Funktionen gecalled werden

    return 0;
}
