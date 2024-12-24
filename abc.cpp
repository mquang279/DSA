#include <bits/stdc++.h>

using namespace std;

struct Customer {
    string id;
    string name;
    string level;
    Customer* next;

    Customer(string id, string name, string level) {
        this->id = id;
        this->name = name;
        this->level = level;
        this->next = nullptr;
    }
};

void insert(Customer* tail, string id, string name, string level) {
    Customer* newCustomer = new Customer(id, name, level);
    tail.next = newCustomer;
    tail = tail.next;
}

void print(Customer* head) {
    Customer* current = head;
    while (current != nullptr) {
        cout << "ID: " << current->id << ", Name: " << current->name << ", Level: " << current->level << endl;
        current = current->next;
    }
}

void vip(Customer*& head) {
    Customer* current = head;
    Customer* prev = nullptr;

    while (current != nullptr) {
        if (current->level == "VIP") {
            cout << "ID: " << current->id << ", Name: " << current->name << ", Level: " << current->level << endl;
            if (prev == nullptr) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            Customer* temp = current;
            current = current->next;
            delete temp;
        } else {
            prev = current;
            current = current->next;
        }
    }
}

void gold(Customer* head) {
    int countGoldCustomer = 0;
    Customer* current = head;
    while (current != nullptr) {
        if (current->level == "GOLD") {
            countGoldCustomer++;
        }
        current = current->next;
    }
    if (countGoldCustomer == 0) cout << "NO GOLD" << endl;
    else cout << countGoldCustomer << endl;
}

void serve(Customer* head) {
    head = head->next;
}

int main() {
    Customer* head, tail;

    return 0;
}