// #include <iostream>
// #include <stdio.h>
// using namespace std;
// struct lower
// {
//     int *A;
//     int n;
// };

// void Set(struct lower *m, int i, int j, int n)
// {
//     if (i >= j)
//         m->A[i * (i - 1) / 2 + j - 1] = n;
// }

// int Get(struct lower *m, int i, int j)
// {
//     if (i >= j)
//         return m->A[i * (i - 1) / 2 + j - 1];
// }

// void Display(struct lower *m)
// {
//     for (int i = 1; i <= m->n; i++)
//     {
//         for (int j = 1; j <= m->n; j++)
//         {
//             if (i >= j)
//                 cout << m->A[i * (i - 1) / 2 + j - 1] << " ";
//             else
//                 cout << 0 << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     struct lower m;
//     int i, j, x;
//     cout << "Enter size of dimensions\n";
//     cin >> m.n;
//     m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
//     cout << "Enter all elements\n";
//     for (i = 1; i <= m.n; i++)
//     {
//         for (j = 1; j <= m.n; j++)
//         {
//             scanf("%d", &x);
//             Set(&m, i, j, x);
//         }
//     }

//     cout << "\n\n"
//          << endl;
//     Display(&m);
//     return 0;
// }

// for column major

#include <iostream>
#include <stdio.h>
    using namespace std;
    struct lower
    {
        int *A;
        int n;
    };

    void Set(struct lower *m, int i, int j, int n)
    {
        if (i >= j)
            m->A[m->n*(j-1)-(j-2)*(j-1)/2+i-j] = n;
    }

    int Get(struct lower *m, int i, int j)
    {
        if (i >= j)
            return m->A[m->n*(j-1)-(j-2)*(j-1)/2+i-j];
    }

    void Display(struct lower *m)
    {
        for (int i = 1; i <= m->n; i++)
        {
            for (int j = 1; j <= m->n; j++)
            {
                if (i >= j)
                    cout << m->A[m->n*(j-1)-(j-2)*(j-1)/2+i-j] << " ";
                else
                    cout << 0 << " ";
            }
            cout << endl;
        }
    }

    int main()
    {
        struct lower m;
        int i, j, x;
        cout << "Enter size of dimensions\n";
        cin >> m.n;
        m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
        cout << "Enter all elements\n";
        for (i = 1; i <= m.n; i++)
        {
            for (j = 1; j <= m.n; j++)
            {
                scanf("%d", &x);
                Set(&m, i, j, x);
            }
        }

        cout << "\n\n"
             << endl;
        Display(&m);
        return 0;
    }

