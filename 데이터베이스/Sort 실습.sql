USE BaseballData;

-- 1) ����

-- 2) ORDER BY
-- ����) ORDER BY ������ ������ �ؾ� �ϴϱ� Sort
SELECT *
FROM players
ORDER BY college;

-- 3) GROUP BY
-- ����) ���踦 �ϱ� ����
SELECT college, COUNT(college)
FROM players
WHERE college LIKE 'C%'
GROUP BY college;

-- 4) DISTINCT
-- ����) �ߺ� ����
SELECT DISTINCT college
FROM players
WHERE college LIKE 'C%'

-- 5) UNION
-- ����) �ߺ� ����
SELECT college
FROM players
WHERE college LIKE 'B%'
UNION
SELECT college
FROM players
WHERE college LIKE 'C%'

-- 6) RANKING WINDOWS FUNCTION
-- ����) ���踦 �ϱ� ����
SELECT ROW_NUMBER() OVER (ORDER BY college)
FROM players;

-- ������ ��� --

-- Sorting (����) �� ������

-- O(NLogN) -> DB�� �����Ͱ� ���ϰ� ����
-- �ʹ� �뷮�� Ŀ�� ���� �޸𸮷� Ŀ���� �ȵǸ� -> ��ũ���� ã�ư���
-- Sorting�� ���� �Ͼ���� �ľ��ϰ� �־�� ��

-- Sorting�� �Ͼ ��
-- 1) SORT MERGE JOIN
	-- ����) �˰��� Ư���� Merge�ϱ� ���� Sort�� �ؾ� ��
-- 2) ORDER BY
-- 3) GROUP BY
-- 4) DISTINCT
-- 5) UNION
-- 6) RANKING WINDOWS FUNCTION
-- 7) MIN MAX

-- INDEX�� �� Ȱ���ϸ�, Sorting�� ���� �ʾƵ� ��.