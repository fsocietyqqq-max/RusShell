# RusShell

Русскоязычная командная оболочка для Arch Linux, написанная на C++.

## Возможности

- 30+ команд на русском языке: информация о системе, сеть, файлы и управление пакетами.
- Встроенный терминальный редактор на ncurses с определением языка по расширению файла.
- Сохранение файлов через Ctrl+O, выход через Ctrl+X.

## Сборка на Arch Linux

```bash
sudo pacman -S --needed gcc ncurses
g++ ru.cpp -o ru -std=c++17 -lncurses
./ru
```

Введите `help` для списка команд или `код` для запуска редактора.

## English

RusShell is a Russian-language command interface and built-in terminal code editor for Arch Linux. It is an experimental C++ learning project.

## Ограничения / Known limitations

Учебная версия: пользовательский ввод передаётся в `system()`, поэтому используйте только доверенные имена файлов и пакетов. Редактор поддерживает ASCII-ввод; полноценное редактирование Unicode пока не реализовано. Некоторые команды требуют дополнительных утилит (fastfetch, htop, tree, curl).
