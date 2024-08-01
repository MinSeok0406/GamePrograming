USE BaseballData;

SET STATISTICS TIME ON;
SET STATISTICS IO ON;
SET STATISTICS PROFILE ON;

-- Merge(����) ���� = Sort Merge(���� ����) ����

SELECT *
FROM players AS p
	INNER JOIN salaries AS s
	ON p.playerID = s.playerID;

-- One-To-Many (outer�� unique�ؾ� �� => PK, Unique)
-- Merge ���ε� ������ �ٴ´� (outer�� unique�ؾ� ��)
-- ������ Random Access -> Clustered Scan �� ����

SELECT *
FROM schools AS s
	INNER JOIN schoolsplayers AS p
	ON s.schoolID = p.schoolID;

-- ������ ��� --
-- Merge -> Sort Merge ����
-- 1) ���� ������ Sort(����)�ϰ� Merge(����)�Ѵ�
	-- �̹� ���ĵ� ���¶�� Sort�� ���� (Ư��, Clustered�� ������ ���ĵ� ���¶�� Best)
	-- ������ �����Ͱ� �ʹ� ������ GG -> Hash
-- 2) Random Access ���ַ� ������� �ʴ´�
-- 3) Many-to-Many(�ٴ��)���ٴ� One-to-Many(�ϴ��) ���ο� ȿ����
