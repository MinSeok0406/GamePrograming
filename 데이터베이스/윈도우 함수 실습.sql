USE BaseballData;

-- ������ �Լ�
-- ����� ���� ������ �������, �� �ະ�� ����� �ؼ� ��Į��(���� ����)���� ����ϴ� �Լ�

-- ~OVER([PARTITION] [ORDER BY] [ROWS])

-- ��ü �����͸� ���� ������ �����ϰ�, ���� ǥ��

SELECT *,
	ROW_NUMBER() OVER (ORDER BY salary DESC), -- ��#��ȣ
	RANK() OVER (ORDER BY salary DESC), -- ��ŷ
	DENSE_RANK() OVER (ORDER BY salary DESC), -- ��ŷ
	NTILE(100) OVER (ORDER BY salary DESC) -- ���� �� %
FROM salaries

-- PlayerID �� ������ ���� �ϰ� �ʹٸ�
SELECT *,
	RANK() OVER (PARTITION BY playerID ORDER BY salary DESC)
FROM salaries
ORDER BY playerID

-- LAG(�ٷ� ����) LEAD(�ٷ� ����)
SELECT *,
	RANK() OVER (PARTITION BY playerID ORDER BY salary DESC),
	LAG(salary) OVER (PARTITION BY playerID ORDER BY salary DESC) AS prevSalary,
	LEAD(salary) OVER (PARTITION BY playerID ORDER BY salary DESC) AS nextSalary
FROM salaries
ORDER BY playerID

-- FIRST_VALUE, LAST_VALUE
-- FRAME : FIRST~CURRENT
SELECT *,
	RANK() OVER (PARTITION BY playerID ORDER BY salary DESC),
	FIRST_VALUE(salary) OVER (PARTITION BY playerID 
								ORDER BY salary DESC
								ROWS BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW
								) AS best,
	LAST_VALUE(salary) OVER (PARTITION BY playerID 
								ORDER BY salary DESC
								ROWS BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING
								) AS worst
FROM salaries
ORDER BY playerID