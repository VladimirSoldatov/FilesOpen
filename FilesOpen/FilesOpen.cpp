#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	const char* path = "D:\\1.txt"; 
	const char* path2 = "D:\\2.txt";


	int len = 0;
	char buf[128];
	FILE* in;
	FILE* out{};
	
	if (fopen_s(&out, path2, "w") != NULL && &in, fopen_s(&in, path, "r") != NULL)
	{

		cout << "The files cannot be opened";
	}
	else
	{
		while (!feof(in)) {
			fgets(buf, 127, in);
			len = (int)strlen(buf);
		/*	if (buf[len - 1] == '\n')
			{
				buf[len - 1] = '\0';
			}
			*/
			if (len < 7) 
			{
				fputs(buf, out);
				puts(buf);
			}
		}
	}
}