#include <iostream>
#include <cstdlib>
#include <string>
#include <ncurses.h>
#undef erase
#include <fstream>
#include <vector>
#include <filesystem>
#include <algorithm>

using namespace std;
    int main() {
    cout << "РУССКИЙ ТЕРМИНАЛ ДЛЯ ARCH LINUX\n";
    string answer;
    while (true){
    cout << "Введи команду:";
    getline(cin, answer);
        if (answer == "help") {
        cout << "кто я-whoami\n";
        cout << "где я-pwd\n";
        cout << "файлы-ls\n";
        cout << "выход-break;\n";
        cout << "очистить-clear\n";
        cout << "ядро-uname -r\n";
        cout << "память-free -h\n";
        cout << "система-fastfetch\n";
        cout << "диски-df -h\n";
        cout << "время-date\n";
        cout << "установить <имя пакета>-sudo pacman -S <имя пакета>\n"; 
        cout << "мой айпи-curl ifconfig.me \n";
        cout << "процессор-lscpu\n";
        cout << "накопители-lsblk\n";
        cout << "аптайм-uptime\n";
        cout << "имя пк-hostname\n";
        cout << "процессы-ps aux\n";
        cout << "монитор-htop\n";
        cout << "все файлы-ls -la\n";
        cout << "дерево-tree\n";
        cout << "сеть-ip addr\n";
        cout << "порты-ss -tuln\n";
        cout << "мои пакеты-pacman -Q\n";
        cout << "найти пакет-pacman -Ss\n";
        cout << "удалить пакет-sudo pacman -R\n";
        cout << "обновить систему-sudo pacman -Syu\n";
        cout << "версия\n";
        cout << "инфо\n";
        cout << "создать папку <имя файла>-mkdir <имя файла>\n";
        cout << "создать файл <имя файла>-touch <имя файала>\n";
        cout << "прочитать <имя файла>-cat -n <имя файла>\n";
        cout << "код-встроенный редактор кода\n";
    }
    else if (answer == "кто я") {
        system("whoami");
    }
    else if (answer == "где я") {
        system("pwd");
    }
    else if(answer == "файлы") {
        system("ls");
    }
   else if (answer == "выход" || answer == "выйти") {
    break;
}
    else if (answer == "очистить") {
        system("clear");
}
    else if (answer == "система") {
        system("fastfetch");
    }
    else if (answer == "ядро") {
        system("uname -r");
    }
    else if (answer == "диски") {
        system("df -h");
    }
    else if (answer == "память") {
        system("free -h");
    }
    else if(answer == "время") {
        system("date");
    }
    else if(answer == "кто такой терри дэвис?") {
        cout << "A GOD\n";
        cout << "Терренс Эндрю (Терри) Дэвис (род. 15 декабря 1969, Милуоки, Висконсин, США — 11 августа 2018, Те-Далс, Орегон, США) — американский программист, создатель операционной системы TempleOS. Её разработка представляла собой чрезвычайно сложную, требующую много времени и необычную задачу для одного человека\n";
    }
    else if(answer == "кто такой терри девис") {
         cout << "A GOD\n";
         cout << "Терренс Эндрю (Терри) Дэвис (род. 15 декабря 1969, Милуоки, Висконсин, США — 11 августа 2018, Те-Далс, Орегон, США) — американский программист, создатель операционной системы TempleOS. Её разработка представляла собой чрезвычайно сложную, требующую много времени и необычную задачу для одного человека\n";
    }
    else if(answer == "кто такой терри девис?") {
        cout << "A GOD\n";
         cout << "Терренс Эндрю (Терри) Дэвис (род. 15 декабря 1969, Милуоки, Висконсин, США — 11 августа 2018, Те-Далс, Орегон, США) — американский программист, создатель операционной системы TempleOS. Её разработка представляла собой чрезвычайно сложную, требующую много времени и необычную задачу для одного человека\n";
 }
    else if(answer == "кто такой терри дэвис") {
       cout << "A GOD\n";
         cout << "Терренс Эндрю (Терри) Дэвис (род. 15 декабря 1969, Милуоки, Висконсин, США — 11 августа 2018, Те-Далс, Орегон, США) — американский программист, создатель операционной системы TempleOS. Её разработка представляла собой чрезвычайно сложную, требующую много времени и необычную задачу для одного человека\n";  
    }
    else if(answer == "кто твой создатель?") {
        cout << "Мой создатель——начинающий программист,который изучает язык программирования С++ примерно неделю,эта программа,кстати,тоже написана на С++\n";
    }
    else if(answer == "кто твой создатель") {
      cout << "Мой создатель——начинающий программист,который изучает язык программирования С++ примерно неделю,эта программа,кстати,тоже написана на С++\n";  
    }
    else if(answer == "установить") {
        string package;
        cout << "Введите название пакета: ";
        getline(cin, package);
system(("sudo pacman -S " + package).c_str());

    }
    else if(answer == "версия") {
        cout << "3.0.0\n";
    }
    else if (answer == "обновить систему") {
        system("sudo pacman -Syu");
    }
    else if(answer == "удалить пакет") {
        string package2;
        cout << "Введите название пакета: ";
        getline(cin, package2);
    system(("sudo pacman -R " + package2).c_str());
    }
    else if(answer == "мой айпи") {
        system("curl ifconfig.me");
    }
    else if(answer == "найти пакет") {
                string package3;
        cout << "Введите название пакета: ";
        getline(cin, package3);
    system(("pacman -Ss " + package3).c_str());
    }
    else if(answer == "порты") {
        system("ss -tuln");
    }
    else if(answer == "процессы") {
        system("ps aux");
    }
    else if(answer == "накопители") {
        system("lsblk");
    }
    else if(answer == "сеть") {
        system("ip addr");
    }
    else if(answer == "мои пакеты") {
        system("pacman -Q");
    }
    else if(answer == "все файлы") {
        system("ls -la");
    }
    else if(answer == "дерево") {
        system("tree");
    }
    else if(answer == "аптайм") {
        system("uptime");
    }
    else if(answer == "монитор") {
    system("htop");
    }
    else if(answer == "имя пк") {
        system("hostname");
    }
    else if(answer == "процессор") {
        system("lscpu");
    }
    else if(answer == "инфо")  {
cout << "╔══════════════════════════════════╗\n";
cout << "║         RusShell v2.4.6          ║\n";
cout << "║                                  ║\n";
cout << "║  Language: C++                   ║\n";
cout << "║  Platform: Arch Linux            ║\n";
cout << "║  Lines of code: 574              ║\n";
cout << "║  Commands: 30+                   ║\n";
cout << "║  Developer experience: 1 week    ║\n";
cout << "╚══════════════════════════════════╝\n";
    }
    else if(answer =="создать папку") {
        string papka;
        cout << "Введите название для папки: ";
        getline(cin, papka);
        system(("mkdir " + papka).c_str());
    }
    else if(answer == "создать файл") {
        string filename;
        cout << "Введи названия файла; ";
        getline(cin, filename);
        system(("touch " + filename).c_str());  
    }
    else if (answer == "прочитать") {
    string filename2;
    cout << "Введите название файла: ";
    getline(cin, filename2);
    system(("cat -n " + filename2).c_str());
}
else if (answer == "код") {
    system("clear");

    string filename;
    string language = "Не определено";

    cout << "=== RUSSHELL CODE EDITOR ===\n";
    cout << "Введите имя файла: ";
    getline(cin, filename);

    if (filename.empty()) {
        cout << "Имя файла не введено!\n";
        continue;
    }


    string ext = filesystem::path(filename).extension().string();

    if (ext == ".cpp" || ext == ".hpp") {
        language = "C++";
    }
    else if (ext == ".c" || ext == ".h") {
        language = "C";
    }
    else if (ext == ".py") {
        language = "Python";
    }
    else if (ext == ".sh") {
        language = "Bash";
    }
    else if (ext == ".js") {
        language = "JavaScript";
    }
    else if (ext == ".html") {
        language = "HTML";
    }
    else if (ext == ".css") {
        language = "CSS";
    }
    else if (ext == ".rs") {
        language = "Rust";
    }
    else if (ext == ".java") {
        language = "Java";
    }
    else if (ext == ".go") {
        language = "Go";
    }
    else if (ext == ".txt") {
        language = "Text";
    }



    vector<string> lines;
    ifstream input(filename);
    string line;

    if (!input && filesystem::exists(filename)) {
        cout << "Не удалось открыть файл!\n";
        continue;
    }

    while (getline(input, line)) {
        lines.push_back(line);
    }

    input.close();

    if (lines.empty()) {
        lines.push_back("");
    }



    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(1);

    int row = 0;
    int col = 0;
    int top = 0;
    int left = 0;

    bool editing = true;
    bool modified = false;

    string status = "Ready";

    while (editing) {
        int height, width;
        getmaxyx(stdscr, height, width);

        werase(stdscr);

        if (height < 6 || width < 20) {
            mvprintw(0, 0, "Resize terminal");
            refresh();

            if (getch() == 24) {
                break;
            }
            continue;
        }

        int visible = height - 4;



        if (row < top) {
            top = row;
        }

        if (row >= top + visible) {
            top = row - visible + 1;
        }

        if (col < left) {
            left = col;
        }

        if (col >= left + width) {
            left = col - width + 1;
        }



        attron(A_REVERSE);

        mvhline(0, 0, ' ', width);

        string title = "RusShell Editor | " + filename;

        if (modified) {
            title += " *";
        }

        mvaddnstr(0, 0, title.c_str(), width - 1);

        attroff(A_REVERSE);

        string lang = "Language: " + language;
        mvaddnstr(1, 0, lang.c_str(), width - 1);



        for (int i = 0; i < visible; i++) {
            int index = top + i;

            if (index < (int)lines.size()) {
                if (left < (int)lines[index].size()) {
                    mvaddnstr(
                        i + 2,
                        0,
                        lines[index].substr(left).c_str(),
                        width - 1
                    );
                }
            }
        }



        mvaddnstr(
            height - 2, 0,
            status.c_str(), width - 1
        );

        attron(A_REVERSE);

        mvhline(height - 1, 0, ' ', width);

        mvaddnstr(
            height - 1, 0,
            "^O Save   ^X Exit   Arrows Move",
            width - 1
        );

        attroff(A_REVERSE);



        move(row - top + 2, col - left);
        refresh();

  

        int key = getch();



        if (key == 24) {
            if (modified) {
                status = "Unsaved changes! Save? Y/N";
                mvhline(height - 2, 0, ' ', width);
                mvaddnstr(
                    height - 2, 0,
                    status.c_str(), width - 1
                );
                refresh();

                int choice = getch();

                if (choice == 'y' || choice == 'Y') {
                    ofstream file(filename);

                    for (string text : lines) {
                        file << text << "\n";
                    }

                    file.close();

                    if (!file) {
                        status = "Error saving file!";
                        continue;
                    }
                }
                else if (choice != 'n' && choice != 'N') {
                    status = "Exit cancelled";
                    continue;
                }
            }

            editing = false;
        }


        else if (key == 15) {
            ofstream file(filename);

            for (string text : lines) {
                file << text << "\n";
            }

            file.close();

            if (file) {
                status = "File saved!";
                modified = false;
            }
            else {
                status = "Error saving file!";
            }
        }



        else if (key == KEY_UP) {
            if (row > 0) {
                row--;
                col = min(col, (int)lines[row].size());
            }
        }



        else if (key == KEY_DOWN) {
            if (row < (int)lines.size() - 1) {
                row++;
                col = min(col, (int)lines[row].size());
            }
        }



        else if (key == KEY_LEFT) {
            if (col > 0) {
                col--;
            }
            else if (row > 0) {
                row--;
                col = lines[row].size();
            }
        }

  

        else if (key == KEY_RIGHT) {
            if (col < (int)lines[row].size()) {
                col++;
            }
            else if (row < (int)lines.size() - 1) {
                row++;
                col = 0;
            }
        }

  

        else if (key == KEY_HOME) {
            col = 0;
        }

        else if (key == KEY_END) {
            col = lines[row].size();
        }



        else if (key == KEY_BACKSPACE ||
                 key == 127 || key == 8) {

            if (col > 0) {
                lines[row].erase(col - 1, 1);
                col--;
                modified = true;
            }
            else if (row > 0) {
                col = lines[row - 1].size();

                lines[row - 1] += lines[row];

                lines.erase(lines.begin() + row);

                row--;
                modified = true;
            }
        }



        else if (key == KEY_DC) {
            if (col < (int)lines[row].size()) {
                lines[row].erase(col, 1);
                modified = true;
            }
            else if (row < (int)lines.size() - 1) {
                lines[row] += lines[row + 1];
                lines.erase(lines.begin() + row + 1);
                modified = true;
            }
        }

  

        else if (key == '\n' || key == KEY_ENTER) {
            string rest = lines[row].substr(col);

            lines[row].resize(col);

            lines.insert(lines.begin() + row + 1, rest);

            row++;
            col = 0;
            modified = true;
        }


        else if (key == '\t') {
            lines[row].insert(col, "    ");
            col += 4;
            modified = true;
        }



        else if (key >= 32 && key <= 126) {
            lines[row].insert(col, 1, (char)key);
            col++;
            modified = true;
        }
    }

    endwin();

    system("clear");
    cout << "Редактор закрыт!\n";
}
    else {
        cout << "Неизвестная команда\n";
    }

    }

    return 0;
}