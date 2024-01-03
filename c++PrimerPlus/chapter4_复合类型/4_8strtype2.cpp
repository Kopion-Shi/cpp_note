/*
 * @Author: stoner carl3633524461@outlook.com
 * @Date: 2024-01-03 20:32:44
 * @LastEditors: stoner carl3633524461@outlook.com
 * @LastEditTime: 2024-01-03 20:45:39
 * @FilePath: /cpp_note/c++PrimerPlus/chapter4_复合类型/4_8strtype2.cpp
 */
#include "iostream"
#include "string"

int main() {
    using namespace std;

    string s1="penguin";
    string s2,s3;
    cout << "You can assign one string object to anther: s2 =s1" << endl;
    s2=s1;
    cout << "s1: "<<s1<<", s2: "<<s2 << endl;
    cout<<"You can assign a C-style string to a string object."<<endl;
    cout<<"s2 = \"buzzard\"\n";
    s2="buzzard";
    cout<<"s2 :"<<s2<<"\n";
    cout<<"You can concatenate strings: s3=s2+s1."<<endl;
    s3=s2+s1;
    cout<<"s3 :"<<s3<<"\n";
    cout<<"You can append strings"<<endl;
    s2+="for a day";
    cout<<"s2+= \"for a day \" yeields sw2 = "<<s2<<endl;
    return 0;
}