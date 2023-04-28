
### g++常用命令
- g++ -o <output_file_name> <source_file_name>  编译c++源文件并链接生成可执行程序
- g++ -c <source_file_name> <output_object_file_name> 编译c++源文件生成目标文件，没有执行链接
- g++ <output_object_file_name1> -o <output_executable_file_name> 链接目标文件生成可执行程序


### 生成使用静态库
- g++ -c <source_file_name> <output_object_file_name> 编译c++源文件生成目标文件，没有执行链接
- ar cr libxxxx.a xxxx.o   ar（Linux命令或者Mingw） cr(标记创建新的静态库) 生成libxxxx.a库
- g++ <output_object_file_name1> libxxxxx.a -o <output_executable_file_name> 链接静态库生成可执行程序
- **或者** g++ <output_object_file_name1> -L<path_name> -l<lib_name>(不要两头) -o  从path_name找静态库,可以指定多个路径以及多个目标文件 <output_executable_file_name>


### 生成使用动态库
- g++ -shared -o libxxxx.so xxxx1.o xxxx2.o   编译动态库
- g++ <source_file_name> libname.so(eg: mymath.so) -o <output_executable_file_name> 链接动态库生成可执行程序
- **或者** g++ <source_file_name> -L<path_name> -l<lib_name>(mymaht) -o <output_executable_file_name> 链接动态库生成可执行程序

  ``` cmd
  Linux运行程序（两种方法）：
  1. export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/library—path
  2. g++ main.o -L. -lmy_math -o a.out -Wl,-rpath,/home/cpp_tutorial/static_library
  ```





