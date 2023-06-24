/*this is project on hotel managment in this we will discuss the no.of items with the customer and what are they want
and finally we will make bill on the items they brought.*/

#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l;
    int flag = 0;
    i = j = k = l = 0;
    char countinue = 'y';
    int selection, prize;
    // variable of rooms and food avilable in the hotel
    int qrooms = 0, qpizza = 0, qburger = 0, qpasta = 0;
    // variable of rooms and food sold in the hotel
    int srooms = 0, spizza = 0, sburger = 0, spasta = 0;
    // asking hotel about quainty of rooms and food in there hotel
    cout << "coumputer asking to the hotel" << endl
        << endl;
    cout << " no.of rooms do you have:" << endl;
    cin >> qrooms;
    cout << " no.of pizzas do you have:" << endl;
    cin >> qpizza;
    cout << " no.of burgers do you have:" << endl;
    cin >> qburger;
    cout << " no.of pastas do you have:" << endl;
    cin >> qpasta;
    // asking to the castomer
    cout << "coumputer asking to the hotel coustomer" << endl
        << endl;
    while (countinue != 'n')
    {

        cout << "**********MENU*************" << endl;
        cout << "1.room          - 1200$     - " << qrooms << " we have " << endl
            << "2.pizza         - 100$      - " << qpizza << " we have " << endl
            << "3.burger        - 200$      - " << qburger << " we have " << endl
            << "4.pasta         - 50$       - " << qpasta << " we have " << endl
            << "select any item on the menu card" << endl;
        cin >> selection;
        cout << endl;
        if (selection > 4)
        {
            cout << "pls,select any item in mean card" << endl;
        }
        else
        {
            switch (selection)
            {
            case 1:
                if (qrooms != 0)
                {
                    cout << "no.of rooms do you want dear customer:" << endl;
                    cin >> srooms;
                    if (srooms > qrooms)
                    {
                        cout << "sorry,sir we don't have that much level rooms can you please decrease the no.of rooms w.r.t see on menu" << endl;
                        flag = 1;
                    }
                    i = srooms + i;
                    if (flag == 0)
                    {
                        qrooms = qrooms - srooms;
                    }
                    flag = 0;
                }
                else
                    cout << "sorry sir,we don't have rooms" << endl;
                break;
            case 2:
                if (qpizza != 0)
                {
                    cout << "no.of pizza do you want dear customer:" << endl;
                    cin >> spizza;
                    if (spizza > qpizza)
                    {
                        flag = 1;
                        cout << "sorry,sir we don't have that much level pizza can you please decrease the no.of pizza w.r.t see on menu" << endl;
                    }
                    j = spizza + j;
                    if (flag == 0)
                    {
                        qpizza = qpizza - spizza;
                    }
                    flag = 0;
                }
                else
                    cout << "sorry sir,we don't have pizza" << endl;
                break;
            case 3:
                if (qburger != 0)
                {
                    cout << "no.of buggers do you want dear customer:" << endl;
                    cin >> sburger;
                    if (sburger > qburger)
                    {
                        flag = 1;
                        cout << "sorry,sir we don't have that much level burgeer can you please decrease the no.of bugere w.r.t see on menu" << endl;
                    }
                    k = sburger + k;
                    if (flag == 0)
                    {
                        qburger = qburger - sburger;
                    }

                    flag = 0;
                }
                else
                    cout << "sorry sir,we don't have burger" << endl;
                break;
            case 4:
                if (qpasta != 0)
                {
                    cout << "no.of pasta do you want dear customer:" << endl;
                    cin >> spasta;
                    if (spasta > qpasta)
                    {
                        flag = 1;
                        cout << "sorry,sir we don't have that much level pasta can you please decrease the no.of pasta w.r.t see on menu" << endl;
                    }
                    l = spasta + l;
                    if (flag == 0)
                    {
                        qpasta = qpasta - spasta;
                    }

                    flag = 0;
                }
                else
                    cout << "sorry sir,we don't have pasta" << endl;
            }
        }
        cout << "do you want you give any order then press a any key " << endl
            << "do you don't give any order press n" << endl;
        cin >> countinue;
        cout << endl
            << endl;
    }
    cout << "your total orders are:" << endl
        << "rooms   - " << i << endl
        << "pizza   - " << j << endl
        << "burger  - " << k << endl
        << "pasta   - " << l << endl
        << endl;
    cout << "sir,your bill is:" << endl;
    prize = ((i * 1200) + (j * 100) + (k * 200) + (l * 50));
    cout << "prize for room         -          " << i * 1200 << endl
        << "prize for pizza        -          " << j * 100 << endl
        << "prize for burger       -          " << k * 200 << endl
        << "prize for pasta        -          " << l * 50 << endl;
    cout << "your total prize is                --------" << endl
        << "                                  " << prize << endl;

    return 0;
}