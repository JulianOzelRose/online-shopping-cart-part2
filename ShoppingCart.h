/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        ShoppingCart.h
 *   Course:      CS 7B
 *   Assignment:  Project 1B: Online Shopping Cart, Part 2
 *   Date:        2-22-2022
 ***********************************************************************************************/

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <iostream>
#include <string>
#include <vector>
#include "ItemToPurchase.h"

using namespace std;

class ShoppingCart {
public:
    ShoppingCart();
    ShoppingCart(string t_name, string t_date);
    string GetCustomerName() const;
    string GetDate() const;
    void AddItem(ItemToPurchase);
    void RemoveItem(string t_name);
    void ModifyItem(string t_name, int t_quantity);
    int GetNumItemsInCart() const;
    int GetCostOfCart() const;
    void PrintTotal();
    void PrintDescriptions();
    string GetDescription() const;
    void SetQuantity(int t_quantity);
    int GetQuantity() const;
    string GetItemName() const;
    int GetPrice() const;
private:
    int quantity;
    int price;
    string customerName;
    string currentDate;
    string description;
    string itemName;
    vector<ItemToPurchase> cartItems;
};

#endif
