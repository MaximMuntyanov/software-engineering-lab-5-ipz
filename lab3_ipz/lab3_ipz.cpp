#include <iostream>

#include <fstream>

using namespace std;

void checkInput()
{
    if (cin.fail())
    {
        throw "[Error] Incorrect input!";
    }
}

void checkBounds(int a, int b)
{
    if (a >= b)
    {
        throw "[Error] Incorrect loop bounds input!";
    }
}

void checkUpperBound(int n)
{
    if (n < 2)
    {
        throw "[Error] Incorrect upper bound input!";
    }
}

void checkStep(int h)
{
    if (h <= 0)

    {
        throw "[Error] Incorrect step input!";
    }
}

void filePrint(double x, double y, int n)
{
    ofstream fout("results.txt");
    fout << "iteration number  " ", x = " << x << ", y = " << y << "\n";

}


double calculate(double x, int n)
{
    int y;
	if (x < 0)  
	{
		int y = 1;
		for (int j = 2; j <= n - 2; j++)
		{

			y *= j * j + 200;

		}
		 
	}

	else if (x >= 0) 
	{
		int y = 0;
		int p = 1;
		for (int i = 0; i <= n - 1; i++)
		{

			for (int j = 0; j <= n - 1; j++)
			{
				y *= x + i * i + j + 50;
			}
			y += p;

		}
        return y;
	}
   
}


int main()
{
    double a = 0;
    double b = 0;
    double h = 0;
	int n = 0;

    double y = 0;
    double x = 0;

    try
    {
        cout << "Please enter a, a < b ";
        cin >> a;
        cout << "Please enter b ";
        cin >> b;
        checkInput();
        checkBounds(a, b);
        cout << "Please enter h, h > 0 ";
        cin >> h;
        checkInput();
        checkStep(h);
        cout << "Please enter n, n > 2 ";
        cin >> n;
        checkInput();
        checkUpperBound(n);

        x = a;

        while (x <= b)
        {


            y = calculate(x, n);
            cout << "\'x\' and \'y\' values are: " << x << ", " << y << endl;

            filePrint(x, y, n);

            x += h;
        }
    }
    catch (const char* ex)
    {
        cout << ex << endl;
    }
    catch (...)
    {
        cout << "[Error] Unknown error" << endl;
        return -2;
    }

    return 0;

}