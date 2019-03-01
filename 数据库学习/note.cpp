/*
use NAME//选择要操作的数据库，后面的所有命令都针对该数据库
SHOW DATABASES;//展示数据库中管理的所有数据库列表
SHOW TABLES；//展示当前数据库中有的表
SHOW COLUMNS FROM XXX;//展示数据表的属性，属性类型，主键信息
SHOW INDEX FROM XXX;//显示数据表的详细索引信息，包括PRIMARY KEY（主键）。
CREATE DATABASE 数据库名;//创建一个新的数据库
mysqladmin -u root -p create 数据库名；//在命令行登录前直接创建数据库
drop database 数据库名;//删除数据库


CREATE TABLE table_name (column_name column_type);//创建数据库的标准语法
例如：
CREATE TABLE IF NOT EXISTS `runoob_tbl`(
`runoob_id` INT UNSIGNED AUTO_INCREMENT,
`runoob_title` VARCHAR(100) NOT NULL,
`runoob_author` VARCHAR(40) NOT NULL,
`submission_date` DATE,
PRIMARY KEY ( `runoob_id` )
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

如果你不想字段为 NULL 可以设置字段的属性为 NOT NULL， 在操作数据库时如果输入该字段的数据为NULL ，就会报错。
AUTO_INCREMENT定义列为自增的属性，一般用于主键，数值会自动加1。
PRIMARY KEY关键字用于定义列为主键。 您可以使用多列来定义主键，列间以逗号分隔。
ENGINE 设置存储引擎，CHARSET 设置编码。



DROP TABLE table_name ;删除数据表的标准语法，
例如：
DROP TABLE runoob_tbl；

INSERT INTO table_name ( field1, field2,...fieldN )
						VALUES
						( value1, value2,...valueN );插入语句的标准写法
例如：
INSERT INTO runoob_tbl
(runoob_title, runoob_author, submission_date)
  VALUES
 ("学习 PHP", "菜鸟教程", NOW());
 NOW() 是一个 MySQL 函数，该函数返回日期和时间。


 SELECT * from runoob_tbl WHERE runoob_author='菜鸟教程';//查询语句
 其中*代表你最终想获得的数据项，比如有id，name等，*则代表你想获取所有数据，WHERE里是查询的条件

 UPDATE table_name SET field1=new-value1, field2=new-value2
[WHERE Clause]     更新/修改
例如：
UPDATE runoob_tbl SET runoob_title='学习 C++' WHERE runoob_id=3;


DELETE FROM table_name [WHERE Clause]；删除命令
例如：
DELETE FROM runoob_tbl WHERE runoob_id=3;

MYsql的like语句，类似正则表达式
SELECT field1, field2,...fieldN
FROM table_name
WHERE field1 LIKE condition1 [AND [OR]] filed2 = 'somevalue'
*你可以在 WHERE 子句中指定任何条件。
*你可以在 WHERE 子句中使用LIKE子句。
*你可以使用LIKE子句代替等号 =。
*LIKE 通常与 % 一同使用，类似于一个元字符的搜索。
*你可以使用 AND 或者 OR 指定一个或多个条件。
*你可以在 DELETE 或 UPDATE 命令中使用 WHERE...LIKE 子句来指定条件。

例如：
SELECT * from runoob_tbl WHERE runoob_author LIKE '%COM';



//UNION操作符
SELECT expression1, expression2, ... expression_n
FROM tables
[WHERE conditions]
UNION [ALL | DISTINCT]
SELECT expression1, expression2, ... expression_n
FROM tables
[WHERE conditions];
*参数
expression1, expression2, ... expression_n: 要检索的列。
tables: 要检索的数据表。
WHERE conditions: 可选， 检索条件。
DISTINCT: 可选，删除结果集中重复的数据。默认情况下 UNION 操作符已经删除了重复数据，所以 DISTINCT 修饰符对结果没啥影响。
ALL: 可选，返回所有结果集，包含重复数据。

例如：
SELECT country FROM Websites
UNION ALL
SELECT country FROM apps
ORDER BY country;


//排序命令
SELECT * from runoob_tbl ORDER BY submission_date ASC;
*你可以使用 ASC 或 DESC 关键字来设置查询结果是按升序或降序排列。 默认情况下，它是按升序排列。


//分组命令
例如有数据
+----+--------+---------------------+--------+
| id | name   | date                | singin |
+----+--------+---------------------+--------+
|  1 | 小明 | 2016-04-22 15:25:33 |      1 |
|  2 | 小王 | 2016-04-20 15:25:47 |      3 |
|  3 | 小丽 | 2016-04-19 15:26:02 |      2 |
|  4 | 小王 | 2016-04-07 15:26:14 |      4 |
|  5 | 小明 | 2016-04-11 15:26:40 |      4 |
|  6 | 小明 | 2016-04-04 15:26:54 |      2 |
+----+--------+---------------------+--------+
6 rows in set (0.00 sec)

SELECT name, COUNT(*) FROM   employee_tbl GROUP BY name;
*其中COUNT(*)是按照每个人的信息条数进行统计，例如小王有2条数据信息，结果：
+--------+----------+
| name   | COUNT(*) |
+--------+----------+
| 小丽 |        1 |
| 小明 |        3 |
| 小王 |        2 |
+--------+----------+

使用 WITH ROLLUP
WITH ROLLUP 可以实现在分组统计数据基础上再进行相同的统计（SUM,AVG,COUNT…）。
例如我们将以上的数据表按名字进行分组，再统计每个人登录的次数：
mysql> SELECT name, SUM(singin) as singin_count FROM  employee_tbl GROUP BY name WITH ROLLUP;
+--------+--------------+
| name   | singin_count |
+--------+--------------+
| 小丽 |            2 |
| 小明 |            7 |
| 小王 |            7 |
| NULL   |           16 |
+--------+--------------+


MySQL 的 JOIN 在两个或多个表中查询数据
JOIN 按照功能大致分为如下三类：
INNER JOIN（内连接,或等值连接）：获取两个表中字段匹配关系的记录。
LEFT JOIN（左连接）：获取左表所有记录，即使右表没有对应匹配的记录。
RIGHT JOIN（右连接）： 与 LEFT JOIN 相反，用于获取右表所有记录，即使左表没有对应匹配的记录。

例如：mysql> SELECT a.runoob_id, a.runoob_author, b.runoob_count FROM runoob_tbl 
a INNER JOIN tcount_tbl b ON a.runoob_author = b.runoob_author;
以上语句等价于：
mysql> SELECT a.runoob_id, a.runoob_author, b.runoob_count FROM runoob_tbl a,
tcount_tbl b WHERE a.runoob_author = b.runoob_author;

//正则操作：
REGEXP
例如：
查找name字段中以'st'为开头的所有数据：
mysql> SELECT name FROM person_tbl WHERE name REGEXP '^st';
查找name字段中以'ok'为结尾的所有数据：
mysql> SELECT name FROM person_tbl WHERE name REGEXP 'ok$';
查找name字段中包含'mar'字符串的所有数据：
mysql> SELECT name FROM person_tbl WHERE name REGEXP 'mar';
查找name字段中以元音字符开头或以'ok'字符串结尾的所有数据：
mysql> SELECT name FROM person_tbl WHERE name REGEXP '^[aeiou]|ok$';



//
MySQL 事务
MySQL 事务主要用于处理操作量大，复杂度高的数据。比如说，在人员管理系统中，你删除一个人员，你即需要删除人员的基本资料，也要删除和该人员相关的信息，如信箱，文章等等，这样，这些数据库操作语句就构成一个事务！
在 MySQL 中只有使用了 Innodb 数据库引擎的数据库或表才支持事务。
事务处理可以用来维护数据库的完整性，保证成批的 SQL 语句要么全部执行，要么全部不执行。
事务用来管理 insert,update,delete 语句

//ALTER命令
当我们需要修改数据表名或者修改数据表字段时，就需要使用到MySQL ALTER命令。

//创建临时表，即只在当前连接中可见，当前连接断开时自动删除，也可以在断开连接前手动删除 
CREATE TEMPORARY TABLE SalesSummary (
    -> product_name VARCHAR(50) NOT NULL
    -> , total_sales DECIMAL(12,2) NOT NULL DEFAULT 0.00
    -> , avg_unit_price DECIMAL(7,2) NOT NULL DEFAULT 0.00
    -> , total_units_sold INT UNSIGNED NOT NULL DEFAULT 0
);

//mysql内部提供了很多函数供用户使用，需要时了解

至此，mysql概要学习完毕。
*/