### 顺序容器

#### vector

1. vector 是连续存储，容量动态增长（按照2的指数增长）。随机访问和在尾部插入删除元素拥有较高的效率，在中间插入/删除元素会导致大量元素移动影响效率。

2. vector 的 size 返回当前已存储的元素数量，capacity 存储当前已分配的存储容量（仍然已元素数为单位），max_size 表示当前系统下能够分配的最大容量（尽管如此，仍不保证能够分配如此多的空间）。

3. clear 清除一个 vector 中的所有元素（被销毁），并且重置 size 为0。这样不保证给该 vector 重新分配空间，页不保证重置 capacity 属性。如果要强制重新分配内存可以调用：vector<>().swap(x);

4. swap 交换两个 vector 的元素。交换后，之前由 end 返回的 iterator 不再有效，其它所有指针和 iterator 仍然有效且仍指向之前指向的元素，但是现在另一个容其中。

5. vector 支持 push_back 和 pop_back 来在尾部插入/删除元素，或者直接通过索引访问并修改元素。

6. 尽管不建议，但 vector 仍然可以通过 insert/erase 方法来插/删除元素。erase 通过传入 iterator 来删除元素。

#### list

1. list 由双向链表实现，可以方便的进行插入/删除/移动操作（foward_list 有单链表实现，因此只能向前搜索）。但也缺少随机访问的特性。

2. 基础 API 大多同 vector，但是提供两段的插入/删除操作，push_back/pop_back 和 push_front/pop_front。erase 通过 iterator 来删除指向的元素，remove 则删除 list 中指定值的元素。

3. list 对象上可以直接调用 sort 方法对元素进行排序，并且可以传入比较函数的指针（否则为系统提供的默认比较函数）。

#### deque

1. deque 是一个双端队列，它和 vector 对外提供的 API 主要区别在于它可以在两端进行插入/删除操作，同时不同于 list，它又支持随机访问。

2. 它的内部实现根据不同的库有所区别，它的内部并不像 vector 是一个连续的空间，而是多段连续空间。所以通过对指向一个对象的 iterator 进行算数运算来寻求另一个对象会引发未定义的行为。

### 关联容器

#### map

1. map 通常使用红黑树实现。

2. 向 map 添加元素可以直接使用 data[key] = value 进行，也可以通过 insert 一个 std::pair<type1, type2>(obj1, obj2) 对象来实现。

3. map 中的元素都是按照 key 的升序排列存储，undered_map 保存的元素没有这个特性（所以某些操作速度更快）。

#### set 

1. set 使用红黑树实现。

2. set 同样有未排序的版本 undered_set。

#### multiset

1. multiset 使用红黑树实现。

### 容器适配器

#### queue

1. queue 实现了一个 FIFO 的功能，默认由一个内置的 deque 实现。

#### stack

1. stack 实现了一个 LIFO 的功能，默认由一个内置的 deque 实现。
