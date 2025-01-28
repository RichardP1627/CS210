#include <iostream>
#include <string>

using namespace std;
class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y):brand(b), model(m), year(y) {

    }

    void setBrand(string b) {
        brand = b;
    }
    void setModel(string m) {
        model = m;
    }
    void setYear(int y) {
        year = y;
    }
    string getBrand() {
        return brand;
    }
    string getModel() {
        return model;
    }
    int getYear() {
        return year;
    }

    void displayCarDetails() {
        cout << "Car details:" << brand << " " << model << " " << year << endl;
    }
};

int main() {

    Car car1("xyz", "abc", 1998);
    car1.displayCarDetails();
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.