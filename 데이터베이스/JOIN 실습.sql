
-- JOIN(����)

USE GameDB;

CREATE TABLE testA
(
	a INTEGER
)
CREATE TABLE testB
(
	b VARCHAR(10)
)

-- A(1, 2, 3)
INSERT INTO testA VALUES(1);
INSERT INTO testA VALUES(2);
INSERT INTO testA VALUES(3);
-- B('A', 'B', 'C')
INSERT INTO testB VALUES('A');
INSERT INTO testB VALUES('B');
INSERT INTO testB VALUES('C');

-- CROSS JOIN (���� ����)
SELECT *
FROM testA
	CROSS JOIN testB;

SELECT *
FROM testA, testB;

-----------------------------

USE BaseballData;

SELECT *
FROM players
ORDER BY playerID
SELECT *
FROM salaries
ORDER BY playerID

-- INNER JOIN (�� ���� ���̺��� ���η� ���� + ���� ������ ON����)
-- playerID�� players, salaries ���ʿ� �� �ְ� ��ġ�ϴ� �ֵ��� ����

SELECT *
FROM players AS p
	INNER JOIN salaries AS s
	ON p.playerID = s.playerID

-- OUTER JOIN (�ܺ� ����)
	-- LEFT / RIGHT
	-- ��� ���ʿ��� �����ϴ� ������


-- LEFT JOIN (�� ���� ���̺��� ���η� ���� + ���� ������ ON����)
-- playerID�� ����(Left)�� ������ ������ ǥ��. ������(salaries)�� ������ ������ ������ NULL�� ä��
SELECT *
FROM players AS p
	LEFT JOIN salaries AS s
	ON p.playerID = s.playerID

-- RIGHT JOIN (�� ���� ���̺��� ���η� ���� + ���� ������ ON����)
-- playerID�� ������(Right)�� ������ ������ ǥ��. ����(players)�� ������ ���� ������ NULL�� ä��
SELECT *
FROM players AS p
	RIGHT JOIN salaries AS s
	ON p.playerID = s.playerID