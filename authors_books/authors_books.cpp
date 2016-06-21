//
// Created by Andrew Ressler 2 on 6/21/16.
//

/* Implementation for the Author class (Author.cpp) */
#include <iostream>
#include "authors_books.h"
using namespace std;

// Constructor, with input validation
Author::Author(string name, string email, char gender) {
    this->name = name;
    setEmail(email);  // Call setter to check for valid email
    if (gender == 'm' || gender == 'f') {
        this->gender = gender;
    } else {
        cout << "Invalid gender! Set to 'u' (unknown)." << endl;
        this->gender = 'u';
    }
}

string Author::getName() const {
    return name;
}

string Author::getEmail() const {
    return email;
}

void Author::setEmail(string email) {
    // Check for valid email. Assume that a valid email contains
    //  a '@' that is not the first nor last character.
    size_t atIndex = email.find('@');
    if (atIndex != string::npos && atIndex != 0 && atIndex != email.length()-1) {
        this->email = email;
    } else {
        cout << "Invalid email! Set to empty string." << endl;
        this->email = "";
    }
}

char Author::getGender() const {
    return gender;
}

// print in the format "name (gender) at email"
void Author::print() const {
    cout << name << " (" << gender << ") at " << email << endl;
}


using namespace std;

// Constructor, with member initializer list to initialize the
//  component Author instance
Book::Book(string name, Author author, double price, int qtyInStock)
        : name(name), author(author) {   // Must use member initializer list to construct object
    // Call setters to validate price and qtyInStock
    setPrice(price);
    setQtyInStock(qtyInStock);
}

string Book::getName() const {
    return name;
}

Author Book::getAuthor() const {
    return author;
}

double Book::getPrice() const {
    return price;
}

// Validate price, which shall be positive
void Book::setPrice(double price) {
    if (price > 0) {
        this->price = price;
    } else {
        cout << "price should be positive! Set to 0" << endl;
        this->price = 0;
    }
}

int Book::getQtyInStock() const {
    return qtyInStock;
}

// Validate qtyInStock, which cannot be negative
void Book::setQtyInStock(int qtyInStock) {
    if (qtyInStock >= 0) {
        this->qtyInStock = qtyInStock;
    } else {
        cout << "qtyInStock cannot be negative! Set to 0" << endl;
        this->qtyInStock = 0;
    }
}

// print in the format ""Book-name" by author-name (gender) at email"
void Book::print() const {
    cout << "'" << name << "' by ";
    author.print();
}

// Return the author' name for this Book
string Book::getAuthorName() const {
    return author.getName();   // invoke the getName() on instance author
}