USE MadangData;

CREATE TABLE Book 
(
	bookid INT PRIMARY KEY,
	bookname VARCHAR(40),
	publisher VARCHAR(40),
	price INT
);

CREATE TABLE Customer
(
	custid INT PRIMARY KEY,
	name VARCHAR(40),
	address VARCHAR(50),
	phone VARCHAR(20)
);

CREATE TABLE Orders
(
	orderid INT PRIMARY KEY,
	custid INT REFERENCES Customer(custid),
	bookid INT REFERENCES Book(bookid),
	saleprice INT,
	orderdate DATE
);

INSERT INTO Book VALUES(1, '�౸�� ����', '�½�����', 7000);
INSERT INTO Book VALUES(2, '�౸ �ƴ� ����', '������', 13000);
INSERT INTO Book VALUES(3, '�౸�� ����', '���ѹ̵��', 22000);
INSERT INTO Book VALUES(4, '���� ���̺�', '���ѹ̵��', 35000);
INSERT INTO Book VALUES(5, '�ǰ� ����', '�½�����', 8000);
INSERT INTO Book VALUES(6, '���� �ܰ躰���', '�½�����', 6000);
INSERT INTO Book VALUES(7, '�߱��� �߾�', '�̻�̵��', 20000);
INSERT INTO Book VALUES(8, '�߱��� ��Ź��', '�̻�̵��', 13000);
INSERT INTO Book VALUES(9, '�ø��� �̾߱�', '�Ｚ��', 7500);
INSERT INTO Book VALUES(10, 'Olympic Champions', 'Pearson', 13000);

INSERT INTO Customer VALUES(1, '������', '���� ��ü����', '000-5000-0001');
INSERT INTO Customer VALUES(2, '�迬��', '���ѹα� ����', '000-6000-0001');
INSERT INTO Customer VALUES(3, '��̶�', '���ѹα� ������', '000-7000-0001');
INSERT INTO Customer VALUES(4, '�߽ż�', '�̱� Ŭ������', '000-8000-0001');
INSERT INTO Customer VALUES(5, '�ڼ���', '���ѹα� ����', NULL);

INSERT INTO Orders VALUES(1, 1, 1, 6000, CAST('2020-07-01' AS DATE));
INSERT INTO Orders VALUES(2, 1, 3, 21000, CAST('2020-07-03' AS DATE));
INSERT INTO Orders VALUES(3, 2, 5, 8000, CAST('2020-07-03' AS DATE));
INSERT INTO Orders VALUES(4, 3, 6, 6000, CAST('2020-07-04' AS DATE));
INSERT INTO Orders VALUES(5, 4, 7, 20000, CAST('2020-07-05' AS DATE));
INSERT INTO Orders VALUES(6, 1, 2, 12000, CAST('2020-07-07' AS DATE));
INSERT INTO Orders VALUES(7, 4, 8, 13000, CAST('2020-07-07' AS DATE));
INSERT INTO Orders VALUES(8, 3, 10, 12000, CAST('2020-07-08' AS DATE));
INSERT INTO Orders VALUES(9, 2, 10, 7000, CAST('2020-07-09' AS DATE));
INSERT INTO Orders VALUES(10, 3, 8, 13000, CAST('2020-07-10' AS DATE));

CREATE TABLE Imported_Book
(
	bookid INT,
	bookname VARCHAR(40),
	publisher VARCHAR(40),
	price INT
);

INSERT INTO Imported_Book VALUES(21, 'Zen Golf', 'Pearson', 12000);
INSERT INTO Imported_Book VALUES(22, 'Soccer Skills', 'Human Kinetics', 15000);

BEGIN TRAN;
COMMIT;

-- 1.1
SELECT bookname
FROM Book
WHERE bookid = 1;

-- 1.2
SELECT bookname
FROM Book
WHERE price >= 20000;

-- 1.3
SELECT SUM(o.saleprice) AS '�ѱ��ž�'
FROM Orders AS o
	INNER JOIN Customer AS c
	ON o.custid = c.custid
WHERE c.name = '������';

-- 1.4
SELECT COUNT(o.bookid) AS '������ ���� ��'
FROM Orders AS o
	INNER JOIN Customer AS c
	ON o.custid = c.custid
WHERE c.name = '������';

-- 1.5
SELECT COUNT(DISTINCT publisher) AS '������ ���� ���ǻ� ��'
FROM Book
WHERE bookid IN (SELECT o.bookid
				FROM Orders AS o
				INNER JOIN Customer AS c
				ON o.custid = c.custid
				WHERE c.name = '������');

-- 1.6
SELECT b.bookname, b.price, (b.price - o.saleprice) AS '�������� �ǸŰ����� ����'
FROM Book AS b, Orders AS o, Customer AS c
WHERE c.name = '������' AND c.custid = o.custid AND b.bookid = o.bookid

-- 1.7
SELECT bookname
FROM Book
WHERE bookid NOT IN (SELECT o.bookid
				FROM Orders AS o
				INNER JOIN Customer AS c
				ON o.custid = c.custid
				WHERE c.name = '������');

---------------------------------------------

-- 2.1
SELECT COUNT(*)
FROM Book;

-- 2.2
SELECT COUNT(DISTINCT publisher)
FROM Book;

-- 2.3
SELECT name, address
FROM Customer;

-- 2.4
SELECT bookid
FROM Orders
WHERE orderdate >= '2020-07-04' AND orderdate <= '2020-07-07';

-- 2.5
SELECT bookid
FROM Orders
WHERE orderdate < '2020-07-04' OR orderdate > '2020-07-07';

-- 2.6
SELECT name, address
FROM Customer
WHERE name LIKE '��%'

-- 2.7
SELECT name, address
FROM Customer
WHERE name LIKE '��%' AND name LIKE '%��';

-- 2.8
SELECT name
FROM Customer
WHERE custid NOT IN (SELECT custid
					FROM Orders)

-- 2.9
SELECT SUM(saleprice), AVG(saleprice)
FROM Orders;

-- 2.10
SELECT c.name, SUM(o.saleprice)
FROM Customer AS c
	INNER JOIN Orders AS o
	ON c.custid = o.custid
GROUP BY c.name

-- 2.11
SELECT c.name, b.bookname
FROM Book AS b, Orders AS o, Customer AS c
WHERE c.custid = o.custid AND b.bookid = o.bookid
ORDER BY c.name;