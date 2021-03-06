//
// Created by Andrew Ressler 2 on 6/21/16.
//

#ifndef AUTHORS_BOOKS_AUTHORS_BOOKS_H
#define AUTHORS_BOOKS_AUTHORS_BOOKS_H

#include <string>
using namespace std;

class Author {
private:
    string name;
    string email;
    char gender;   // 'm', 'f', or 'u' for unknown

public:
    Author(string name, string email, char gender);
    string getName() const;
    string getEmail() const;
    void setEmail(string email);
    char getGender() const;
    void print() const;
};

using namespace std;

class Book {
private:
    string name;
    Author author; // data member author is an instance of class Author
    double price;
    int qtyInStock;

public:
    Book(string name, Author author, double price, int qtyInStock = 0);
    // To recieve an instance of class Author as argument
    string getName() const;
    Author getAuthor() const;  // Returns an instance of the class Author
    double getPrice() const;
    void setPrice(double price);
    int getQtyInStock() const;
    void setQtyInStock(int qtyInStock);
    void print() const;
    string getAuthorName() const;
};

#endif //AUTHORS_BOOKS_AUTHORS_BOOKS_H
