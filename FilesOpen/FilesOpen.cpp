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
    cout << "Enter text and press Enter\n";
    cin >> arr;

    if ((fopen_s(&file, path, "w")) != NULL)
        cout << "The file could not be created\n";
    else
        fprintf(file, "%s", arr);
    if (fclose(file) == EOF || fclose(file) == 0)
        cout << "The file is not closed\n";
    else
        cout << "The file is closed\n";
    fflush(file);
    if (fopen_s(&file, path, "r") != NULL)
        cout << "The file cannot be opened\n";
    else

    {
        fscanf_s(file, "%s", arr2, (unsigned int)sizeof(arr2));
        cout << arr2 << endl;
        cout << "Text has been read";
    }
    fflush(file);
}