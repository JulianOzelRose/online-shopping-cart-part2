# online-shopping-cart-part2

7.24 LAB*: Online shopping cart (Part 2)

This program extends the earlier "Online shopping cart" program. (Consider first saving your earlier program).

(1) Extend the ItemToPurchase class per the following specifications:

    Parameterized constructor to assign item name, item description, item price, and item quantity (default values of 0). (1 pt)
    Public member functions
        SetDescription() mutator & GetDescription() accessor (2 pts)
        PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
        PrintItemDescription() - Outputs the item name and description
    Private data members
        string itemDescription - Initialized in default constructor to "none"

Ex. of PrintItemCost() output:

    Bottled Water 10 @ $1 = $10


Ex. of PrintItemDescription() output:

    Bottled Water: Deer Park, 12 oz.


(2) Create three new files:

    ShoppingCart.h - Class declaration
    ShoppingCart.cpp - Class definition
    main.cpp - main() function (Note: main()'s functionality differs from the warm up)

Build the ShoppingCart class with the following specifications. Note: Some can be function stubs (empty functions) initially, to be completed in later steps.

    Default constructor
    Parameterized constructor which takes the customer name and date as parameters (1 pt)
    Private data members
        string customerName - Initialized in default constructor to "none"
        string currentDate - Initialized in default constructor to "January 1, 2016"
        vector < ItemToPurchase > cartItems
    Public member functions
        GetCustomerName() accessor (1 pt)
        GetDate() accessor (1 pt)
        AddItem()
            Adds an item to cartItems vector. Has a parameter of type ItemToPurchase. Does not return anything.
        RemoveItem()
            Removes item from cartItems vector. Has a string (an item's name) parameter. Does not return anything.
            If item name cannot be found, output this message: Item not found in cart. Nothing removed.
        ModifyItem()
            Modifies an item's description, price, and/or quantity. Has a parameter of type ItemToPurchase. Does not return anything.
            If item can be found (by name) in cart, check if parameter has default values for description, price, and quantity. If not, modify item in cart.
            If item cannot be found (by name) in cart, output this message: Item not found in cart. Nothing modified.
        GetNumItemsInCart() (2 pts)
            Returns quantity of all items in cart. Has no parameters.
        GetCostOfCart() (2 pts)
            Determines and returns the total cost of items in cart. Has no parameters.
        PrintTotal()
            Outputs total of objects in cart.
            If cart is empty, output this message: SHOPPING CART IS EMPTY
        PrintDescriptions()
            Outputs each item's description.


Ex. of PrintTotal() output:

    John Doe's Shopping Cart - February 1, 2016
    Number of Items: 8

    Nike Romaleos 2 @ $189 = $378
    Chocolate Chips 5 @ $3 = $15
    Powerbeats 2 Headphones 1 @ $128 = $128

    Total: $521


Ex. of PrintDescriptions() output:

    John Doe's Shopping Cart - February 1, 2016

    Item Descriptions
    Nike Romaleos: Volt color, Weightlifting shoes
    Chocolate Chips: Semi-sweet
    Powerbeats 2 Headphones: Bluetooth headphones


(3) In main(), prompt the user for a customer's name and today's date. Output the name and date. Create an object of type ShoppingCart. (1 pt)

Ex:

    Enter customer's name:
    John Doe
    Enter today's date:
    February 1, 2016

    Customer name: John Doe
    Today's date: February 1, 2016


(4) Implement the PrintMenu() function in main.cpp to print the following menu of options to manipulate the shopping cart. (1 pt)

Ex:

    MENU
    a - Add item to cart
    d - Remove item from cart
    c - Change item quantity
    i - Output items' descriptions
    o - Output shopping cart
    q - Quit


(5) Implement the ExecuteMenu() function in main.cpp that takes 2 parameters: a character representing the user's choice and the reference of a shopping cart. ExecuteMenu() performs the menu options described below, according to the user's choice. (1 pt)


(6) In main(), call PrintMenu() and prompt for the user's choice of menu options. Each option is represented by a single character.

If an invalid character is entered, continue to prompt for a valid choice. When a valid option is entered, execute the option by calling ExecuteMenu(). Then, print the menu and prompt for a new option. Continue until the user enters 'q'. Hint: Implement Quit before implementing other options. (1 pt)

Ex:

    MENU
    a - Add item to cart
    d - Remove item from cart
    c - Change item quantity
    i - Output items' descriptions
    o - Output shopping cart
    q - Quit

    Choose an option:


(7) Implement Output shopping cart menu option in ExecuteMenu(). (3 pts)

Ex:

    OUTPUT SHOPPING CART
    John Doe's Shopping Cart - February 1, 2016
    Number of Items: 8

    Nike Romaleos 2 @ $189 = $378
    Chocolate Chips 5 @ $3 = $15
    Powerbeats 2 Headphones 1 @ $128 = $128

    Total: $521


(8) Implement Output item's description menu option in ExecuteMenu(). (2 pts)

Ex:

    OUTPUT ITEMS' DESCRIPTIONS
    John Doe's Shopping Cart - February 1, 2016

    Item Descriptions
    Nike Romaleos: Volt color, Weightlifting shoes
    Chocolate Chips: Semi-sweet
    Powerbeats 2 Headphones: Bluetooth headphones


(9) Implement Add item to cart menu option in ExecuteMenu(). (3 pts)

Ex:

    ADD ITEM TO CART
    Enter the item name:
    Nike Romaleos
    Enter the item description:
    Volt color, Weightlifting shoes
    Enter the item price:
    189
    Enter the item quantity:
    2


(10) Implement remove item menu option in ExecuteMenu(). (4 pts)

Ex:

    REMOVE ITEM FROM CART
    Enter name of item to remove:
    Chocolate Chips


(11) Implement Change item quantity menu option in ExecuteMenu(). Hint: Make new ItemToPurchase object and use ItemToPurchase modifiers before using ModifyItem() function. (5 pts)

Ex:

    CHANGE ITEM QUANTITY
    Enter the item name:
    Nike Romaleos
    Enter the new quantity:
    3
