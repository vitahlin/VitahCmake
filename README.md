# VitahCmake

如何使用`Cmake`编译`C++`项目的示例，参照每个`Demo`里的`CMakeLists`文件，有具体注释。

编译方法：进入到当前`Demo`的`build.sh`脚本文件所在目录，执行该脚本即可。以`Demo_1`和`Demo_8`为例：
```shell 
# Demo_1 
cd Demo_1
sh build.sh


# Demo_8
cd Demo_8/main 
sh build.sh
```

#### 各个示例说明


| Demo      |   示例说明 | 
| -         |   -  | 
| Demo_1    |   编译单个文件 | 
| Demo_2    |   同一目录下引用一个头文件的编译 | 
| Demo_3    |   同一目录下引用一个头文件和一个源文件 | 
| Demo_4    |   同一目录下引用多个头文件和源文件的 | 
| Demo_5    |   引用一个子目录 | 
| Demo_6    |   引用多个子目录 | 
| Demo_7    |   引用多个子目录，同时引用同一目录下的多个文件 | 
| Demo_8    |   多级目录项目中，引用其他目录的文件进行编译 | 
| Demo_9    |   将编译文件和源代码文件区分开。新建`build`目录存放相关的编译文件，注意执行`build.sh`脚本编译后可执行文件是在`Demo_9/main/build`目录下。 | 
| Demo_10   |   指定可执行文件的生成目录。注意执行`build.sh`后与`Demo_9`不同的是可执行文件是在`Demo_10/main`目录下。 | 
| Demo_11   |   多级目录项目中，引用外部文件夹代码，同时引用子目录进行编译 | 