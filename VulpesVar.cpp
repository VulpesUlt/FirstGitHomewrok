// VulpesVar.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    // Задание 1
    short shortVar(12);
    int intVar(1000);
    long longVar(123456);
    long long llVar(12345678);
    char charVar('a');
    bool blVar(true);
    float floatVar(12.25);
    double doubleVar(-15.123456);
    std::cout << "shortvar:" << shortVar << std::endl;
    std::cout << "int:" << intVar << std::endl;
    std::cout << "longVar:" << longVar << std::endl;
    std::cout << "llVar:" << llVar << std::endl;
    std::cout << "char:" << charVar << std::endl;
    std::cout << "bool:" << blVar << std::endl;
    std::cout << "float:" << floatVar << std::endl;
    std::cout << "double:" << doubleVar << std::endl;

     // Задание 2
    enum ticTacToe{null, cross, nothing };
    typedef ticTacToe ttt_t;
    ttt_t game = nothing;

    // Задание 3
    ttt_t gamefield[3][3] = { {nothing,nothing,nothing},{nothing,nothing,nothing},{nothing,nothing,nothing} };
    std::cout << gamefield[0][0] << gamefield[0][1] << gamefield[0][2] << std::endl;
    std::cout << gamefield[1][0] << gamefield[1][1] << gamefield[1][2] << std::endl;
    std::cout << gamefield[2][0] << gamefield[2][1] << gamefield[2][2] << std::endl;

    return 0;
}
    // Задание 4
void TicTacToe()
{
    enum symb { nothing, cross, null };
    enum gameresult { draw, player1, player2, nowinner };
    struct game 
    {
       symb field [3][3] = { {nothing,nothing,nothing},{nothing,nothing,nothing},{nothing,nothing,nothing} };
       bool tileusage[3][3] = { false,false,false,false,false,false,false,false,false, };
       gameresult winner = nowinner;
    };
} 
    //Задание 5
int MyStruct()
{
    struct MyVariant
    {
        union inform_U
        {
            int intData;
            float fData;
            char charData;
        }inform;

        unsigned int isInt : 1;
        unsigned int isFloat : 1;
        unsigned int isChar : 1;
    };

    MyVariant V1{ {0},0,0,0 };

    V1.inform.fData = 123.654;
    V1.isFloat = 1;

    if (V1.isInt == 1 && V1.isFloat == 0 && V1.isChar == 0)
        std::cout << "Integer number is: " << V1.inform.intData << std::endl;
    else if (V1.isInt == 0 && V1.isFloat == 1 && V1.isChar == 0)
        std::cout << "Number with floating point is: " << V1.inform.fData << std::endl;
    else if (V1.isInt == 0 && V1.isFloat == 0 && V1.isChar == 1)
        std::cout << "The char is: " << V1.inform.charData << std::endl;
    else
        std::cout << "Something got wrong" << std::endl;



    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
