USE GameDB;

SELECT *
FROM accounts

-- TRAN ������� ������, �ڵ����� COMMIT
INSERT INTO accounts VALUES(1, 'MINSEOK', 100, GETUTCDATE(), GETUTCDATE());

-- BEGIN TRAN
-- COMMIT
-- ROLLBACK

-- ����/���� ���ο� ���� COMMIT (=COMMIT�� �������� �ϰڴ�)
BEGIN TRAN;
	INSERT INTO accounts VALUES(1, 'MINSEOK', 100, GETUTCDATE(), GETUTCDATE());
ROLLBACK;

BEGIN TRAN;
	INSERT INTO accounts VALUES(2, 'MINSEOK2', 100, GETUTCDATE(), GETUTCDATE());
COMMIT;

-- ����
BEGIN TRY
	BEGIN TRAN;
		INSERT INTO accounts VALUES(1, 'MINSEOK', 100, GETUTCDATE(), GETUTCDATE());
		INSERT INTO accounts VALUES(2, 'MINSEOK2', 100, GETUTCDATE(), GETUTCDATE());
	COMMIT;
END TRY
BEGIN CATCH
	IF @@TRANCOUNT > 0	-- ���� Ȱ��ȭ�� Ʈ������� ���� ��ȯ
		ROLLBACK
END CATCH

-- TRAN ����� �� ������ ��
-- TRAN �ȿ��� ��!!! ���������� ����� �ֵ鸸 ����
-- C# List<Player> List<Salary> ���������� ���� -> lock�� ��� ���� -> writelock (��ȣ��Ÿ���� ��) readlock (���� ��)

