#include <iostream>
#include <queue>

using namespace std;

struct record {
    string name;
    string production;
    string director;
    string realse;
    double rating;
    int total;
    int rented = 0;
    record* next = nullptr;
};

struct customer {
    string name;
    string account;
    queue<string> movie;
    customer* next = nullptr;
};

class movie_rental {
    record* rstart = nullptr;
    customer* cstart = nullptr;

public:
    void add_movie() {
        string name;
        string release;
        record* cptr = rstart;

        bool flag = true;

        cout << "Enter movie name: ";
        cin >> name;
        cout << "Enter release date: ";
        cin >> release;

        while (cptr != nullptr) {
            if (cptr->name == name && cptr->realse == release) {
                cout << "Movie already exists in catalog" << endl;
                cptr->total += 1;
                flag = false;
                break;
            }
            cptr = cptr->next;
        }

        if (flag) {
            record* temp = new record;
            temp->name = name;
            temp->realse = release;
            temp->director = "too lazy to implement";
            temp->production = "too lazy to implement";
            temp->total = 1;
            temp->rating = 0;
            temp->next = rstart;
            rstart = temp;
            cout << "Movie added to catalog" << endl;
        }
    }

    void delete_movie() {
        string name;
        string release;
        record* temp = rstart;
        record* previous = nullptr;

        cout << "Enter movie name: ";
        cin >> name;
        cout << "Enter release date: ";
        cin >> release;

        while (temp != nullptr) {
            if (temp->name == name && temp->realse == release) {
                if (previous != nullptr) {
                    previous->next = temp->next;
                } else {
                    rstart = temp->next;
                }
                delete temp;
                cout << "Movie deleted from catalog" << endl;
                return;
            }
            previous = temp;
            temp = temp->next;
        }

        cout << "Movie not found in catalog" << endl;
    }

    void display() {
        record* temp = rstart;
        cout << "Catalog:" << endl;
        while (temp != nullptr) {
            cout << "Name: " << temp->name << ", Release Date: " << temp->realse << ", Total Copies: " << temp->total << endl;
            temp = temp->next;
        }
    }

    void rent() {
        string name;
        string account;
        string mov;
        string release;

        customer* cptr = cstart;
        record* cptr2 = rstart;

        bool flag = true;

        cout << "Enter name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> account;
        cout << "Enter movie name: ";
        cin >> mov;
        cout << "Enter release date: ";
        cin >> release;

        while (cptr != nullptr) {
            if (cptr->account == account && cptr->name == name) {
                cptr->movie.push(mov);
                flag = false;
            }
            cptr = cptr->next;
        }

        if (flag) {
            customer* temp = new customer;
            temp->account = account;
            temp->name = name;
            temp->next = cstart;
            cstart = temp;
        }

        while (cptr2 != nullptr) {
            if (cptr2->name == name && cptr2->realse == release) {
                cptr2->rented += 1;
            }
            cptr2 = cptr2->next;
        }
    }

    void available() {
        record* temp = rstart;
        cout << "Available Movies:" << endl;
        while (temp != nullptr) {
            if (temp->rented < temp->total)
                cout << "Name: " << temp->name << ", Release Date: " << temp->realse << endl;
            temp = temp->next;
        }
    }

    void rented() {
        record* temp = rstart;
        cout << "Rented Movies:" << endl;
        while (temp != nullptr) {
            if (temp->rented > 0)
                cout << "Name: " << temp->name << ", Release Date: " << temp->realse << endl;
            temp = temp->next;
        }
    }
};

int main() {
    movie_rental rental;


    rental.add_movie();
    rental.add_movie();
    rental.add_movie();
    rental.add_movie();

    rental.display();


    rental.rent();
    rental.rent();

    rental.available();
    rental.rented();
    rental.delete_movie();
    rental.display();

    return 0;
}
