// Restaurant Management System (RMS) - Single File C++
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    const int TOTAL_ITEMS = 100;
    const int TOTAL_ORDERS = 200;
    int menuCount = 0, orderCount = 0, historyIndex = 0, waiterHistoryIndex = 0;

    string itemNameArray[TOTAL_ITEMS], categoryArray[TOTAL_ITEMS];
    int priceArray[TOTAL_ITEMS], quantityArray[TOTAL_ITEMS];
    char availableArray[TOTAL_ITEMS];

    int orderTableArray[TOTAL_ORDERS], orderQtyArray[TOTAL_ORDERS], orderPriceArray[TOTAL_ORDERS];
    string orderItemArray[TOTAL_ORDERS], orderStatusArray[TOTAL_ORDERS], orderTimeArray[TOTAL_ORDERS];

    string historyArray[6], waiterHistoryArray[6];
    for (int i = 0; i < 6; i++)
    {
        historyArray[i] = "";
        waiterHistoryArray[i] = "";
    }

    // Pre-populate 5 sample menu items
    itemNameArray[0] = "Chicken Biryani";
    categoryArray[0] = "Main Course";
    priceArray[0] = 450;
    quantityArray[0] = 50;
    availableArray[0] = 'Y';
    itemNameArray[1] = "Seekh Kebab Platter";
    categoryArray[1] = "Starters";
    priceArray[1] = 350;
    quantityArray[1] = 30;
    availableArray[1] = 'Y';
    itemNameArray[2] = "Gulab Jamun";
    categoryArray[2] = "Desserts";
    priceArray[2] = 150;
    quantityArray[2] = 60;
    availableArray[2] = 'Y';
    itemNameArray[3] = "Mango Lassi";
    categoryArray[3] = "Beverages";
    priceArray[3] = 200;
    quantityArray[3] = 40;
    availableArray[3] = 'Y';
    itemNameArray[4] = "Zinger Burger";
    categoryArray[4] = "Fast Food";
    priceArray[4] = 550;
    quantityArray[4] = 25;
    availableArray[4] = 'Y';
    menuCount = 5;

    char userOption;
    while (true)
    {
        system("cls");
        cout << "==========================================" << endl;
        cout << "||   RESTAURANT MANAGEMENT SYSTEM (RMS)||" << endl;
        cout << "==========================================" << endl;
        cout << "||  1. Admin Login                     ||" << endl;
        cout << "||  2. Waiter Login                    ||" << endl;
        cout << "||  3. Exit Application                ||" << endl;
        cout << "==========================================" << endl;
        cout << "  Choice: ";
        cin >> userOption;
        cin.ignore();

        if (userOption == '3')
        {
            system("cls");
            cout << "  Thank you for using RMS. Goodbye!" << endl;
            getch();
            break;
        }

        // ---- ADMIN LOGIN ----
        if (userOption == '1')
        {
            string u, p;
            bool ok = false;
            for (int attempt = 1; attempt <= 3; attempt++)
            {
                system("cls");
                cout << "==========================================\n||           ADMIN LOGIN             ||\n==========================================\n";
                cout << "  Attempt " << attempt << "/3\n  Username: ";
                getline(cin, u);
                cout << "  Password: ";
                getline(cin, p);
                if (u == "admin" && p == "rms123")
                {
                    ok = true;
                    break;
                }
                cout << "  Invalid credentials!\n";
                getch();
            }
            if (!ok)
            {
                system("cls");
                cout << "  ACCOUNT LOCKED. Returning to Main Menu...\n";
                getch();
                continue;
            }

            char adminOption;
            while (true)
            {
                system("cls");
                cout << "==========================================\n||         ADMIN PANEL - RMS          ||\n==========================================\n";
                cout << "||  1. Add Menu Item                  ||\n||  2. View All Menu Items            ||\n";
                cout << "||  3. Update Menu Item               ||\n||  4. Delete Menu Item               ||\n";
                cout << "||  5. Search Menu Item               ||\n||  6. Generate Sorted Menu List      ||\n";
                cout << "||  7. View All Orders                ||\n||  8. Update Order Status            ||\n";
                cout << "||  9. View Action History            ||\n||  0. Logout                         ||\n";
                cout << "==========================================\n  Choice: ";
                cin >> adminOption;
                cin.ignore();

                if (adminOption == '0')
                {
                    cout << "  Logging out...\n";
                    getch();
                    break;
                }

                // 1. Add Menu Item
                if (adminOption == '1')
                {
                    system("cls");
                    cout << "==========================================\n||           ADD MENU ITEM           ||\n==========================================\n";
                    if (menuCount >= TOTAL_ITEMS)
                    {
                        cout << "  Menu is full!\n";
                        getch();
                    }
                    else
                    {
                        string n, c;
                        int pr, qty;
                        cout << "  Item Name    : ";
                        getline(cin, n);
                        cout << "  Category     : ";
                        getline(cin, c);
                        cout << "  Price (PKR)  : ";
                        cin >> pr;
                        cin.ignore();
                        cout << "  Quantity     : ";
                        cin >> qty;
                        cin.ignore();
                        itemNameArray[menuCount] = n;
                        categoryArray[menuCount] = c;
                        priceArray[menuCount] = pr;
                        quantityArray[menuCount] = qty;
                        availableArray[menuCount] = 'Y';
                        menuCount++;
                        cout << "  Item added successfully!\n";
                        historyArray[historyIndex] = "Added Menu Item: " + n;
                        historyIndex++;
                        if (historyIndex >= 6)
                            historyIndex = 0;
                        getch();
                    }
                }
                // 2. View All Menu Items
                else if (adminOption == '2')
                {
                    system("cls");
                    cout << "==========================================\n||         ALL MENU ITEMS            ||\n==========================================\n";
                    if (menuCount == 0)
                    {
                        cout << "  No items found.\n";
                    }
                    else
                    {
                        for (int i = 0; i < menuCount; i++)
                        {
                            cout << "  #" << (i + 1) << " " << itemNameArray[i] << " | " << categoryArray[i]
                                 << " | PKR " << priceArray[i] << " | Qty: " << quantityArray[i]
                                 << " | Avail: " << availableArray[i] << endl;
                        }
                    }
                    historyArray[historyIndex] = "Viewed All Menu Items";
                    historyIndex++;
                    if (historyIndex >= 6)
                        historyIndex = 0;
                    getch();
                }
                // 3. Update Menu Item
                else if (adminOption == '3')
                {
                    system("cls");
                    cout << "==========================================\n||         UPDATE MENU ITEM          ||\n==========================================\n";
                    if (menuCount == 0)
                    {
                        cout << "  No items to update.\n";
                        getch();
                    }
                    else
                    {
                        int num;
                        cout << "  Enter item number (1 to " << menuCount << "): ";
                        cin >> num;
                        cin.ignore();
                        if (num < 1 || num > menuCount)
                        {
                            cout << "  Wrong Input! Please Try Again\n";
                            getch();
                        }
                        else
                        {
                            int pos = num - 1;
                            cout << "  Current: " << itemNameArray[pos] << " | " << categoryArray[pos]
                                 << " | PKR " << priceArray[pos] << " | Qty: " << quantityArray[pos] << endl;
                            string n, c;
                            int pr, qty;
                            cout << "  New Name     : ";
                            getline(cin, n);
                            cout << "  New Category : ";
                            getline(cin, c);
                            cout << "  New Price    : ";
                            cin >> pr;
                            cin.ignore();
                            cout << "  New Quantity : ";
                            cin >> qty;
                            cin.ignore();
                            itemNameArray[pos] = n;
                            categoryArray[pos] = c;
                            priceArray[pos] = pr;
                            quantityArray[pos] = qty;
                            cout << "  Updated successfully!\n";
                            historyArray[historyIndex] = "Updated Menu Item: " + n;
                            historyIndex++;
                            if (historyIndex >= 6)
                                historyIndex = 0;
                            getch();
                        }
                    }
                }
                // 4. Delete Menu Item
                else if (adminOption == '4')
                {
                    system("cls");
                    cout << "==========================================\n||         DELETE MENU ITEM          ||\n==========================================\n";
                    if (menuCount == 0)
                    {
                        cout << "  No items to delete.\n";
                        getch();
                    }
                    else
                    {
                        int num;
                        cout << "  Enter item number (1 to " << menuCount << "): ";
                        cin >> num;
                        cin.ignore();
                        if (num < 1 || num > menuCount)
                        {
                            cout << "  Wrong Input! Please Try Again\n";
                            getch();
                        }
                        else
                        {
                            int pos = num - 1;
                            string deleted = itemNameArray[pos];
                            for (int i = pos; i < menuCount - 1; i++)
                            {
                                itemNameArray[i] = itemNameArray[i + 1];
                                categoryArray[i] = categoryArray[i + 1];
                                priceArray[i] = priceArray[i + 1];
                                quantityArray[i] = quantityArray[i + 1];
                                availableArray[i] = availableArray[i + 1];
                            }
                            menuCount--;
                            cout << "  Item deleted successfully!\n";
                            historyArray[historyIndex] = "Deleted Menu Item: " + deleted;
                            historyIndex++;
                            if (historyIndex >= 6)
                                historyIndex = 0;
                            getch();
                        }
                    }
                }
                // 5. Search Menu Item
                else if (adminOption == '5')
                {
                    system("cls");
                    cout << "==========================================\n||         SEARCH MENU ITEM          ||\n==========================================\n";
                    char sOpt;
                    cout << "  1. By Name  2. By Category\n  Choice: ";
                    cin >> sOpt;
                    cin.ignore();
                    string term;
                    int foundIndex = -1;
                    if (sOpt == '1')
                    {
                        cout << "  Enter name: ";
                        getline(cin, term);
                    }
                    else if (sOpt == '2')
                    {
                        cout << "  Enter category: ";
                        getline(cin, term);
                    }
                    else
                    {
                        cout << "  Wrong Input! Please Try Again\n";
                        getch();
                    }
                    if (sOpt == '1' || sOpt == '2')
                    {
                        bool any = false;
                        for (int i = 0; i < menuCount; i++)
                        {
                            bool match = (sOpt == '1') ? (itemNameArray[i] == term) : (categoryArray[i] == term);
                            if (match)
                            {
                                any = true;
                                foundIndex = i;
                                cout << "  #" << (i + 1) << " " << itemNameArray[i] << " | " << categoryArray[i]
                                     << " | PKR " << priceArray[i] << " | Qty: " << quantityArray[i]
                                     << " | Avail: " << availableArray[i] << endl;
                            }
                        }
                        if (!any)
                            cout << "  Not found.\n";
                        historyArray[historyIndex] = "Searched Menu Item";
                        historyIndex++;
                        if (historyIndex >= 6)
                            historyIndex = 0;
                        getch();
                    }
                }
                // 6. Sorted Menu List
                else if (adminOption == '6')
                {
                    system("cls");
                    cout << "==========================================\n||       SORTED MENU LIST            ||\n==========================================\n";
                    char sOpt;
                    cout << "  Sort by: 1.Name  2.Price  3.Category\n  Choice: ";
                    cin >> sOpt;
                    cin.ignore();
                    if (sOpt == '1' || sOpt == '2' || sOpt == '3')
                    {
                        // Bubble sort — nested for loops, swap all arrays
                        for (int i = 0; i < menuCount - 1; i++)
                        {
                            for (int j = 0; j < menuCount - i - 1; j++)
                            {
                                bool doSwap = false;
                                if (sOpt == '1' && itemNameArray[j] > itemNameArray[j + 1])
                                    doSwap = true;
                                if (sOpt == '2' && priceArray[j] > priceArray[j + 1])
                                    doSwap = true;
                                if (sOpt == '3' && categoryArray[j] > categoryArray[j + 1])
                                    doSwap = true;
                                if (doSwap)
                                {
                                    string ts;
                                    int ti;
                                    char tc;
                                    ts = itemNameArray[j];
                                    itemNameArray[j] = itemNameArray[j + 1];
                                    itemNameArray[j + 1] = ts;
                                    ts = categoryArray[j];
                                    categoryArray[j] = categoryArray[j + 1];
                                    categoryArray[j + 1] = ts;
                                    ti = priceArray[j];
                                    priceArray[j] = priceArray[j + 1];
                                    priceArray[j + 1] = ti;
                                    ti = quantityArray[j];
                                    quantityArray[j] = quantityArray[j + 1];
                                    quantityArray[j + 1] = ti;
                                    tc = availableArray[j];
                                    availableArray[j] = availableArray[j + 1];
                                    availableArray[j + 1] = tc;
                                }
                            }
                        }
                        for (int i = 0; i < menuCount; i++)
                            cout << "  #" << (i + 1) << " " << itemNameArray[i] << " | " << categoryArray[i]
                                 << " | PKR " << priceArray[i] << " | Qty: " << quantityArray[i] << endl;
                        historyArray[historyIndex] = "Generated Sorted Menu List";
                        historyIndex++;
                        if (historyIndex >= 6)
                            historyIndex = 0;
                        getch();
                    }
                    else
                    {
                        cout << "  Wrong Input! Please Try Again\n";
                        getch();
                    }
                }
                // 7. View All Orders
                else if (adminOption == '7')
                {
                    system("cls");
                    cout << "==========================================\n||           ALL ORDERS              ||\n==========================================\n";
                    if (orderCount == 0)
                    {
                        cout << "  No orders placed yet.\n";
                    }
                    else
                    {
                        int grandTotal = 0;
                        for (int i = 0; i < orderCount; i++)
                        {
                            int lineTotal = orderQtyArray[i] * orderPriceArray[i];
                            cout << "  Order#" << (i + 1) << " | Table:" << orderTableArray[i]
                                 << " | " << orderItemArray[i] << " | Qty:" << orderQtyArray[i]
                                 << " | PKR " << orderPriceArray[i] << " | Total:" << lineTotal
                                 << " | " << orderStatusArray[i] << " | " << orderTimeArray[i] << endl;
                            grandTotal += lineTotal;
                        }
                        cout << "  ------------------------------------------\n";
                        cout << "  Total of All Orders: PKR " << grandTotal << endl;
                    }
                    historyArray[historyIndex] = "Viewed All Orders";
                    historyIndex++;
                    if (historyIndex >= 6)
                        historyIndex = 0;
                    getch();
                }
                // 8. Update Order Status
                else if (adminOption == '8')
                {
                    system("cls");
                    cout << "==========================================\n||        UPDATE ORDER STATUS        ||\n==========================================\n";
                    if (orderCount == 0)
                    {
                        cout << "  No orders to update.\n";
                        getch();
                    }
                    else
                    {
                        int num;
                        cout << "  Enter order number (1 to " << orderCount << "): ";
                        cin >> num;
                        cin.ignore();
                        if (num < 1 || num > orderCount)
                        {
                            cout << "  Wrong Input! Please Try Again\n";
                            getch();
                        }
                        else
                        {
                            int pos = num - 1;
                            cout << "  Current Status: " << orderStatusArray[pos] << endl;
                            char stOpt;
                            cout << "  1.Pending  2.Preparing  3.Served\n  Choice: ";
                            cin >> stOpt;
                            cin.ignore();
                            if (stOpt == '1')
                                orderStatusArray[pos] = "Pending";
                            else if (stOpt == '2')
                                orderStatusArray[pos] = "Preparing";
                            else if (stOpt == '3')
                                orderStatusArray[pos] = "Served";
                            else
                            {
                                cout << "  Wrong Input! Please Try Again\n";
                                getch();
                            }
                            if (stOpt == '1' || stOpt == '2' || stOpt == '3')
                            {
                                cout << "  Status updated to: " << orderStatusArray[pos] << endl;
                                historyArray[historyIndex] = "Updated Order Status";
                                historyIndex++;
                                if (historyIndex >= 6)
                                    historyIndex = 0;
                                getch();
                            }
                        }
                    }
                }
                // 9. View Action History
                else if (adminOption == '9')
                {
                    system("cls");
                    cout << "==========================================\n||        ADMIN ACTION HISTORY       ||\n==========================================\n";
                    bool any = false;
                    for (int i = 0; i < 6; i++)
                    {
                        if (historyArray[i] != "")
                        {
                            any = true;
                            cout << "  [" << (i + 1) << "] " << historyArray[i] << endl;
                        }
                    }
                    if (!any)
                        cout << "  No actions recorded yet.\n";
                    getch();
                }
                else
                {
                    cout << "  Wrong Input! Please Try Again\n";
                    getch();
                }
            }
        }

        // ---- WAITER LOGIN ----
        else if (userOption == '2')
        {
            string u, p;
            bool ok = false;
            for (int attempt = 1; attempt <= 3; attempt++)
            {
                system("cls");
                cout << "==========================================\n||           WAITER LOGIN            ||\n==========================================\n";
                cout << "  Attempt " << attempt << "/3\n  Username: ";
                getline(cin, u);
                cout << "  Password: ";
                getline(cin, p);
                if (u == "waiter" && p == "w123")
                {
                    ok = true;
                    break;
                }
                cout << "  Invalid credentials!\n";
                getch();
            }
            if (!ok)
            {
                system("cls");
                cout << "  ACCOUNT LOCKED. Returning to Main Menu...\n";
                getch();
                continue;
            }

            char waiterOption;
            while (true)
            {
                system("cls");
                cout << "==========================================\n||        WAITER PANEL - RMS         ||\n==========================================\n";
                cout << "||  1. Place New Order                ||\n||  2. View My Table Orders           ||\n";
                cout << "||  3. View Full Menu                 ||\n||  4. Generate Bill for Table        ||\n";
                cout << "||  5. Update Order Status            ||\n||  6. Search Order by Table          ||\n";
                cout << "||  7. View Today Summary             ||\n||  8. Mark Item Unavailable          ||\n";
                cout << "||  9. View Action History            ||\n||  0. Logout                         ||\n";
                cout << "==========================================\n  Choice: ";
                cin >> waiterOption;
                cin.ignore();

                if (waiterOption == '0')
                {
                    cout << "  Logging out...\n";
                    getch();
                    break;
                }

                // 1. Place New Order
                if (waiterOption == '1')
                {
                    system("cls");
                    cout << "==========================================\n||          PLACE NEW ORDER          ||\n==========================================\n";
                    if (orderCount >= TOTAL_ORDERS)
                    {
                        cout << "  Order list full!\n";
                        getch();
                    }
                    else
                    {
                        int tableNum, qty;
                        string oTime;
                        cout << "  Table Number: ";
                        cin >> tableNum;
                        cin.ignore();
                        cout << "  Order Time  : ";
                        getline(cin, oTime);
                        cout << "\n  Available Menu Items:\n";
                        bool anyAvail = false;
                        for (int i = 0; i < menuCount; i++)
                        {
                            if (availableArray[i] == 'Y')
                            {
                                anyAvail = true;
                                cout << "  #" << (i + 1) << " " << itemNameArray[i] << " | " << categoryArray[i] << " | PKR " << priceArray[i] << endl;
                            }
                        }
                        if (!anyAvail)
                        {
                            cout << "  No items available.\n";
                            getch();
                        }
                        else
                        {
                            int itemNum;
                            cout << "  Enter item number: ";
                            cin >> itemNum;
                            cin.ignore();
                            if (itemNum < 1 || itemNum > menuCount)
                            {
                                cout << "  Wrong Input! Please Try Again\n";
                                getch();
                            }
                            else
                            {
                                cout << "  Quantity: ";
                                cin >> qty;
                                cin.ignore();
                                int pos = itemNum - 1;
                                orderTableArray[orderCount] = tableNum;
                                orderItemArray[orderCount] = itemNameArray[pos];
                                orderQtyArray[orderCount] = qty;
                                orderPriceArray[orderCount] = priceArray[pos];
                                orderStatusArray[orderCount] = "Pending";
                                orderTimeArray[orderCount] = oTime;
                                orderCount++;
                                cout << "  Order placed successfully!\n";
                                waiterHistoryArray[waiterHistoryIndex] = "Placed Order: " + itemNameArray[pos];
                                waiterHistoryIndex++;
                                if (waiterHistoryIndex >= 6)
                                    waiterHistoryIndex = 0;
                                getch();
                            }
                        }
                    }
                }
                // 2. View My Table Orders
                else if (waiterOption == '2')
                {
                    system("cls");
                    cout << "==========================================\n||        VIEW TABLE ORDERS          ||\n==========================================\n";
                    int tableNum;
                    cout << "  Enter table number: ";
                    cin >> tableNum;
                    cin.ignore();
                    bool found = false;
                    for (int i = 0; i < orderCount; i++)
                    {
                        if (orderTableArray[i] == tableNum)
                        {
                            found = true;
                            cout << "  Order#" << (i + 1) << " | " << orderItemArray[i] << " | Qty:" << orderQtyArray[i]
                                 << " | PKR " << orderPriceArray[i] << " | " << orderStatusArray[i] << " | " << orderTimeArray[i] << endl;
                        }
                    }
                    if (!found)
                        cout << "  No orders for this table.\n";
                    waiterHistoryArray[waiterHistoryIndex] = "Viewed Table Orders";
                    waiterHistoryIndex++;
                    if (waiterHistoryIndex >= 6)
                        waiterHistoryIndex = 0;
                    getch();
                }
                // 3. View Full Menu
                else if (waiterOption == '3')
                {
                    system("cls");
                    cout << "==========================================\n||            FULL MENU              ||\n==========================================\n";
                    for (int i = 0; i < menuCount; i++)
                    {
                        if (availableArray[i] == 'Y')
                            cout << "  #" << (i + 1) << " " << itemNameArray[i] << " | " << categoryArray[i] << " | PKR " << priceArray[i] << endl;
                    }
                    waiterHistoryArray[waiterHistoryIndex] = "Viewed Full Menu";
                    waiterHistoryIndex++;
                    if (waiterHistoryIndex >= 6)
                        waiterHistoryIndex = 0;
                    getch();
                }
                // 4. Generate Bill for Table
                else if (waiterOption == '4')
                {
                    system("cls");
                    cout << "==========================================\n||        GENERATE BILL              ||\n==========================================\n";
                    int tableNum;
                    cout << "  Enter table number: ";
                    cin >> tableNum;
                    cin.ignore();
                    bool found = false;
                    int subtotal = 0;
                    cout << "  Item                   | Qty | Unit | Total\n";
                    cout << "  ----------------------------------------\n";
                    for (int i = 0; i < orderCount; i++)
                    {
                        if (orderTableArray[i] == tableNum)
                        {
                            found = true;
                            int lineTotal = orderQtyArray[i] * orderPriceArray[i];
                            subtotal += lineTotal;
                            cout << "  " << orderItemArray[i] << " | " << orderQtyArray[i]
                                 << " | PKR " << orderPriceArray[i] << " | PKR " << lineTotal << endl;
                        }
                    }
                    if (!found)
                    {
                        cout << "  No orders for this table.\n";
                    }
                    else
                    {
                        int tax = subtotal * 10 / 100;
                        int grandTotal = subtotal + tax;
                        cout << "  ----------------------------------------\n";
                        cout << "  Subtotal  : PKR " << subtotal << endl;
                        cout << "  Tax (10%) : PKR " << tax << endl;
                        cout << "  GRAND TOTAL: PKR " << grandTotal << endl;
                    }
                    waiterHistoryArray[waiterHistoryIndex] = "Generated Bill for Table " + to_string(tableNum);
                    waiterHistoryIndex++;
                    if (waiterHistoryIndex >= 6)
                        waiterHistoryIndex = 0;
                    getch();
                }
                // 5. Update Order Status
                else if (waiterOption == '5')
                {
                    system("cls");
                    cout << "==========================================\n||      UPDATE ORDER STATUS          ||\n==========================================\n";
                    if (orderCount == 0)
                    {
                        cout << "  No orders to update.\n";
                        getch();
                    }
                    else
                    {
                        int num;
                        cout << "  Enter order number (1 to " << orderCount << "): ";
                        cin >> num;
                        cin.ignore();
                        if (num < 1 || num > orderCount)
                        {
                            cout << "  Wrong Input! Please Try Again\n";
                            getch();
                        }
                        else
                        {
                            int pos = num - 1;
                            cout << "  Current Status: " << orderStatusArray[pos] << endl;
                            char stOpt;
                            cout << "  1.Pending  2.Preparing  3.Served\n  Choice: ";
                            cin >> stOpt;
                            cin.ignore();
                            if (stOpt == '1')
                                orderStatusArray[pos] = "Pending";
                            else if (stOpt == '2')
                                orderStatusArray[pos] = "Preparing";
                            else if (stOpt == '3')
                                orderStatusArray[pos] = "Served";
                            else
                            {
                                cout << "  Wrong Input! Please Try Again\n";
                                getch();
                            }
                            if (stOpt == '1' || stOpt == '2' || stOpt == '3')
                            {
                                cout << "  Status updated to: " << orderStatusArray[pos] << endl;
                                waiterHistoryArray[waiterHistoryIndex] = "Updated Order Status";
                                waiterHistoryIndex++;
                                if (waiterHistoryIndex >= 6)
                                    waiterHistoryIndex = 0;
                                getch();
                            }
                        }
                    }
                }
                // 6. Search Order by Table
                else if (waiterOption == '6')
                {
                    system("cls");
                    cout << "==========================================\n||       SEARCH ORDER BY TABLE       ||\n==========================================\n";
                    int tableNum;
                    cout << "  Enter table number: ";
                    cin >> tableNum;
                    cin.ignore();
                    bool found = false;
                    for (int i = 0; i < orderCount; i++)
                    {
                        if (orderTableArray[i] == tableNum)
                        {
                            found = true;
                            cout << "  Order#" << (i + 1) << " | " << orderItemArray[i] << " | Qty:" << orderQtyArray[i]
                                 << " | PKR " << orderPriceArray[i] << " | " << orderStatusArray[i] << endl;
                        }
                    }
                    if (!found)
                        cout << "  No orders found for this table.\n";
                    waiterHistoryArray[waiterHistoryIndex] = "Searched Order by Table";
                    waiterHistoryIndex++;
                    if (waiterHistoryIndex >= 6)
                        waiterHistoryIndex = 0;
                    getch();
                }
                // 7. View Today Summary
                else if (waiterOption == '7')
                {
                    system("cls");
                    cout << "==========================================\n||         TODAY'S SUMMARY          ||\n==========================================\n";
                    int servedCount = 0, pendingCount = 0, revenue = 0;
                    for (int i = 0; i < orderCount; i++)
                    {
                        if (orderStatusArray[i] == "Served")
                        {
                            servedCount++;
                            revenue += orderQtyArray[i] * orderPriceArray[i];
                        }
                        if (orderStatusArray[i] == "Pending")
                            pendingCount++;
                    }
                    cout << "  Total Orders   : " << orderCount << endl;
                    cout << "  Served Orders  : " << servedCount << endl;
                    cout << "  Pending Orders : " << pendingCount << endl;
                    cout << "  Total Revenue  : PKR " << revenue << endl;
                    waiterHistoryArray[waiterHistoryIndex] = "Viewed Today Summary";
                    waiterHistoryIndex++;
                    if (waiterHistoryIndex >= 6)
                        waiterHistoryIndex = 0;
                    getch();
                }
                // 8. Mark Item Unavailable (Toggle)
                else if (waiterOption == '8')
                {
                    system("cls");
                    cout << "==========================================\n||      MARK ITEM AVAILABILITY       ||\n==========================================\n";
                    for (int i = 0; i < menuCount; i++)
                        cout << "  #" << (i + 1) << " " << itemNameArray[i] << " | Avail: " << availableArray[i] << endl;
                    int num;
                    cout << "  Enter item number: ";
                    cin >> num;
                    cin.ignore();
                    if (num < 1 || num > menuCount)
                    {
                        cout << "  Wrong Input! Please Try Again\n";
                        getch();
                    }
                    else
                    {
                        int pos = num - 1;
                        if (availableArray[pos] == 'Y')
                            availableArray[pos] = 'N';
                        else
                            availableArray[pos] = 'Y';
                        cout << "  " << itemNameArray[pos] << " is now: " << (availableArray[pos] == 'Y' ? "Available" : "Unavailable") << endl;
                        waiterHistoryArray[waiterHistoryIndex] = "Toggled Item: " + itemNameArray[pos];
                        waiterHistoryIndex++;
                        if (waiterHistoryIndex >= 6)
                            waiterHistoryIndex = 0;
                        getch();
                    }
                }
                // 9. View Action History
                else if (waiterOption == '9')
                {
                    system("cls");
                    cout << "==========================================\n||       WAITER ACTION HISTORY       ||\n==========================================\n";
                    bool any = false;
                    for (int i = 0; i < 6; i++)
                    {
                        if (waiterHistoryArray[i] != "")
                        {
                            any = true;
                            cout << "  [" << (i + 1) << "] " << waiterHistoryArray[i] << endl;
                        }
                    }
                    if (!any)
                        cout << "  No actions recorded yet.\n";
                    getch();
                }
                else
                {
                    cout << "  Wrong Input! Please Try Again\n";
                    getch();
                }
            }
        }
        else
        {
            cout << "  Wrong Input! Please Try Again\n";
            getch();
        }
    }
    return 0;
}