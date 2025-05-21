#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Line : public Shape {
public:
    void draw() override {
        cout << "Line" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Rectangle" << endl;
    }
};

class GraphicEditor {
    Shape* shapes[100];
    int count;
public:
    GraphicEditor() { count = 0; }

    void insertItem(int type) {
        if (count >= 100) return;
        if (type == 1) shapes[count++] = new Line();
        else if (type == 2) shapes[count++] = new Circle();
        else if (type == 3) shapes[count++] = new Rectangle();
    }

    void deleteItem(int index) {
        if (index < 1 || index > count) {
            cout << "������ �����ϴ�!" << endl;
            return;
        }
        delete shapes[index - 1];
        for (int i = index - 1; i < count - 1; i++)
            shapes[i] = shapes[i + 1];
        count--;
    }

    void show() {
        for (int i = 0; i < count; i++) {
            cout << i << ": ";
            shapes[i]->draw();
        }
    }

    void run() {
        cout << "�׷��� �������Դϴ�." << endl;
        while (true) {
            int menu, type, index;
            cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
            cin >> menu;
            if (menu == 1) {
                cout << "��:1, ��:2, �簢��:3 >> ";
                cin >> type;
                insertItem(type);
            }
            else if (menu == 2) {
                cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
                cin >> index;
                deleteItem(index);
            }
            else if (menu == 3) {
                show();
            }
            else {
                break;
            }
        }
    }
};

int main() {
    GraphicEditor graphicEditor;
    graphicEditor.run();
    return 0;
}