# 第3章 String，Vector和Array #
----------
## Namespace using Declarations ##

### A Separate Declaration Is Required for Each Name ###

例子如using std::cin;这就使得我们再次使用cin的时候不需要带前缀std::，不过我们为了省事一般直接使用using namespace std;

### 在头文件中不使用using声明 ###
头文件一般都是直接拷贝到包含此头文件的程序中，如果头文件中包含using声明，可能会造成命名冲突。