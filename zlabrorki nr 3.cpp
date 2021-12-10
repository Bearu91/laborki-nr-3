// zad 1 i 2
// #include <iostream>
// using namespace std;

// int main(){
//     int i,tab[10];
    
//     for (i = 0; i <= 9; i++){
//         tab[i] = 3*(i+1);
//         if(i % 2 == 1){
//            cout << tab[i] << endl;
//         }
        
//     } 
    
// }
// 


// zad 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i;
//     cout << "Podaj liczbe n: ";
//     cin >> n;
//     int * tab= new int[n];
//     tab[n-1] = n;
//     for (i = n-1; i >= 1; i--)
//     {
//         tab[i-1] = tab[i] - 5;
//         cout << tab[i] << endl;
//     }
//     delete [] tab;
// }

//zad 4 
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     int n,i,min;
//     cout << "Podaj liczbe n: ";
//     cin >> n;
//     int * tab= new int[n];
//     for (i = 0; i <= n-1; i++)
//     {
//         tab[i] = rand() % 73 - 23;
//         cout << tab[i] << endl;
//     }

//     min = tab[0];
//     for (i = 1; i <= n-1; i++)
//     {
//         if (tab[i] < min)
//         {
//             min = tab[i];
//         }
//     }
//     cout << "najmniejsza: " <<  min;
//     delete [] tab;
// }
//zad 5 
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     int n,i,a,b;
//     cout << "Podaj liczbe(musi byc wieksza od 1) n: ";
//     cin >> n;
//     cout << "Podaj liczbe a: " << endl;
//     cin >> a;
//     cout << "Podaj liczbe b: " << endl;
//     cin >> b;

//     int * tab= new int[n];
//     tab[0] = a;
//     tab[1] = b;
//     for (i = 2; i <= n-1; i++)
//     {
//         tab[i] = tab[i-2] + tab[i-1];
//         cout << tab[i] << endl;
//     }

//     delete [] tab;
// zad 6 

// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     int i;

//     int tab[20];
//     for (i = 0; i <= 9; i++)
//     {
//         tab[i] = rand() % 100;
//         cout << tab[i] << endl;
//     }
//     cout << "             " << endl;
//     for (i = 10; i <= 19; i++)
//     {
//         tab[i] = tab[i - 10];
//         cout << tab[i] << endl;
//     }
// }
// zad 7 
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     int n,a,i,j;
//     cout << "podaj liczbe n: ";
//     cin >> n;
//     int ** tab = new int * [n];

//     for (i = 0; i <= n-1; i++)
//     {
//         tab[i] = new int[n];
//         for (j = 0; j <= n-1; j++)
//         {
//             tab[i][j] = rand() % 10;
//             cout << tab[i][j] << " ";
//         }
//         cout << endl;
//     }
//     a = 0;
//     for (i = 0; i <= n-1; i++)
//     {
//         a += tab[i][i];
//     }
//     cout << "Przekatna = " <<  a;
//     delete[] tab;
// }
// zad 8 
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     int n,a,i,j;
//     cout << "podaj liczbe n: ";
//     cin >> n;
//     int  tab = new int * [n];
//     int  tab2 = new int* [n];
//     int ** tab3 = new int* [n];
//     for (i = 0; i <= n-1; i++)
//     {
//         tab[i] = new int[n];
//         for (j = 0; j <= n-1; j++)
//         {
//             tab[i][j] = rand() % 10;
//             cout << tab[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "--------------------------" << endl;
//     for (i = 0; i <= n - 1; i++)
//     {
//         tab2[i] = new int[n];
//         for (j = 0; j <= n - 1; j++)
//         {
//             tab2[i][j] = rand() % 10;
//             cout << tab2[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "--------------------------" << endl;
//     for (i = 0; i <= n - 1; i++)
//     {
//         tab3[i] = new int[n];
//         for (j = 0; j <= n - 1; j++)
//         {
//             tab2[i][j] = tab[i][j] + tab2[i][j];
//             cout << tab2[i][j] << " ";
//         }
//         cout << endl;
//     }

//     delete[] tab;
//     delete[] tab2;
//     delete[] t