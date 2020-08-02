#ifndef QUOTE_H
#define QUOTE_H

#include <string>

class Quote {
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) :
        bookNo(book), price(sales_price) { }
    std::string isbn() const { return bookNo; }
    // returns the total sales price for the specified number of items
    // derived classes will override and apply different discount algorithms
    virtual double net_price(std::size_t n) const
    {
        return n * price;
    }
    virtual ~Quote() = default; // dynamic binding for the destructor
private:
	std::string bookNo; // ISBN number of this item
protected:
    double price = 0.0; // normal, undiscounted price
};

#endif