SELECT *
FROM BaseballData.dbo.players
WHERE birthYear != 1866 AND birthCountry != 'USA';

SELECT *
FROM BaseballData.dbo.players
WHERE birthYear LIKE '19%';

-- AND�� OR���� �켱������ ����
-- LIKE ���ڿ�
-- % ������ ���ڿ�
-- _ ������ ���� 1��