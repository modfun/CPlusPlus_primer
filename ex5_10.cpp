#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	unsigned a_cnt = 0, i_cnt = 0, e_cnt = 0, o_cnt = 0, u_cnt = 0, cnt = 0;
	unsigned new_cnt = 0, tab_cnt = 0, sp_cnt = 0, seq_cnt = 0;
	bool signal = false;
	string s = "fi ff ff whatever comes to your Mind.";

	for (auto ch : s) {
		switch (ch)
		{
			case 'a':
			case 'A':
				a_cnt++; break;
			case 'i':
			case 'I':
				i_cnt++; break;
			case 'e':
			case 'E':
				e_cnt++; break;
			case 'o':
			case 'O':
				o_cnt++; break;
			case 'u':
			case 'U':
				u_cnt++; break;
			case '\n':
				new_cnt++; break;
			case '\t':
				tab_cnt++; break;
			case ' ':
				sp_cnt++; break;
			default:
				cnt++; break;
		}

		if (ch == 'f' || signal)
		{
			if (signal) switch (ch)
			{
				case 'f':
				case 'i':
				case 'l': seq_cnt++; break;
				default: signal = false;
			}
			else signal = true;
		}
	}
	cout << "a: " << a_cnt << ", e: " << e_cnt << ", i: " << i_cnt;
	cout << ", o: " << o_cnt << ", u: " << u_cnt << endl;
	cout << "\\n: " << new_cnt << ", \\t: " << tab_cnt;
	cout << ", space: " << sp_cnt << endl;
	cout << endl;
	cout << "seq: " << seq_cnt << endl;

	return (0);
}
