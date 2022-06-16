#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    FILE* file = NULL;
    char path[] = "text.txt";
    int size = 10;
    char arr[80];
    char arr2[80];
    cin >> arr;

    if ((fopen_s(&file, path, "w")) != NULL)
        cout << "The file could not be created\n";
    else
        fprintf(file, "%s", arr);
    if (fclose(file) == EOF)
        cout << "The file is not closed";
    else
        cout << "The file is closed";

    if (fopen_s(&file, path, "r") != NULL)
        cout << "The file cannot be opened";
    else

    {

        while (!feof(file))
        {

            fscanf_s(file, "%s", arr2, sizeof(arr2));

            cout << arr2 <<endl;

        }



    }



}