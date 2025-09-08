#include <iostream>
#include <cstring>
using namespace std;

class Bank {
    int accNo;
    char accHolder[50];
    float balance;
public:
    Bank() {
        accNo = -1;  // default invalid
        balance = 0;
    }

    void create(int accNo, char* Holder, float init) {
        this->accNo = accNo;
        strcpy(this->accHolder, Holder);
        this->balance = init;
    }

    int getAccNo() { return accNo; }

    void deposit(float amount) {
        this->balance += amount;
    }

    void withdraw(float amount, char* name) {
        if (strcmp(this->accHolder, name) == 0) {
            if (amount <= this->balance) {
                this->balance -= amount;
                cout << "Withdrawal Successful!\n";
            } else {
                cout << "Insufficient Balance\n";
            }
        } else {
            cout << "Authorization failed!!\n";
        }
    }

    void showDetails() {
        cout << "Account Number: " << this->accNo << "\n";
        cout << "Holder: " << this->accHolder << "\n";
        cout << "Balance: " << this->balance << "\n\n";
    }
};

int main() {
    Bank accounts[100];  // maximum 100 accounts
    int count = 0;       // how many created
    int choice;

    do {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Show Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int accNo;
            char name[50];
            float init;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Holder Name: ";
            cin >> name;
            cout << "Enter Initial Balance: ";
            cin >> init;
            accounts[count].create(accNo, name, init);
            count++;
            cout << "Account Created Successfully!\n";
        } 
        else if (choice == 2) {
            int accNo;
            float amt;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Deposit Amount: ";
            cin >> amt;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (accounts[i].getAccNo() == accNo) {
                    accounts[i].deposit(amt);
                    cout << "Deposit Successful!\n";
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account Not Found!\n";
        } 
        else if (choice == 3) {
            int accNo;
            float amt;
            char name[50];
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Withdraw Amount: ";
            cin >> amt;
            cout << "Enter Account Holder Name: ";
            cin >> name;

            bool found = false;
            for (int i = 0; i < count; i++) {
                if (accounts[i].getAccNo() == accNo) {
                    accounts[i].withdraw(amt, name);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account Not Found!\n";
        } 
        else if (choice == 4) {
            int accNo;
            cout << "Enter Account Number: ";
            cin >> accNo;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (accounts[i].getAccNo() == accNo) {
                    accounts[i].showDetails();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account Not Found!\n";
        } 
        else if (choice == 5) {
            cout << "Exiting... Goodbye!\n";
        } 
        else {
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
