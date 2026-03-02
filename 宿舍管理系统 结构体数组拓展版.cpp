#include <iostream>
#include <string>
using namespace std;

struct Student {//定义学生结构体
    int student_id;
    string name;
    string gender;
    string birthdate;
    int grade;
    int classes;
    string major;
    string phone;
    int building_number;//宿舍楼号
    int dormitory_number;//房间号
    int bed_number;//床号
};

struct Dormitory {//定义宿舍结构体
    int building_number;//宿舍楼号
    int dormitory_number;//房间号
    int floor;
    string type;
    bool available;
    int max_capacity;
    int capacity;
};

Student students[50] = {//学生信息静态初始化

    {1, "张三", "男", "2004-01-01", 2, 1, "软件工程", "13812345678", 1, -1, -1},
    {2, "李四", "女", "2005-01-19", 1, 1, "软件工程", "13987654321", 2, -1, -1},
    {3, "王五", "男", "2003-03-03", 3, 1, "软件工程", "13600101111", 1, -1, -1},
    {4, "马六", "女", "2002-01-20", 4, 1, "软件工程", "11432101901", 2, -1, -1},
    {5, "黄七", "女", "2005-05-20", 1, 1,"软件工程", "11332101901", 2, -1, -1},
    {6, "张三", "男", "2004-01-01", 2, 1,"软件工程", "13812345678", 1, -1, -1},
    {7, "李四", "女", "2005-01-19", 1, 1, "软件工程", "13987654321", 2, -1, -1},
    {8, "王五", "男", "2003-03-03", 3, 1,"软件工程", "13600001111", 1, -1, -1},
    {9, "马六", "女", "2002-01-20", 4,1, "软件工程", "11352101901", 2, -1, -1},
    {10, "黄七", "女", "2005-05-20", 1,1, "软件工程", "12332101901", 2, -1, -1},
    {11, "张三", "男", "2004-01-01", 2, 2,"软件工程", "13812245678", 1, -1, -1},
    {12, "李四", "女", "2005-01-19", 1, 2,"软件工程", "15987654321", 2, -1, -1},
    {13, "王五", "男", "2003-03-03", 3,2, "软件工程", "13600401111", 1, -1, -1},
    {14, "马六", "女", "2002-01-20", 4,2, "软件工程", "14332101901", 2, -1, -1},
    {15, "黄七", "女", "2005-05-20", 1, 2,"软件工程", "11332101601", 2, -1, -1},
    {16, "张三", "男", "2004-01-01", 2, 2,"软件工程", "13812345078", 1, -1, -1},
    {17, "李四", "女", "2005-01-19", 1, 2,"软件工程", "13987664321", 2, -1, -1},
    {18, "王五", "男", "2003-03-03", 3, 2,"软件工程", "13620001111", 1, -1, -1},
    {19, "马六", "女", "2002-01-20", 4,2, "软件工程", "11532101901", 2, -1, -1},
    {20, "黄七", "女", "2005-05-20", 1, 2,"软件工程", "15332101901", 2, -1, -1},
    {21, "张三", "男", "2004-01-01", 2, 3,"软件工程", "13512345678", 1, -1, -1},
    {22, "李四", "女", "2005-01-19", 1,3, "软件工程", "13987454321", 2, -1, -1},
    {23, "王五", "男", "2003-03-03", 3, 3,"软件工程", "13600091111", 1, -1, -1},
    {24, "马六", "女", "2002-01-20", 4, 3,"软件工程", "11392101901", 2, -1, -1},
    {25, "黄七", "女", "2005-05-20", 1, 3,"软件工程", "11632101901", 2, -1, -1},
    {26, "张三", "男", "2004-01-01", 2, 3,"软件工程", "19812345678", 1, -1, -1},
    {27, "李四", "女", "2005-01-19", 1, 3,"软件工程", "13987654621", 2, -1, -1},
    {28, "王五", "男", "2003-03-03", 3, 3,"软件工程", "13700001111", 1, -1, -1},
    {29, "马六", "女", "2002-01-20", 4, 3,"软件工程", "11732101901", 2, -1, -1},
    {30, "黄七", "女", "2005-05-20", 1, 3,"软件工程", "17332101901", 2, -1, -1},
    {31, "张三", "男", "2004-01-01", 2, 4,"软件工程", "13812345778", 1, -1, -1},
    {32, "李四", "女", "2005-01-19", 1, 4,"软件工程", "13987674321", 2, -1, -1},
    {33, "王五", "男", "2003-03-03", 3, 4,"软件工程", "13670001111", 1, -1, -1},
    {34, "马六", "女", "2002-01-20", 4, 4,"软件工程", "11337101901", 2, -1, -1},
    {35, "黄七", "女", "2005-05-20", 1, 4,"软件工程", "11377101901", 2, -1, -1},
    {36, "张三", "男", "2004-01-01", 2, 4,"软件工程", "13812645678", 1, -1, -1},
    {37, "李四", "女", "2005-01-19", 1, 4,"软件工程", "13967654321", 2, -1, -1},
    {38, "王五", "男", "2003-03-03", 3, 4,"软件工程", "13606001111", 1, -1, -1},
    {39, "马六", "女", "2002-01-20", 4, 4,"软件工程", "11332601901", 2, -1, -1},
    {40, "黄七", "女", "2005-05-20", 1, 4,"软件工程", "11032101901", 2, -1, -1},
    {41, "张三", "男", "2004-01-01", 2, 5,"软件工程", "13814345678", 1, -1, -1},
    {42, "李四", "女", "2005-01-19", 1, 5,"软件工程", "13987754321", 2, -1, -1},
    {43, "王五", "男", "2003-03-03", 3, 5,"软件工程", "13650001111", 1, -1, -1},
    {44, "马六", "女", "2002-01-20", 4, 5,"软件工程", "11882101901", 2, -1, -1},
    {45, "黄七", "女", "2005-05-20", 1, 5,"软件工程", "11392101901", 2, -1, -1},
    {46, "张三", "男", "2004-01-01", 2, 5,"软件工程", "13412345678", 1, -1, -1},
    {47, "李四", "女", "2005-01-19", 1, 5,"软件工程", "13987656321", 2, -1, -1},
    {48, "王五", "男", "2003-03-03", 3, 5,"软件工程", "13607001111", 1, -1, -1},
    {49, "马六", "女", "2002-01-20", 4, 5,"软件工程", "11332801901", 2, -1, -1},
    {50, "黄七", "女", "2005-05-20", 1, 5,"软件工程", "11132101901", 2, -1, -1},
};

Dormitory dormitories[] = {//宿舍信息静态初始化
    {1,101, 1, "单人间", true,1,0},
    {1,102, 1, "单人间", true,1,0},
    {1,201, 2, "双人间", true,2,0},
    {1,202, 2, "双人间", true,2,0},
    {1,301, 3, "四人间", true,4,0},
    {1,302, 3, "四人间", true,4,0},
    {1,401, 4, "六人间", true,6,0},
    {1,402, 4, "六人间", true,6,0},
    {2,101, 1, "单人间", true,1,0},
    {2,102, 1, "单人间", true,1,0},
    {2,201, 2, "双人间", true,2,0},
    {2,202, 2, "双人间", true,2,0},
    {2,301, 3, "四人间", true,4,0},
    {2,302, 3, "四人间", true,4,0},
    {2,401, 4, "六人间", true,6,0},
    {2,402, 4, "六人间", true,6,0},
};

int current_student_id;

//函数初始化
void admin_login();//管理员登录
void student_login();//学生登录
void allocate_dormitory(int student_id, int building_number, int dormitory_number, int bed_number);//宿舍分配
void display_student_info(int student_id);//显示学生信息
void student_checkout(int building_number, int dorminary_number, int bed_number);//办理学生退房
void display_dormitory_info();//显示宿舍信息
void display_all_students();//显示所有学生信息
void display_students_by_classes();//按照班级显示学生信息
void typecheck();//按房间分类查询
void charge();//学生缴费查询函数
void logout();//退出登录


void admin_login() {
    string password;
    cout << "请输入管理员密码：";
    cin >> password;

    if (password == "admin") {
        int admin_choice;
        do {
            cout << "\n===== 管理员菜单 =====\n";
            cout << "1. 显示所有学生信息\n";
            cout << "2. 按班级显示学生信息\n";
            cout << "3. 显示所有宿舍信息\n";
            cout << "4. 按房间类型查询入住情况\n";
            cout << "5. 退出管理员登录\n";
            cout << "请选择操作：";
            cin >> admin_choice;

            switch (admin_choice) {
            case 1:
                display_all_students();//调用显示全部学生信息函数
                break;
            case 2:
                display_students_by_classes();//调用分班显示学生信息函数
                break;
            case 3:
                display_dormitory_info();//调用显示所有宿舍信息函数
                break;
            case 4:
                typecheck();
                break;
            case 5:
                cout << "您已退出。\n";
                break;
            default:
                cout << "无效操作，请重新选择。\n";
            }
        } while (admin_choice != 5);//保证输入3时退出
    }
    else {
        cout << "密码错误，请重新选择操作！\n";
    }
}

void student_login() {
    int student_id;
    int password;
    cout << "请输入你的学号：";
    cin >> student_id;
    cout << "请输入密码：";
    cin >> password;
    if (student_id == password)
    {
        bool found = false;
        for (const auto& student : students) //遍历学生数组,student 将依次引用 students 数组中的每个元素，可以直接访问 student 的成员变量
        {
            if (student.student_id == student_id) {
                found = true;
                current_student_id = student_id;
                break;
            }
        }

        if (!found) {
            cout << "学号不存在，登录失败。\n";
        }
        else {
            int student_choice;
            do {
                cout << "\n===== 学生菜单 =====\n";
                cout << "1. 入住宿舍\n";
                cout << "2. 查询个人信息\n";
                cout << "3. 办理退房手续\n";
                cout << "4. 缴费查询\n";
                cout << "5. 退出登录\n";
                cout << "请选择操作：";
                cin >> student_choice;

                switch (student_choice) {
                case 1:
                    if (students[current_student_id - 1].dormitory_number != -1) {
                        cout << "你已经入住了宿舍。\n";
                    }
                    else {
                        int build_choice, dorm_choice, bed_choice;
                        cout << "请选择宿舍：\n";
                        display_dormitory_info();//调用宿舍信息函数供学生进行选择
                        cout << "请输入楼号，宿舍号和床位号（例如：1 101 1）：";
                        cin >> build_choice >> dorm_choice >> bed_choice;
                        allocate_dormitory(current_student_id, build_choice, dorm_choice, bed_choice);//调用函数进行分配宿舍
                    }
                    break;
                case 2:
                    display_student_info(current_student_id);//调用函数显示学生个人信息
                    break;
                case 3:
                {
                    int build_choice, dorm_choice, bed_choice;
                    string date;
                    cout << "请输入楼号，宿舍号和床位号（例如：1 101 1）及退房日期：";
                    cin >> build_choice >> dorm_choice >> bed_choice >> date;
                    student_checkout(build_choice, dorm_choice, bed_choice);//调用函数办理退房
                    break;
                }
                case 4:
                    charge();
                    break;
                case 5:
                    logout();//退出登录
                    cout << "学生退出登录。\n";
                    break;

                default:
                    cout << "无效操作，请重新选择。\n";
                }
            } while (student_choice != 5);

        }
    }
    else
        cout << "密码错误，请重新选择操作！";
}

void allocate_dormitory(int student_id, int building_number, int dormitory_number, int bed_number) {
    Student& student = students[student_id - 1];//声明一个名为 student 的变量，类型为 Student&，即 Student 类型的引用

    // 判断性别是否符合初始化的楼号
    if ((student.gender == "男" && building_number != 1) ||
        (student.gender == "女" && building_number != 2)) {
        cout << "不符合宿舍规定，无法分配宿舍。\n";
        return;
    }
    student.building_number = building_number;
    student.dormitory_number = dormitory_number;
    student.bed_number = bed_number;
    Dormitory* target_dormitory = nullptr;//用于存储指向特定宿舍对象的地址，从而进行后续的操作，比如查找特定宿舍或者进行宿舍的分配和管理


    for (auto& dorm : dormitories)//对 dormitories 数组中每个 Dormitory 对象的迭代,在每次迭代中，dorm 将依次引用 dormitories 数组中的每个元素，可以通过 dorm 来访问和修改每个宿舍对象的成员变量和方法
    {
        if (dorm.building_number == building_number && dorm.dormitory_number == dormitory_number) {
            if (dorm.capacity < dorm.max_capacity) {
                dorm.capacity++;
                if (dorm.capacity == dorm.max_capacity) {
                    dorm.available = false;
                }
                cout << "成功分配宿舍：" << dormitory_number << " 号，床位：" << bed_number << "。\n";
            }
            else {
                student.dormitory_number = -1;
                student.bed_number = -1;
                cout << "该宿舍已经满员，无法分配。\n";
            }
            break;

        }

    }
}

void display_student_info(int student_id) {
    const auto& student = students[student_id - 1];//将 students 数组中索引为 student_id - 1 的学生对象的引用赋给 student 变量
    cout << "学号：" << student.student_id << "\n";
    cout << "姓名：" << student.name << "\n";
    cout << "性别：" << student.gender << "\n";
    cout << "出生日期：" << student.birthdate << "\n";
    cout << "年级：" << student.grade << "\n";
    cout << "班级：" << student.classes <<"班" << "\n";
    cout << "专业：" << student.major << "\n";
    cout << "联系电话：" << student.phone << "\n";
    cout << "楼号：" << student.building_number << "\n";
    cout << "宿舍号：" << student.dormitory_number << "\n";
    cout << "床位号：" << student.bed_number << "\n";
}

void student_checkout(int building_number, int dorminary_number, int bed_number)
{
    bool found = false;
    for (auto& student : students) {
        if (student.building_number == building_number && student.dormitory_number == dorminary_number && student.bed_number == bed_number)
        {//还原学生的宿舍信息
            student.dormitory_number = -1;
            student.bed_number = -1;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "未找到对应宿舍，退房失败。\n";
        return;
    }
    for (auto& dorm : dormitories) {
        if (dorm.building_number == building_number && dorm.dormitory_number == dorminary_number) {
            if (dorm.capacity <= dorm.max_capacity > 0) {
                dorm.capacity--;
                dorm.available = true;
                cout << "退房成功。\n";
                return;
            }
        }
    }
}

void display_all_students()
{
    cout << "\n===== 所有学生信息 =====\n";
    for (const auto& student : students)
    {
        cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" <<student.classes<<"班，专业：" << student.major<<"，楼号：" << student.building_number << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
    }
}

void display_dormitory_info() 
{
    cout << "\n===== 所有宿舍信息 =====\n";
    cout << "(一号楼为男生宿舍 二号楼为女生宿舍)\n";
    for (const auto& dorm : dormitories) {
        cout << "楼号：" << dorm.building_number << "，宿舍号：" << dorm.dormitory_number << ", 楼层：" << dorm.floor
            << ", 类型：" << dorm.type << ", 是否可用：" << (dorm.available ? "可用" : "不可用") << ", 当前已入住人数：" << dorm.capacity << "\n";
    }
}

void display_students_by_classes()//按班级显示学生信息
{
    int grade, classes;
    cout << "请选择想要查看的年级和班级：\n";
    cin >> grade >> classes;
    if (grade == 1) {
        if (classes == 1) {
            for (const auto& student : students)
            {
                if (student.grade == 1 && student.classes == 1)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 2) {
            for (const auto& student : students)
            {
                if (student.grade == 1 && student.classes == 2)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 3) {
            for (const auto& student : students)
            {
                if (student.grade == 1 && student.classes == 3)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 4) {
            for (const auto& student : students)
            {
                if (student.grade == 1 && student.classes == 4)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 5) {
            for (const auto& student : students)
            {
                if (student.grade == 1 && student.classes == 5)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
    }
    if (grade == 2) {
        if (classes == 1) {
            for (const auto& student : students)
            {
                if (student.grade == 2 && student.classes == 1)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 2) {
            for (const auto& student : students)
            {
                if (student.grade == 2 && student.classes == 2)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 3) {
            for (const auto& student : students)
            {
                if (student.grade == 2 && student.classes == 3)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 4) {
            for (const auto& student : students)
            {
                if (student.grade == 2 && student.classes == 4)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 5) {
            for (const auto& student : students)
            {
                if (student.grade == 2 && student.classes == 5)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
    }
    if (grade == 3) {
        if (classes == 1) {
            for (const auto& student : students)
            {
                if (student.grade == 3 && student.classes == 1)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 2) {
            for (const auto& student : students)
            {
                if (student.grade == 3 && student.classes == 2)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 3) {
            for (const auto& student : students)
            {
                if (student.grade == 3 && student.classes == 3)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 4) {
            for (const auto& student : students)
            {
                if (student.grade == 3 && student.classes == 4)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 5) {
            for (const auto& student : students)
            {
                if (student.grade == 3 && student.classes == 5)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
    }
    if (grade == 4) {
        if (classes == 1) {
            for (const auto& student : students)
            {
                if (student.grade == 4 && student.classes == 1)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 2) {
            for (const auto& student : students)
            {
                if (student.grade == 4 && student.classes == 2)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 3) {
            for (const auto& student : students)
            {
                if (student.grade == 4 && student.classes == 3)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 4) {
            for (const auto& student : students)
            {
                if (student.grade == 4 && student.classes == 4)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
        if (classes == 5) {
            for (const auto& student : students)
            {
                if (student.grade == 4 && student.classes == 5)
                {
                    cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major << "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
                }
            }
        }
    }
}

void typecheck()
{
    string type;
    cout << "请输入想要查询的房间类型：(单人间/双人间/四人间/六人间) \n";
    cin >> type;

    bool found = false;

    if (type == "单人间" || type == "双人间" || type == "四人间" || type == "六人间")
    {
        for (const auto& student : students)
        {
            if ((type == "单人间" && (student.dormitory_number == 101 || student.dormitory_number == 102 || student.dormitory_number == 103 || student.dormitory_number == 104)) ||
                (type == "双人间" && (student.dormitory_number == 201 || student.dormitory_number == 202 || student.dormitory_number == 203 || student.dormitory_number == 204)) ||
                (type == "四人间" && (student.dormitory_number == 301 || student.dormitory_number == 302 || student.dormitory_number == 303 || student.dormitory_number == 304)) ||
                (type == "六人间" && (student.dormitory_number == 401 || student.dormitory_number == 402 || student.dormitory_number == 403 || student.dormitory_number == 404)))
            {
                found = true;
                cout << "学号：" << student.student_id << "，姓名：" << student.name << "，性别：" << student.gender << "，出生日期：" << student.birthdate << "，年级：" << student.grade << "，班级：" << student.classes << "班，专业：" << student.major <<"，楼号："<<student.building_number<< "，宿舍号：" << student.dormitory_number << "，床位号：" << student.bed_number << endl;
            }
        }

        if (!found)
        {
            cout << "尚未有人入住！\n";
        }
    }
    else

    {
        cout << "查询的类型不存在，请重新输入\n";
    }
}



void charge()
{
    string type;
    int dormitory;
    dormitory = students->dormitory_number;
    if (dormitory != -1)
    {
        cout << "请输入所住的房间类型：(单人间/双人间/四人间/六人间) \n";
        cin >> type;
        if (type == "单人间")
        {
            cout << "本学期住宿费用为：1500元。\n";
        }
        else if (type == "双人间")
        {
            cout << "本学期住宿费用为：1200元。\n";
        }
        else if (type == "四人间")
        {
            cout << "本学期住宿费用为：1000元。\n";
        }
        else if (type == "六人间")
        {
            cout << "本学期住宿费用为：800元。\n";
        }
        else
        {
            cout << "错误，请重新输入！\n";
        }
    }
    else
    {
        cout << "您尚未入住！\n";
    }
}

void logout() {
    current_student_id = 0;
    return;
}

int main() {
    int choice;

    do {
        cout << "\n===== 软件工程专业宿舍管理系统 =====\n";
        cout << "1. 管理员登录\n";
        cout << "2. 学生登录\n";
        cout << "3. 退出\n";
        cout << "请选择操作：";
        cin >> choice;

        switch (choice) {
        case 1:
            admin_login();//调用管理员登录函数
            break;
        case 2:
            student_login();//调用学生登录函数
            break;
        case 3:
            cout << "退出系统。\n";
            break;
        default:
            cout << "无效的选择，请重新选择。\n";
        }
    } while (choice != 3);

    return 0;
}
