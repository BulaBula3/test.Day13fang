#include <iostream>
using namespace std;
#include <string>

//1������ѧ���������ͣ�ѧ�����������������䣬������
struct Student
{
    //��Ա�б�
    string name;
    int age=0;
    int score=0;

}s3;//˳�㴴���ṹ�����

//2��ͨ��ѧ�����ʹ�������ѧ��

int main()
{
    //struct�ؼ��ֿ�ʡ��
    struct Student s1;
    //��s1��ֵ��ͨ����.�����ʽṹ������е�����
    s1.name = "����";
    s1.age = 18;
    s1.score = 100;

    cout << "������ " << s1.name << " ���䣺 " << s1.age << " ������ " << s1.score << endl;
    
    //struct Student s2={ ... }
    struct Student s2 = { "����",19,80 };
    cout << "������ " << s2.name << " ���䣺 " << s2.age << " ������ " << s2.score << endl;

    //�ڶ���ṹ��ʱ˳�㴴���ṹ�����
    s3.name = "����";
    s3.name = 20;
    s3.score = 60;
    cout << "������ " << s3.name << " ���䣺 " << s3.age << " ������ " << s3.score << endl;

    system("pause");

    return 0;
}