#include "SanPham.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

SanPham::SanPham(){};
SanPham::SanPham(string maSanPham, string tenSanPham, double giaBan, int soLuong)
    : maSanPham(maSanPham), tenSanPham(tenSanPham), giaBan(giaBan), soLuong(soLuong){};

void SanPham::themSanPham(){
    cout << "Nhap ma san pham: ";
    cin >> maSanPham;
    cout << "Nhap ten san pham: ";
    cin >> tenSanPham;
    cout << "Nhap gia ban: ";
    cin >> giaBan;
    cout << "Nhap so luong: ";
    cin >> soLuong;
    SanPham* sp = new SanPham(maSanPham, tenSanPham, giaBan, soLuong);
    danhSachSanPham.push_back(*sp);
}

void SanPham::xoaSanPham(){
    string maSanPham;
    cout << "Nhap ma san pham can xoa: ";
    cin >> maSanPham;
    for (int i = 0; i < danhSachSanPham.size(); i++){
        if (danhSachSanPham[i].maSanPham == maSanPham){
            danhSachSanPham.erase(danhSachSanPham.begin() + i);
            cout << "Xoa san pham thanh cong!" << endl;
            return;
        }
    }
    cout << "Khong tim thay san pham!" << endl;
}

void SanPham::suaSanPham(){
    string maSanPham;
    cout << "Nhap ma san pham can sua: ";
    cin >> maSanPham;
    for (int i = 0; i < danhSachSanPham.size(); i++){
        if (danhSachSanPham[i].maSanPham == maSanPham){
            cout << "Nhap ten san pham: ";
            cin >> danhSachSanPham[i].tenSanPham;
            cout << "Nhap gia ban: ";
            cin >> danhSachSanPham[i].giaBan;
            cout << "Nhap so luong: ";
            cin >> danhSachSanPham[i].soLuong;
            cout << "Sua san pham thanh cong!" << endl;
            return;
        }
    }
    cout << "Khong tim thay san pham!" << endl;
}

void SanPham::hienThiDanhSachSanPham(){
    for (int i = 0; i < danhSachSanPham.size(); i++){
        cout << "Ma san pham: " << danhSachSanPham[i].maSanPham << endl;
        cout << "Ten san pham: " << danhSachSanPham[i].tenSanPham << endl;
        cout << "Gia ban: " << danhSachSanPham[i].giaBan << endl;
        cout << "So luong: " << danhSachSanPham[i].soLuong << endl;
    }
}

void SanPham::timKiemSanPham(){
    string maSanPham;
    cout << "Nhap ma san pham can tim: ";
    cin >> maSanPham;
    for (int i = 0; i < danhSachSanPham.size(); i++){
        if (danhSachSanPham[i].maSanPham == maSanPham){
            cout << "Ma san pham: " << danhSachSanPham[i].maSanPham << endl;
            cout << "Ten san pham: " << danhSachSanPham[i].tenSanPham << endl;
            cout << "Gia ban: " << danhSachSanPham[i].giaBan << endl;
            cout << "So luong: " << danhSachSanPham[i].soLuong << endl;
            return;
        }
    }
    cout << "Khong tim thay san pham!" << endl;
}