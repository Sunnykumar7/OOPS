#include <iostream>
using namespace std;

class Book {
private:
    int bookId;
    int pages;
    double price;

public:
    void setBookId(int id) {
        bookId = id;
    }

    void setPages(int pg) {
        pages = pg;
    }

    void setPrice(double pr) {
        price = pr;
    }

    int getBookId() {
        return bookId;
    }

    int getPages() {
        return pages;
    }

    double getPrice() {
        return price;
    }

    void showBookDetails() {
        cout << "Book ID: " << bookId << endl;
        cout << "Pages: " << pages << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book *bobj1 = new Book;
    bobj1->setBookId(101);
    bobj1->setPages(300);
    bobj1->setPrice(29.99);

    Book *bobj2 = new Book;
    bobj2->setBookId(102);
    bobj2->setPages(450);
    bobj2->setPrice(35.50);

    cout << "Details of Book 1:" << endl;
    bobj1->showBookDetails();
    cout << "\nDetails of Book 2:" << endl;
    bobj2->showBookDetails();

    cout << "\nThe costlier book is:" << endl;
    if (bobj1->getPrice() > bobj2->getPrice()) {
        bobj1->showBookDetails();
    } else if (bobj1->getPrice() < bobj2->getPrice()) {
        bobj2->showBookDetails();
    } else {
        cout << "Both books have the same price." << endl;
    }

    delete bobj1;
    delete bobj2;

    return 0;
}