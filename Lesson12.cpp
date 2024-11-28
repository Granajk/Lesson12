

#include <list>
#include <string>
#include <iostream>
#include <algorithm>
#include "DList.h"
using namespace std;
int main()
{
    /*
    //using namespace mylist;
    using namespace mylist;
    //7 4 9 2
    Node<int> first(7);//info = 7 , next = null;
    Node<int> second(4);
    first.next = &second; 
    Node<int> third(9);
    second.next = &third;
    Node<int> fourth(2);
    third.next = &fourth;

    //Обход списка

    Node<int>* p = &first;

    while (p != nullptr) {
        cout << p->info << endl;
        p->showNode();
        p = p->next;
    }
    //MyList<int> a;
    //a.push_back(7);
    //a.push_back(4);
    //a.push_back(9);
    //a.push_back(2);

    //a.showList();

    //DList<int> b;

    //b.push_back(7);
    //b.push_back(4);
    //b.push_back(9);
    //b.push_back(2);

    //b.showList();
    //cout << "---------------\n";
    //b.showReverseList();
    //cout << "---------------\n";
    //DNode<int>* user = b.search(2);
    //if (user == nullptr)
    //{
    //    cout << "not found";
    //}
    //else
    //{
    //    user->showNode();
    //}
    */
    /*
    //list<string> p34;
    //p34.push_back("Kyrylo");
    //p34.push_back("Vitaliy");
    //p34.push_back("Vladislav");
    //p34.push_back("ELizaveta");

    //list<string>::iterator p;

    //for (p = p34.begin(); p != p34.end(); p++)
    //{
    //    cout << *p << " ";
    //}cout << endl;

    //cout << "--------------------------------------------+\n";

    //p34.sort();
    //for (auto student : p34)
    //{
    //    cout << student << " ";
    //}cout << endl;

    */

    //list<int> num;
    //for (int i = 0; i < 10; i++)
    //{
    //    num.push_back(rand() % 10 - 5);
    //}
    //for (auto nums : num)
    //{
    //    cout << nums << " ";
    //}cout << endl;
    //

    //auto a = max_element(num.begin(), num.end());
    //cout << "Max: " << *a << endl;

    //for (auto& nums : num)
    //{
    //  /*  if (nums < 0)
    //    {
    //        nums = 0;
    //    }*/
    //    
    //}
    /*replace_if(num.begin(), num.end(), [](int a) {return a < 0; },0);*/
 /*   for (auto nums : num)
    {
        cout << nums << " ";
    }cout << endl;*/


    //for_each(num.begin(), num.end(), [a](int& el) {
    //    el += *a; });
    //for (auto nums : num)
    //{
    //    cout << nums << " ";
    //}cout << endl;


    //int numbers = 0;
    //cout << "\nEnter num: "; 
    //cin >> numbers;
    //auto user = find_if(num.begin(), num.end(), [numbers](int& t) {
    //    return t == numbers; });
    //if (user == num.end()) {
    //    cout << "!-Not Found-!\n";
    //}
    //else
    //{
    //    num.erase(user);
    //}
    //for (auto nums : num)
    //{
    //    cout << nums << " ";
    //}cout << endl;
    //int newnum;
    //cout << "\nEnter num: ";
    //cin >> newnum;
    //auto user2 = find_if(num.begin(), num.end(), [newnum](int t) {
    //    return t == newnum; });
    //if (user2 == num.end()) {
    //    cout << "!-Not Found-!\n";
    //}
    //else
    //{
    //    user2++;
    //    num.insert(user2,777);
    //}
    //for (auto nums : num)
    //{
    //    cout << nums << " ";
    //}cout << endl;


    DList<int> list;
    cout << "PB+-----------------------------------+\n";
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.showList();
    cout << "IB+-----------------------------------+\n";
    list.insertBefore(3, 2);
    list.showList();
    cout << "IA+-----------------------------------+\n";
    list.insertAfter(2, 3);
    list.showList();
    cout << "PF+-----------------------------------+\n";
    list.push_front(2);
    list.showList();
    cout << "Er+-----------------------------------+\n";
    list.erase(1);
    list.showList();
    cout << "~DList+-------------------------------+\n";
}

