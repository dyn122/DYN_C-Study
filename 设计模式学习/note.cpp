/*
设计模式：在一定的环境下，用特定的套路解决问题

*创建型
*结构型
*行为型

设计模式的基础是多态

高内聚，低耦合

//十种原则
*单一职责原则
	如果一个类职责不单一，修改另一个职责的时候可能会影响其他的

*开闭原则
	把基类抽象画，通过继承来实现不同的功能，从而实现各个功能之间的隔离，增加新的功能通过增加代码而不是改动源码来解决

*里氏代换原则
	任何抽象类出现的地方都可以用他的实现类进行替换，实际就是虚拟机制，语言级别实现面向对象功能

*依赖倒转原则
	依赖于抽象接口，不要依赖于具体实现（类），就是针对接口编程

*接口隔离原则
	不应强迫用户的程序依赖他们不需要的接口方法，一个接口应该只提供一种对外功能，不应该把所有操作都封装到一个接口中去

*合成复用原则
	如果使用集成，会导致父类的任何变换都可能影响子类的行为，如果使用对象组合，就降低了这种依赖关系，对于继承和组合，优先使用组合

*迪米特法则（知道最少原则）
	一个对象应当对其他对象尽可能的少了解，从而降低各个对象之间的耦合，提供系统的可维护性，例如在一个程序中，各个模块之间相互调用时，
通常会提供一个统一的接口来实现，这样其他模块不需要了解另一个模块的内部实现细节，当一个模块的内部实现发生改变时，不会影响其他模块的使用。



*/