# ipv4-generator


## About
Репозиторий содержит с++ реализацию динамической библиотеки `generator_lib.dll`, которая является ABI модулем для генерации [ipv4-адресов](https://ru.wikipedia.org/wiki/IPv4). Генерация адресов такого вида может потребоваться для нагрузочного тестирования приложений, заполнения БД, ...

Модуль используется в тестовой программе на c++ `src/main.cpp` посредством неявного связывания с dll библиотекой. Также, приведен пример использованя динамичнской библиотеки из кода написанного на python `src/main.py`.

## Building
Для сборки приложения можно использовать файл `CMakeLists.txt` с настройками по умолчанию. 

## Running 
с++: `$ ./generator <OUTPUT_FILENAME> <NUMBER_OF_ADDRESSES>`

python: `$ python main.py <DLL_PATH> <OUTPUT_FILENAME> <NUMBER_OF_ADDRESSES>`

Сгенерированные адреса будут записаны в файл с именем `OUTPUT_FILENAME`
