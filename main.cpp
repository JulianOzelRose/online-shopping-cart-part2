/***********************************************************************************************
 *   Author:      Julian R.
 *   File:        main.cpp
 *   Course:      CS 7B
 *   Assignment:  Project 1B: Online Shopping Cart, Part 2
 *   Date:        2-22-2022
 ***********************************************************************************************/

#include <iostream>
#include <iomanip>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"
using namespace std;

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
    ItemToPurchase item;
    string name, description;
    int price, quantity;

    switch (option) {
    case 'a': {
        cout << endl;
        cout << "ADD ITEM TO CART" << endl;
        cout << "Enter the item name:" << endl;
        cin.ignore();
        getline(cin, name);
        cout << "Enter the item description:" << endl;
        getline(cin, description);
        cout << "Enter the item price:" << endl;
        cin >> price;
        cout << "Enter the item quantity:" << endl;
        cin >> quantity;

        item.SetName(name);
        item.SetDescription(description);
        item.SetPrice(price);
        item.SetQuantity(quantity);
        theCart.AddItem(item);
        cout << endl;
        break;
    }
    case 'd': {
        cout << endl;
        cout << "REMOVE ITEM FROM CART" << endl;
        cout << "Enter name of item to remove:" << endl;
        cin.ignore();
        getline(cin, name);
        theCart.RemoveItem(name);
        cout << endl;
        break;
    }
    case 'c': {
        cout << endl;
        cout << "CHANGE ITEM QUANTITY" << endl;
        cout << "Enter the item name:" << endl;
        cin.ignore();
        getline(cin, name);
        cout << "Enter the new quantity:" << endl;
        cin >> quantity;
        theCart.ModifyItem(name, quantity);
        break;
    }
    case 'i': {
        cout << endl;
        cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
        cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart.GetDate() << endl << endl;
        cout << "Item Descriptions" << endl;
        theCart.PrintDescriptions();
        break;
    }
    case 'o': {
        cout << endl;
        cout << "OUTPUT SHOPPING CART" << endl;
        cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart.GetDate() << endl;
        cout << "Number of Items: " << theCart.GetNumItemsInCart() << endl << endl;
        theCart.PrintTotal();
        break;
    }
    case 'q': {
        exit(0);
        break;
    }
    default: {
        break;
    }
    }
}

int main() {
    string name;
    string date;
    char userChoice = 'a';

    cout << "Enter customer's name:" << endl;
    getline(cin, name);

    cout << "Enter today's date:" << endl;
    getline(cin, date);
    cout << endl;

    ShoppingCart theCart(name, date);

    cout << "Customer name: " << theCart.GetCustomerName() << endl;
    cout << "Today's date: " << theCart.GetDate() << endl << endl;

    do {
        if (userChoice == 'a' || userChoice == 'd' || userChoice == 'c' || userChoice == 'i' || userChoice == 'o' || userChoice == 'q') {
            PrintMenu();
        }
        cout << "Choose an option:" << endl;
        cin >> userChoice;
        ExecuteMenu(userChoice, theCart);
    } while (userChoice != 'q');

    return 0;
}