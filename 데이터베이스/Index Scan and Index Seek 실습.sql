
-- �ε��� ���� ��� (Access)
-- Index Scan vs Index Seek
-- Index Scan -> LEAF PAGE ���������� �˻�, ���� �ε����� Ȱ������ �ʴ� ���
-- Index Seek -> �ε����� Ȱ���ؼ� �����͸� �˻��ϴ� ���

-- �ε��� ���� Ȯ��
-- EXEC sp_helpindex '���̺� �̸�'

-- �ε��� ��ȣ Ȯ��
-- SELECT index_id, name
-- FROM sys.indexes
-- WHERE object_id = object_id('���̺� �̸�');

-- �ε��� ��ȸ
-- DBCC IND('�����ͺ��̽� �̸�', '���̺� �̸�', �ε��� ��ȣ); 

-- ���� �б� -> ���� �����͸� ã�� ���� ���� ������ ��
-- SET STATISTICS TIME ON;
-- SET STATISTICS IO ON;

-- INDEX SCAN
-- SELECT *
-- FROM ���̺�;

-- INDEX SEEK
-- SELECT *
-- FROM ���̺�
-- WHERE ����; -> �� ������ Ŭ�����͵� �ε����� ������ ��ü�� ����

-- INDEX SEEK + KEY LOOKUP
-- SELECT *
-- FROM ���̺�
-- WHERE ����; -> �� ������ ��Ŭ�����͵� �ε����� ������ ��ü�� ����

-- INDEX SCAN + KEY LOOKUP
-- SELECT TOP 5 *
-- FROM ���̺�
-- ORDER BY ��ü; -> ��Ŭ�����͵� �ε����� ������ ��