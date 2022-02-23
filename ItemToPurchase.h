/***********************************************************************************************
 *   Author:      Julian R.
 *   File:        ItemToPurchase.h
 *   Course:      CS 7B
 *   Assignment:  Project 1B: Online Shopping Cart, Part 2
 *   Date:        2-22-2022
 ***********************************************************************************************/

#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    ItemToPurchase(string t_name, string t_description, int t_price, int t_quantity);
    void SetName(string t_name);
    string GetName() const;
    void SetPrice(int t_price);
    int GetPrice() const;
    void SetQuantity(int t_quantity);
    int GetQuantity() const;
    void SetDescription(string t_description);
    string GetDescription() const;
    void PrintItemCost();
    void PrintItemDescription();
private:
    string itemName;
    string itemDescription;
    int itemPrice;
    int itemQuantity;
};

#endif