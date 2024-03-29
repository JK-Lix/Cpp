/*************************************************************************
	> File Name: 272_hz.cpp
	> Author: Lix
	> Mail: 776579471@qq.com
	> URL: https://github.com/JK-Lix
	> Created Time: 2019年06月23日 星期日 14时02分00秒
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Array {
public :
    Array() {
        this->__size = 10;
        this->__cnt = 0;
        this->data = new T[this->__size];
    }
    Array(int n) {
        this->__size = 2 * n;
        this->__cnt = n;
        this->data = new T[this->__size];
    }
    void push_back(const T &a) {
        new(this->data + ((this->__cnt++))) T(a);
    }
    int size() {
        return this->__cnt;
    }
    T &operator[](int ind) {
        return this->data[ind];
    }

private :
    T *data;
    int __size, __cnt;
    
};

int mian() {
    vector<int> arr(10);
    Array<int> arr2(10);

    cout << arr.size() << endl;
    arr.push_back(123);
    cout << arr.size() << endl;

    cout << arr2.size() << endl;
    arr2.push_back(123);
    cout << arr2.size() << endl;
    return 0;
}
