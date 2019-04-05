//
// Created by rudri on 3/29/2019.
//

#include "iostream"
#include "Vector.h"

UTEC::vector::vector() {

}

void UTEC::vector::push_back(const int &value) {
    if (_size==0){
        _arr = new int[1];
        _arr[0]=value;
        _size++;
    }
    else{
        int aux[_size];
        for (int i=0; i<_size; i++){
            aux[i]=_arr[i];
        }

        delete[] _arr;

        _size++;

        _arr = new int[_size];

        for (int i=0; i<_size-1; i++){
            _arr[i]=aux[i];
        }
        _arr[_size-1]=value;

    }
}

void UTEC::vector::pop_back() {
    if (_size>1){
        int aux[_size];
        for (int i=0; i<_size; i++){
            aux[i]=_arr[i];
        }

        delete[] _arr;

        _size=_size-1;

        _arr = new int[_size];

        for (int i=0; i<_size; i++){
            _arr[i]=aux[i];
        }
    }
    else{
        _size=0;
        delete[] _arr;
        _arr=nullptr;
    }
}

void UTEC::vector::insert(int pos, const int &value) {

    int aux[_size];
    for (int i=0; i<_size; i++){
        aux[i]=_arr[i];
    }

    delete[] _arr;

    _size++;

    _arr = new int[_size];

    int d;

    for (int i=0; i<_size-1; i++){
        if (i!=pos) {
            _arr[i+d] = aux[i];
        }else{
            d++;
            _arr[i] = value;
        }
    }


}

int UTEC::vector::get_item(int i) {
    return _arr[i];
}

int UTEC::vector::size() {
    return _size;
}

UTEC::vector::~vector() {

}
