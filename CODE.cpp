#include <iostream>
#include <stdio.h>
#include <string.h>
struct bank {
  long acc_num;
  char name[50];
  long balance;
  int internet_availed;
  int pincode;
  int acc_type;
} p[10];
int main() {
  int i,t;
    std::cout<<"Enter total number of user:";
    std::cin>>t;
  std::cout << "Welcome online bank services\n";
  for (i = 1; i <= t; i++) {
    std::cout << "\nEnter your account number:";
      
    std::cin >> p[i].acc_num;
    std::cout << "\nEnter your name:";
    std::cin >> p[i].name;
    std::cout << "\nEnter balance:";
    std::cin >> p[i].balance;
    std::cout << "\nEnter if you have availed internet services of not(1 for "
                 "yes/0 for no):";
    std::cin >> p[i].internet_availed;
    std::cout << "\nEnter pincode";
    std::cin >> p[i].pincode;
  }
  int n;
  std::cout
      << "\nEnter which account holders information you want to access(1/2/3):";
  std::cin >> n;
  switch (i = n) {
  case 1:
    std::cout << "\nYour account number:" << p[i].acc_num << std::endl;
    std::cout << "Name linked with your account is:" << p[i].name << std::endl;
    std::cout << "Current available balance in your account is:" << p[i].balance
              << std::endl;
    if (p[i].internet_availed == 1) {
      std::cout << "You have availed the internet services";
    } else {
      std::cout << "You have not availed the internet services";
    }
    std::cout << "\nPincode register with your account number is:"
              << p[i].pincode << std::endl;
    if (p[i].balance >= 1000000) {
      std::cout << "\nYou are GOLDEN CUSTOMER";
    }
    if (p[i].balance <= 1000000 && p[i].balance >= 500000) {
      std::cout << "\nYou are SILVER CUSTOMER";
    }
    if (p[i].balance <= 500000) {
      std::cout << "\nYou are GENERAL CUSTOMER";
    }
    break;
  case 2:
    std::cout << "Your account number" << p[i].acc_num << std::endl;
    std::cout << "Name linked with your account is:" << p[i].name << std::endl;
    std::cout << "Current available balance in your account is:" << p[i].balance
              << std::endl;
    if (p[i].internet_availed == 1) {
      std::cout << "You have availed the internet services";
    } else {
      std::cout << "You have not availed the internet services";
    }
    std::cout << "Pincode register with your account number is:" << p[i].pincode
              << std::endl;
    if (p[i].balance >= 1000000) {
      std::cout << "You are GOLDEN CUSTOMER";
    }
    if (p[i].balance <= 1000000 && p[i].balance >= 500000) {
      std::cout << "You are SILVER CUSTOMER";
    }
    if (p[i].balance <= 500000) {
      std::cout << "You are GENERAL CUSTOMER";
    } else {
      std::cout << "LOW BALANCE";
    }
    break;
  case 3:
    std::cout << "Your account number" << p[i].acc_num << std::endl;
    std::cout << "Name linked with your account is:" << p[i].name << std::endl;
    std::cout << "Current available balance in your account is:" << p[i].balance
              << std::endl;
    if (p[i].internet_availed == 1) {
      std::cout << "You have availed the internet services";
    } else {
      std::cout << "You have not availed the internet services";
    }
    std::cout << "Pincode register with your account number is:" << p[i].pincode
              << std::endl;
    if (p[i].balance >= 1000000) {
      std::cout << "You are GOLDEN CUSTOMER";
    }
    if (p[i].balance <= 1000000 && p[i].balance >= 500000) {
      std::cout << "You are SILVER CUSTOMER";
    }
    if (p[i].balance <= 500000) {
      std::cout << "You are GENERAL CUSTOMER";
    } else {
      std::cout << "LOW BALANCE";
    }
    break;
  default:
    std::cout << "Enter user number is invalid,Please rectify";
    break;
  }
}
