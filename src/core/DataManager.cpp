#include "DataManager.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

DataManager::DataManager() : data(nullptr), size(0) {}

DataManager::~DataManager() {
    delete[] data;
}

void DataManager::inputManually() {
    cout << "Enter the size of the array: ";
    int newSize;
    if (!(cin >> newSize) || newSize <= 0) {
        cout << "Invalid size. Please enter a positive integer." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return;
    }

    // Clean up old data if any
    delete[] data;
    size = newSize;
    data = new int[size];

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element [" << i << "]: ";
        while (!(cin >> data[i]) || data[i] < 0) { // Assuming non-negative for simplicity
             cout << "Invalid input. Please enter a non-negative integer: ";
             cin.clear();
             cin.ignore(1000, '\n');
        }
    }
}

void DataManager::generateRandom() {
    cout << "Enter the size of the array: ";
    int newSize;
    if (!(cin >> newSize) || newSize <= 0) {
        cout << "Invalid size. Please enter a positive integer." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return;
    }

    delete[] data;
    size = newSize;
    data = new int[size];

    srand(static_cast<unsigned int>(time(0)));

    cout << "Generating " << size << " random integers..." << endl;
    for (int i = 0; i < size; ++i) {
        data[i] = rand() % 100; // Random numbers between 0 and 99
    }
}

void DataManager::generateAscending() {
    cout << "Enter the size of the array: ";
    int newSize;
    if (!(cin >> newSize) || newSize <= 0) {
        cout << "Invalid size. Please enter a positive integer." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return;
    }

    delete[] data;
    size = newSize;
    data = new int[size];

    cout << "Generating " << size << " ascending integers..." << endl;
    int currentVal = 0;
    for (int i = 0; i < size; ++i) {
        data[i] = currentVal;
        currentVal += (rand() % 10) + 1; // Increment by 1-10 to ensure strictly ascending or just use +1
    }
}

void DataManager::generateDescending() {
    cout << "Enter the size of the array: ";
    int newSize;
    if (!(cin >> newSize) || newSize <= 0) {
        cout << "Invalid size. Please enter a positive integer." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return;
    }

    delete[] data;
    size = newSize;
    data = new int[size];

    cout << "Generating " << size << " descending integers..." << endl;
    int currentVal = 100;
    for (int i = 0; i < size; ++i) {
        data[i] = currentVal;
        currentVal -= (rand() % 10) + 1;
        if (currentVal < 0) currentVal = 0; // Prevent negative for simple demo
    }
}

void DataManager::display() const {
    if (data == nullptr || size == 0) {
        cout << "Array is empty." << endl;
        return;
    }

    cout << "Array elements: [ ";
    for (int i = 0; i < size; ++i) {
        cout << data[i] << (i == size - 1 ? "" : ", ");
    }
    cout << " ]" << endl;
}

int* DataManager::getData() const {
    return data;
}

int DataManager::getSize() const {
    return size;
}
