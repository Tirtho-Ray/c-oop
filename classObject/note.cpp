#include <iostream>
using namespace std;





//  ------>
// note
// Inside a class we can have two major things.
//1:Data member
//2: Data fuction




// define class  for student 
// class student {
//     public:   // this is public access modifier   // call it data member
//         string name;
//         int age ;
//         int roll ;

//     void data()  // This is method  : method is in class    // call it data fuction
//     {
//         cout << name  << " Name is \n " << endl;
//         cout << roll << "Roll is " << endl;
//         cout << age  <<"Age is :" << endl;
//     };
// };
// ------------------> main function
// int main  () {
     
//         student s1;  // here [student] is  object and s1 is name 
//         s1.name = " Tarx"; // class data access use .
//         s1.roll = 10;
//         s1.age = 20;

//         s1.data(); // cal the method 
// };





// ================> extra example with CAR

//              Car Class
//                  │
//        ┌─────────┴─────────┐
//        ↓                   ↓
//     car1                  car2
//      │                     │
//  brand = Toyota        brand = BMW
//  speed = 100           speed = 150
//      │                     │
//  drive()               drive()

// class Car
// {
// public:
//     string brand;
//     int speed;

//     void drive()
//     {
//         cout << brand << " is driving at "
//              << speed << " km/h" << endl;
//     }
// };

// int main()
// {
//     Car car1;
//     Car car2;

//     car1.brand = "Toyota";
//     car1.speed = 100;

//     car2.brand = "BMW";
//     car2.speed = 150;

//     car1.drive();
//     car2.drive();

//     return 0;
// }




//############### --------> Access modifier 

// public - private - projected 

/*
class {
    public bank :
       string bank_account;
       int balance ;

    int main () {
        bank b1;
        b1.balance
    }
}
*/



// private 
// class BankAccount
// {
// private:
//     double balance;

// public:

//     void deposit(double amount)
//     {
//         balance = balance + amount;
//     }

//     double getBalance()
//     {
//         return balance;
//     }

//     void deposit(double amount)
// {
//     if (amount > 0)
//     {
//         balance += amount;
//     }
// }
// };



// ##### ------> Better constructor 

// --->
// Product(string name, double price)
// {
//     object's name = parameter's name
//     this->name = name;
//     this->price = price;
// }

//--> best 

// class Product {
//     private:
//         string name ;
//         int price ;
    
//     public:
//         Product(string name, int price ): name(name), price(price){

//         }
// };


// Example  -------->
// class BankAccount
// {
// private:
//     string owner;
//     double balance;

// public:

//     BankAccount(string owner, double balance)
//         : owner(owner),
//           balance(balance)
//     {
//     }

//     void deposit(double amount)
//     {
//         if (amount > 0)
//         {
//             this->balance += amount;
//         }
//     }

//     void show()
//     {
//         cout << "Owner: " << this->owner << endl;
//         cout << "Balance: " << this->balance << endl;
//     }
// };

// int main()
// {
//     BankAccount account("Tirtho", 5000);

//     account.deposit(2000);
//     account.show();

//     return 0;
// }





// ---------------------------------------------------------------------
// Constructor + Destructor Together  

// Destructor is clen up object clean up 

// example

// 1:Destructor is used to free memory."
// 2:A destructor is for cleanup of resources owned by an object.
// 3:its has not return type
// class ServerConnection {
//     public: 
//         ServerConnection () {
//             cout <<"connecting server " << endl;
//         };

//         // this is Destructor to clean it   // symbol use ~
//         ~ServerConnection () {
//             cout <<" Server disconnect ..... " << endl ;

//         };

//         void sendrequest() {
//             cout << "sending request -------" << endl ;
//         };
// };

// int main () {
//     ServerConnection connect;
//     connect.sendrequest();
//     return 0;
// }

// Constructor
//     ↓
// Initialize

// Object Lifetime
//     ↓
// Use

// Destructor
//     ↓
// Cleanup

// ┌───────────────────────┐
// │ Object created        │
// │       ↓               │
// │ Constructor           │
// │       ↓               │
// │ Object is alive       │
// │       ↓               │
// │ Object used           │
// │       ↓               │
// │ Lifetime ends         │
// │       ↓               │
// │ Destructor            │
// │       ↓               │
// │ Cleanup               │
// └───────────────────────┘


//------------------==--------------------------==------------------------==------------------------==>











    


