/*
Amberlee Huynh
ID: 1788355
Lab 4: Objects and Classes
3/22/2020
Xcode, macOS, Version 11.3.1, Clang
*/

#include <iostream>
#include <string>

using namespace std;

class Invoice
{
  public:
    // Provide set & get funct for each data member
    Invoice (string, string, int, int);
    void set_part_number (string);
    string get_part_number();
    void set_part_description (string);
    string get_part_description();
    void set_item_quantity (int);
    int get_item_quantity();
    void set_price_per_item (int);
    int get_price_per_item();
    int get_invoice_amount();
  
  private:
    string part_number;
    string part_description;
    int item_quantity;
    int price_per_item;
}; // End class Invoice

// Constructor initializes class's 4 data members
Invoice::Invoice ( string number, string description, int quantity, int price )
{
  set_part_number (number);
  set_part_description (description);
  set_item_quantity (quantity);
  set_price_per_item (price);
}

// SET PART NUMBER
void Invoice::set_part_number (string number)
{
  part_number = number;
}
// GET PART NUMBER
string Invoice::get_part_number ()
{
  return part_number;
}

// SET PART DESCRIPTION
void Invoice::set_part_description (string description)
{
  part_description = description;
}
// GET PART DESCRIPTION
string Invoice::get_part_description()
{
  return part_description;
}

// SET ITEM QUANTITY; if neg, set to 0
void Invoice::set_item_quantity(int quantity)
{
  if (quantity >= 0) {
    item_quantity = quantity;
  }
  else {
    item_quantity = 0;
    cout << "Quantity can't be negative. Set to 0.\n";
  }
}

// GET ITEM QUANTITY
int Invoice::get_item_quantity()
{
  return item_quantity;
}

// SET PRICE PER ITEM; if neg, set  to 0
void Invoice::set_price_per_item(int price)
{
  if (price >= 0) {
    price_per_item = price;
  }
  else {
    price_per_item = 0;
    cout << "Price can't be negative. Set to 0.\n";
  }
}

// GET PRICE PER ITEM
int Invoice::get_price_per_item()
{
  return price_per_item;
}

// INVOICE AMT
int Invoice::get_invoice_amount()
{
  return item_quantity * price_per_item;
}

int main () {
  Invoice Invoice1 ("12345", "Hammer", 100, 5);

  cout << "Part number: " << Invoice1.get_part_number() << endl;
  cout << "Part description: " << Invoice1.get_part_description() << endl;
  cout << "Quantity: " << Invoice1.get_item_quantity() << endl;
  cout << "Price per item: $" << Invoice1.get_price_per_item() << endl;
  cout << "Invoice amount: $" << Invoice1.get_invoice_amount() << endl;
  
  cout << endl;
  
  Invoice1.set_part_number ("123456");
  Invoice1.set_part_description ("Saw");
  Invoice1.set_item_quantity (-7); // neg = set to 0
  Invoice1.set_price_per_item (10);
  cout << "Invoice data members modified.\n\n";
  
  cout << "Part number: " << Invoice1.get_part_number() << endl;
  cout << "Part description: " << Invoice1.get_part_description() << endl;
  cout << "Quantity: " << Invoice1.get_item_quantity() << endl;
  cout << "Price per item: $" << Invoice1.get_price_per_item() << endl;
  cout << "Invoice amount: $" << Invoice1.get_invoice_amount() << endl;

}
