/*
 * @Author: stoner carl3633524461@outlook.com
 * @Date: 2024-01-03 21:01:03
 * @LastEditors: stoner carl3633524461@outlook.com
 * @LastEditTime: 2024-01-03 21:16:24
 * @FilePath: /cpp_note/c++PrimerPlus/chapter4_复合类型/4_10strtype4.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "iostream"
#include "string"
#include "cstring"

int main() {
    using namespace std;

    char charr[20]={0};
    string str;
    cout <<"Length of string in charr before input: "<<strlen(charr)<<endl;
    cout <<"Length of string in str before input: "<<str.size()<<endl;


    cout <<"Enter a line of a text: "<<endl;
    cin.getline(charr,20);
    cout <<"you entered: : "<<charr<<endl;

    cout <<"Enter another line of a text: "<<endl;
    getline(cin,str);
    cout <<"you entered: : "<<str<<endl;

    cout <<"Length of string in charr after input: "<<strlen(charr)<<endl;
    cout <<"Length of string in str after input: "<<str.size()<<endl;
    return 0;
}