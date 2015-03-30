#lec9 虚存置换算法spoc练习

## 个人思考题
1. 置换算法的功能？
> 当出现缺页异常，需调入新页面而内存已满时，用置换算法选择被置换的物理页面。

2. 全局和局部置换算法的不同？
> 局部页面置换算法的选择范围仅限于当前进程占用的物理页面内。

3. 最优算法、先进先出算法和LRU算法的思路？
	- 最优算法        计算在未来最长时间内不访问的页面
	- 先进先出算法    选择在内存驻留时间最长的页面进行置换
	- LRU算法         选择最长时间没有被引用的页面进行置换

4. 时钟置换算法的思路？
> 综合考虑了LRU算法和FIFO算法的特点，进对页面的访问情况进行大致统计

5. LFU算法的思路？
> 置换访问次数最少的页面

6. 什么是Belady现象？
> 分配的物理页面增加，缺页次数反而升高的异常现象

7. 几种局部置换算法的相关性：什么地方是相似的？什么地方是不同的？为什么有这种相似或不同？
	- 相似：LRU和FIFO本质上都是先进先出的思路，在特定情况下LRU可能退化成FIFO算法，
			clock算法则集合了上述两种算法的特点, 既考虑了剧本性原理，又考虑了先进先出的原则
	- 不同: LRU根据页面的最近访问时间排序，FIFO根据页面进入内存的时间排序，
			clock算法综合考虑访问和进入内存时间两种信息
	
	> 不同算法考虑的因素不同，因而在设计细节上有所不同

8. 什么是工作集？
> 一个进程当前正在使用的逻辑页面集合

9. 什么是常驻集？
> 在当前时刻，进程实际驻留在内存当中的页面集合

10. 工作集算法的思路？
> 换出不在工作集中的页面

11. 缺页率算法的思路？
> 通过调节常驻集大小，使每个进程的缺页率保持在一个合理的范围内

12. 什么是虚拟内存管理的抖动现象？
> 进程物理页面太小，不能包含工作集，造成大量缺页，频繁置换，进程运行速度变慢

13. 操作系统负载控制的最佳状态是什么状态？
> 在并发水平和缺页率之间达到一个平衡

## 小组思考题目

----
(1)（spoc）请证明为何LRU算法不会出现belady现象


(2)（spoc）根据你的`学号 mod 4`的结果值，确定选择四种替换算法（0：LRU置换算法，1:改进的clock 页置换算法，2：工作集页置换算法，3：缺页率置换算法）中的一种来设计一个应用程序（可基于python, ruby, C, C++，LISP等）模拟实现，并给出测试。请参考如python代码或独自实现。
 - [页置换算法实现的参考实例](https://github.com/chyyuu/ucore_lab/blob/master/related_info/lab3/page-replacement-policy.py)
 
## 扩展思考题
（1）了解LIRS页置换算法的设计思路，尝试用高级语言实现其基本思路。此算法是江松博士（导师：张晓东博士）设计完成的，非常不错！

参考信息：

 - [LIRS conf paper](http://www.ece.eng.wayne.edu/~sjiang/pubs/papers/jiang02_LIRS.pdf)
 - [LIRS journal paper](http://www.ece.eng.wayne.edu/~sjiang/pubs/papers/jiang05_LIRS.pdf)
 - [LIRS-replacement ppt1](http://dragonstar.ict.ac.cn/course_09/XD_Zhang/(6)-LIRS-replacement.pdf)
 - [LIRS-replacement ppt2](http://www.ece.eng.wayne.edu/~sjiang/Projects/LIRS/sig02.ppt)