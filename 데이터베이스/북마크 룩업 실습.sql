
-- �ϸ�ũ ��� -> ���� �߻��Ҽ��� �޸𸮿� ���ϰ� �ͼ� ������

-- Clustered�� ��� Index Seek�� ���� ���� ����.
-- NonClustered�� ���, �����Ͱ� Leaf Page�� ����
-- ���� �� �� �� Ÿ�� ������
	-- 1) RID -> Heap Table (Bookmark Lookup)
	-- 2) Key -> Clustered

-- ������ �ε����� �̿��ϴ� ���
-- SELECT *
-- FROM '���̺��̸�' WITH(INDEX('���� �ε��� �̸�'))

-- ����� ���̴� ���

-- (�ɼ� 1)
-- Covered Index ��� -> ���� �ε��� 

-- (�ɼ� 2)
-- CREATE NONCLUSTERED INDEX '���� �ε��� �̸�'
-- ON '���̺� �̸�'('��ü...') INCLUDE ('��ü...');

-- ���� ���� �ص� ����ٸ�

-- (�ɼ� 3)
-- Clustered Index Ȱ�� 
-- But Clustered Index�� ���̺�� 1���� ��� ����