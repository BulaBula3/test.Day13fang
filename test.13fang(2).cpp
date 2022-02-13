#include <iostream>
using namespace std;
#include <string>

//1、创建学生数据类型：学生包括（姓名，年龄，分数）
struct Student
{
    //成员列表
    string name;
    int age=0;
    int score=0;

}s3;//顺便创建结构体变量

//2、通过学生类型创建具体学生

int main()
{
    //struct关键字可省略
    struct Student s1;
    //给s1赋值，通过“.”访问结构体变量中的属性
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;

    cout << "姓名： " << s1.name << " 年龄： " << s1.age << " 分数： " << s1.score << endl;
    
    //struct Student s2={ ... }
    struct Student s2 = { "李四",19,80 };
    cout << "姓名： " << s2.name << " 年龄： " << s2.age << " 分数： " << s2.score << endl;

    //在定义结构体时顺便创建结构体变量
    s3.name = "王五";
    s3.name = 20;
    s3.score = 60;
    cout << "姓名： " << s3.name << " 年龄： " << s3.age << " 分数： " << s3.score << endl;

    system("pause");

    return 0;
}