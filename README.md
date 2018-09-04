# VitahCmake

如何使用`Cmake`编译`C++`项目的示例，参照每个`Demo`里的`CMakeLists`文件，有具体注释。

编译方法：执行每个`Demo`中的`build.sh`脚本即可。以`Demo_1`为例：
```shell 
cd Demo_1
sh build.sh
```

##### Demo_1

编译单个文件示例

##### Demo_2 Demo_3 Demo_4

同一目录下编译多个文件

##### Demo_5 Demo_6

包含子目录文件的编译

##### Demo_7

多级目录项目中的编译

##### Demo_8 

新建`build`目录存放相关的编译文件，注意执行`build.sh`脚本编译后可执行文件是在`Demo_8/main/build`目录下。

##### Demo_9

指定可执行文件的生成目录。
编译同`Demo_8`，但是可执行文件生成位置与`Demo_8`不同，`Demo_8`可执行文件是在`build`目录下，而`Demo_9`是在`main`目录下。