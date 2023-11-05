#include <fstream>
#include <cstring>
#define LGMAX_TXT 201
#define LGMAX_CUV 21
using namespace std;
ifstream fin("sir.in");
ofstream fout("sir.out");
int main()
{
	char t[LGMAX_TXT], c[LGMAX_CUV], aux[LGMAX_TXT], *cuv, *p;
	int nr = 0;
	fin.getline(t, LGMAX_TXT);
	fin.getline(c, LGMAX_CUV);
	fin.close();
	strcpy(aux, t);
	cuv = strtok(aux, " ");
	while (cuv)
	{
		if (cuv[0] == c[0])
		{
			nr++;
			p = strstr(t, cuv);
			*p = 0;
			strcat(t, p+strlen(cuv));
		}
		cuv = strtok(NULL, " ");
	}
	fout << t << '\n' << nr;
	fout.close();
	return 0;
}
