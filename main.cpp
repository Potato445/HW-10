#include "human.h"

int main()
{
    Student andrey("Yudin", "Andrey", "Nickolaevich", 19, true);
    Boss karpov("Karpov", "Dmitrii", "Anatolievich", 46, 28);
    andrey.print();
    cout << endl;
    karpov.print();
}
