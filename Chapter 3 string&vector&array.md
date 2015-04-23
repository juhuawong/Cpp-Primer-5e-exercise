# 第3章 String，Vector和Array #
----------
## 3.1 Namespace using Declarations ##

### A Separate Declaration Is Required for Each Name ###

例子如using std::cin;这就使得我们再次使用cin的时候不需要带前缀std::，不过我们为了省事一般直接使用using namespace std;

### 在头文件中不使用using声明 ###
头文件一般都是直接拷贝到包含此头文件的程序中，如果头文件中包含using声明，可能会造成命名冲突。

## 3.2 string类型 ##

### 3.2.1 sting的声明和初始化 ###
一般的变量在声明的时候建议初始化。
两种方式：

- 直接初始化	`string s6("hiya");`和`string s7(10,'c');`

- 复制初始化 `string s5 = "hiya";`

### 3.2.2 string类型的操作 ###

- 读写操作

    `cin`是不读取空格的
    `getline`读取空格，这个函数只读取一行，返回`istream`类型

#### string的empty和size操作 ####


- string类型的empty操作返回的是bool类型的值
- string的size操作返回的是strig::size_type类型，这是一个依赖机器的类型，在不同的机器上长度是不一样的，但无论在什么机器上，string::size_type能够容纳任何string类型的长度。

#### string的比较 ####

#### string的赋值 ####

#### 两个string相加 ####


