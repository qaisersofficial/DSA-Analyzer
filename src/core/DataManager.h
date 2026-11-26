#ifndef DATAMANAGER_H
#define DATAMANAGER_H

class DataManager {
private:
    int* data;
    int size;

public:
    DataManager();
    ~DataManager();

    void inputManually();
    void generateRandom();
    void generateAscending();
    void generateDescending();
    void display() const;

    int* getData() const;
    int getSize() const;
};

#endif // DATAMANAGER_H
