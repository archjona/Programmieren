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

        string getBookName() {
            return bookName;
        }
        string getAuthorName() {
            return authorName;
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
    Book* ptr = &myBook; // pointer auf ein Objekt muss immer noch davor die passende Klasse haben
    cout << ptr->getBookName() << '\n'; // wenn pointer als objekt verwendet wird, dann -> anstatt ein .
    cout << ptr->getAuthorName() << '\n';
    ptr->setBookName("Crime and Punishment");
    ptr->setAuthorName("Fyodor");
    cout << ptr->getBookName() << '\n';
    cout << ptr->getAuthorName() << '\n';

    return 0;
}
