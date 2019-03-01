/*
use NAME//ѡ��Ҫ���������ݿ⣬��������������Ը����ݿ�
SHOW DATABASES;//չʾ���ݿ��й�����������ݿ��б�
SHOW TABLES��//չʾ��ǰ���ݿ����еı�
SHOW COLUMNS FROM XXX;//չʾ���ݱ�����ԣ��������ͣ�������Ϣ
SHOW INDEX FROM XXX;//��ʾ���ݱ����ϸ������Ϣ������PRIMARY KEY����������
CREATE DATABASE ���ݿ���;//����һ���µ����ݿ�
mysqladmin -u root -p create ���ݿ�����//�������е�¼ǰֱ�Ӵ������ݿ�
drop database ���ݿ���;//ɾ�����ݿ�


CREATE TABLE table_name (column_name column_type);//�������ݿ�ı�׼�﷨
���磺
CREATE TABLE IF NOT EXISTS `runoob_tbl`(
`runoob_id` INT UNSIGNED AUTO_INCREMENT,
`runoob_title` VARCHAR(100) NOT NULL,
`runoob_author` VARCHAR(40) NOT NULL,
`submission_date` DATE,
PRIMARY KEY ( `runoob_id` )
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

����㲻���ֶ�Ϊ NULL ���������ֶε�����Ϊ NOT NULL�� �ڲ������ݿ�ʱ���������ֶε�����ΪNULL ���ͻᱨ��
AUTO_INCREMENT������Ϊ���������ԣ�һ��������������ֵ���Զ���1��
PRIMARY KEY�ؼ������ڶ�����Ϊ������ ������ʹ�ö����������������м��Զ��ŷָ���
ENGINE ���ô洢���棬CHARSET ���ñ��롣



DROP TABLE table_name ;ɾ�����ݱ�ı�׼�﷨��
���磺
DROP TABLE runoob_tbl��

INSERT INTO table_name ( field1, field2,...fieldN )
						VALUES
						( value1, value2,...valueN );�������ı�׼д��
���磺
INSERT INTO runoob_tbl
(runoob_title, runoob_author, submission_date)
  VALUES
 ("ѧϰ PHP", "����̳�", NOW());
 NOW() ��һ�� MySQL �������ú����������ں�ʱ�䡣


 SELECT * from runoob_tbl WHERE runoob_author='����̳�';//��ѯ���
 ����*�������������õ������������id��name�ȣ�*����������ȡ�������ݣ�WHERE���ǲ�ѯ������

 UPDATE table_name SET field1=new-value1, field2=new-value2
[WHERE Clause]     ����/�޸�
���磺
UPDATE runoob_tbl SET runoob_title='ѧϰ C++' WHERE runoob_id=3;


DELETE FROM table_name [WHERE Clause]��ɾ������
���磺
DELETE FROM runoob_tbl WHERE runoob_id=3;

MYsql��like��䣬����������ʽ
SELECT field1, field2,...fieldN
FROM table_name
WHERE field1 LIKE condition1 [AND [OR]] filed2 = 'somevalue'
*������� WHERE �Ӿ���ָ���κ�������
*������� WHERE �Ӿ���ʹ��LIKE�Ӿ䡣
*�����ʹ��LIKE�Ӿ����Ⱥ� =��
*LIKE ͨ���� % һͬʹ�ã�������һ��Ԫ�ַ���������
*�����ʹ�� AND ���� OR ָ��һ������������
*������� DELETE �� UPDATE ������ʹ�� WHERE...LIKE �Ӿ���ָ��������

���磺
SELECT * from runoob_tbl WHERE runoob_author LIKE '%COM';



//UNION������
SELECT expression1, expression2, ... expression_n
FROM tables
[WHERE conditions]
UNION [ALL | DISTINCT]
SELECT expression1, expression2, ... expression_n
FROM tables
[WHERE conditions];
*����
expression1, expression2, ... expression_n: Ҫ�������С�
tables: Ҫ���������ݱ�
WHERE conditions: ��ѡ�� ����������
DISTINCT: ��ѡ��ɾ����������ظ������ݡ�Ĭ������� UNION �������Ѿ�ɾ�����ظ����ݣ����� DISTINCT ���η��Խ��ûɶӰ�졣
ALL: ��ѡ���������н�����������ظ����ݡ�

���磺
SELECT country FROM Websites
UNION ALL
SELECT country FROM apps
ORDER BY country;


//��������
SELECT * from runoob_tbl ORDER BY submission_date ASC;
*�����ʹ�� ASC �� DESC �ؼ��������ò�ѯ����ǰ�����������С� Ĭ������£����ǰ��������С�


//��������
����������
+----+--------+---------------------+--------+
| id | name   | date                | singin |
+----+--------+---------------------+--------+
|  1 | С�� | 2016-04-22 15:25:33 |      1 |
|  2 | С�� | 2016-04-20 15:25:47 |      3 |
|  3 | С�� | 2016-04-19 15:26:02 |      2 |
|  4 | С�� | 2016-04-07 15:26:14 |      4 |
|  5 | С�� | 2016-04-11 15:26:40 |      4 |
|  6 | С�� | 2016-04-04 15:26:54 |      2 |
+----+--------+---------------------+--------+
6 rows in set (0.00 sec)

SELECT name, COUNT(*) FROM   employee_tbl GROUP BY name;
*����COUNT(*)�ǰ���ÿ���˵���Ϣ��������ͳ�ƣ�����С����2��������Ϣ�������
+--------+----------+
| name   | COUNT(*) |
+--------+----------+
| С�� |        1 |
| С�� |        3 |
| С�� |        2 |
+--------+----------+

ʹ�� WITH ROLLUP
WITH ROLLUP ����ʵ���ڷ���ͳ�����ݻ������ٽ�����ͬ��ͳ�ƣ�SUM,AVG,COUNT������
�������ǽ����ϵ����ݱ����ֽ��з��飬��ͳ��ÿ���˵�¼�Ĵ�����
mysql> SELECT name, SUM(singin) as singin_count FROM  employee_tbl GROUP BY name WITH ROLLUP;
+--------+--------------+
| name   | singin_count |
+--------+--------------+
| С�� |            2 |
| С�� |            7 |
| С�� |            7 |
| NULL   |           16 |
+--------+--------------+


MySQL �� JOIN �������������в�ѯ����
JOIN ���չ��ܴ��·�Ϊ�������ࣺ
INNER JOIN��������,���ֵ���ӣ�����ȡ���������ֶ�ƥ���ϵ�ļ�¼��
LEFT JOIN�������ӣ�����ȡ������м�¼����ʹ�ұ�û�ж�Ӧƥ��ļ�¼��
RIGHT JOIN�������ӣ��� �� LEFT JOIN �෴�����ڻ�ȡ�ұ����м�¼����ʹ���û�ж�Ӧƥ��ļ�¼��

���磺mysql> SELECT a.runoob_id, a.runoob_author, b.runoob_count FROM runoob_tbl 
a INNER JOIN tcount_tbl b ON a.runoob_author = b.runoob_author;
�������ȼ��ڣ�
mysql> SELECT a.runoob_id, a.runoob_author, b.runoob_count FROM runoob_tbl a,
tcount_tbl b WHERE a.runoob_author = b.runoob_author;

//���������
REGEXP
���磺
����name�ֶ�����'st'Ϊ��ͷ���������ݣ�
mysql> SELECT name FROM person_tbl WHERE name REGEXP '^st';
����name�ֶ�����'ok'Ϊ��β���������ݣ�
mysql> SELECT name FROM person_tbl WHERE name REGEXP 'ok$';
����name�ֶ��а���'mar'�ַ������������ݣ�
mysql> SELECT name FROM person_tbl WHERE name REGEXP 'mar';
����name�ֶ�����Ԫ���ַ���ͷ����'ok'�ַ�����β���������ݣ�
mysql> SELECT name FROM person_tbl WHERE name REGEXP '^[aeiou]|ok$';



//
MySQL ����
MySQL ������Ҫ���ڴ���������󣬸��Ӷȸߵ����ݡ�����˵������Ա����ϵͳ�У���ɾ��һ����Ա���㼴��Ҫɾ����Ա�Ļ������ϣ�ҲҪɾ���͸���Ա��ص���Ϣ�������䣬���µȵȣ���������Щ���ݿ�������͹���һ������
�� MySQL ��ֻ��ʹ���� Innodb ���ݿ���������ݿ����֧������
�������������ά�����ݿ�������ԣ���֤������ SQL ���Ҫôȫ��ִ�У�Ҫôȫ����ִ�С�
������������ insert,update,delete ���

//ALTER����
��������Ҫ�޸����ݱ��������޸����ݱ��ֶ�ʱ������Ҫʹ�õ�MySQL ALTER���

//������ʱ����ֻ�ڵ�ǰ�����пɼ�����ǰ���ӶϿ�ʱ�Զ�ɾ����Ҳ�����ڶϿ�����ǰ�ֶ�ɾ�� 
CREATE TEMPORARY TABLE SalesSummary (
    -> product_name VARCHAR(50) NOT NULL
    -> , total_sales DECIMAL(12,2) NOT NULL DEFAULT 0.00
    -> , avg_unit_price DECIMAL(7,2) NOT NULL DEFAULT 0.00
    -> , total_units_sold INT UNSIGNED NOT NULL DEFAULT 0
);

//mysql�ڲ��ṩ�˺ܶຯ�����û�ʹ�ã���Ҫʱ�˽�

���ˣ�mysql��Ҫѧϰ��ϡ�
*/