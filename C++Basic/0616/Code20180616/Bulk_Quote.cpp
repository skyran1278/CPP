#include "Bulk_Quote.h"

double Bulk_quote::net_price(std::size_t cnt) const 
{
    if (cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}
