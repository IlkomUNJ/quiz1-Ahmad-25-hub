#include <iostream>
#include "bank_customer.h"
#include "buyer.h"

enum PrimaryPrompt{LOGIN, REGISTER, EXIT};

using namespace std;

int main() {
    //create a loop prompt 
    PrimaryPrompt prompt = LOGIN;
    while (prompt != EXIT) {
        cout << "Select an option: " << endl;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "3. Exit" << endl;
        int choice;
        cin >> choice;
        prompt = static_cast<PrimaryPrompt>(choice - 1);
        switch (prompt) {
            case LOGIN: {
                cout << "Login selected." << endl;

                bool regpromt = true;
                while(regpromt){
                    cout << "\n=== Buyer Logged In Successfully ===" << endl;
                    cout << "Welcome!" << endl;
                    cout << "select option"<<endl;
                    cout << "1. check account status"<<endl;
                    cout << "2. upgrade account to seller"<<endl;
                    cout << "3. back"<<endl;
                    cin >> choice;

                    if(choice == 3){
                        regpromt = false; 
                    }
                }
            
                /* if Login is selected, based on authority then provide options:
                assume user is logged in as Buyer for now
                1. Chek Account Status (will display if user is Buyer or Seller or both and linked banking account status)
                Will display Buyer, Seller and Banking Account details
                2. Upgrade Account to Seller
                Will prompt user to enter Seller details and create a Seller account linked to Buyer account
                Will reject if a user dont have a banking account linked
                3. Create Banking Account (if not already linked), will be replaced with banking functions
                Must provides: initial deposit amount, Address, Phone number, Email
                Banking functions will provides: Balance checking, Transaction History, Deposit, Withdraw
                4. Browse Store Functionality
                Will display all stores initially
                Need to select a store to browse each store inventory
                Will display all items in the store inventory
                After selecting an item, will display item details and option to add to cart
                After adding to cart, will notify user item is added to cart
                5. Order Functionality
                Will display all items in cart
                Will provide option to remove item from cart
                Will provide option to checkout
                After checkout invoide will be generated (will go to payment functionality)
                6. Payment Functionality
                Will display all listed invoices
                Pick an invoice to pay
                Will display invoice details and total amount
                Will provide option to pay invoice
                Payment is done through confirmation dialogue
                In confirmation dialogue, will display account balance as precursor
                User will need to manually enter invoice id to pay
                After paying balance will be redacted from buyer and added to the responding seller account
                After payment, order status will be changed to paid
                7. Logout (return to main menu)
                Display confirmation dialogue
                If confirmed, return to main menu
                If not, return to Buyer menu
                8. Delete Account (remove both Buyer and Seller account and relevant banking account)
                Display confirmation dialogue
                If confirmed, delete account and return to main menu
                If not, return to Buyer menu
                assume user is logged in as Seller for now
                9. Check Inventory
                10. Add Item to Inventory
                11. Remove Item from Inventory
                12. View Orders (will display all orders placed to this seller
                Only orders with paid status will be listed
                Order details will listing items, quantity, total amount, buyer details, order status (paid, cancelled, completed)
                extra functions
                9. Exit to main Menu
                10. Exit Program
                **/
                break;}
            case REGISTER:{
                bool regpromt = true;
                while(regpromt){
                    cout << "Register selected." << endl;
                    cout << "select option"<<endl;
                    cout << "1. create buyer account"<<endl;
                    cout<< "2. create seller account"<<endl;
                    cout << "3. back"<<endl;
                    int regchoice;
                    cin>>regchoice;
                    if(regchoice == 1){
                        cout<< "create buyer account selected"<<endl;
                        // Input data Buyer
                        int nextBuyerId = 1;
                        string emailBuyer;
                        string namaBuyer;
                        string homeAddres;
                        int phoneNumber;
                        cout << "input your email: "<<endl;
                        cin >> emailBuyer;
                        cin.ignore(); 
                        cout << "input your name: "<<endl;
                        getline(cin, namaBuyer);
                        cout << "input your home address: "<<endl;
                        getline(cin, homeAddres);
                        cout << "input your PhoneNumber: "<<endl;
                        cin>>phoneNumber;
                        cout << "\n=== Bank Account Setup ===" << endl;
                        int bankId;
                        string bankName;
                        double balance;
                        cout << "Enter Bank ID: ";
                        cin >> bankId;
                        cin.ignore();
                        cout << "Enter Bank Account Name: ";
                        getline(cin, bankName);
                        cout << "Enter Initial Balance: ";
                        cin >> balance;

                        // Buat buyer baru

                        cout << "\n=== Buyer Registered Successfully ===" << endl;

                    }else if(regchoice ==2){
                        cout<<"create seller account selected"<<endl;
                    }else if(regchoice==3){
                        cout<<"exiting"<<endl;
                        regpromt = false;
                    }else{
                        cout<<"invalid option"<<endl;
                    }

                }

                /* if register is selected then went throuhh registration process:
                1. Create a new Buyer Account
                Must provides: Name, Home Address, Phone number, Email
                2. Option to create a Seller Account (will be linked to Buyer account)
                Must provides: Store Name, Store Address, Store Phone number, Store Email
                After finished immediately logged in as Buyer/Seller
                */
                break;
            }
        }
        cout << endl;
    }

    //BankCustomer customer1(1, "Alice", 1000.0);
    //Buyer buyer1(1, customer1.getName(), customer1);
    return 1;
}
