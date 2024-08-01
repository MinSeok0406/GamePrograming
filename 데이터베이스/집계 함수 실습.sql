USE BaseballData;

-- COUNT -> �Ű������� * ���� �� �ִ� ������ �Լ�
-- SUM
-- AVG
-- MIN
-- MAX

-- �����Լ��� ������ null�̸� ����

SELECT COUNT(*)
FROM players

-----------------

SELECT DISTINCT birthYear
FROM players
ORDER BY birthYear

-- �����Լ�(DISTINCT ����)
SELECT COUNT(DISTINCT birthCity)
FROM players;

-----------------

-- �������� ��� weight ���غ���
SELECT AVG(weight)
FROM players;

SELECT SUM(weight) / COUNT(weight)
FROM players;


-- �������� ��� weight ���غ���
-- ��, weight = NULL�� ����� weight = 0�� ģ��
SELECT AVG(CASE WHEN weight IS NULL THEN 0 ELSE weight END)
FROM players;


-- MIN MAX
SELECT MIN(weight), MAX(weight)
FROM players;