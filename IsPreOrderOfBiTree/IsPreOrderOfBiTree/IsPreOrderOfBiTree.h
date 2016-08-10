#pragma once
#include<string>

class IspreOrderOfBiTree {
	void Judge(std::string& preorder, int& i, int& len, bool& valid) {
		if (isdigit(preorder[i])) {	/// �жϵ�ǰ�ڵ��Ƿ����
			while (i <len && preorder[i++] != ',');
			if (i == len) valid = false;	///�ַ���������������������
			if (valid) Judge(preorder, i, len, valid); ///�ж��������Ƿ����
			else return;
			while (i <len && preorder[i++] != ',');
			if (i == len) valid = false;	///�ַ���������������������
			if (valid) Judge(preorder, i, len, valid);	///�ж��������Ƿ����
			else return;
		}
	}
public:
	bool isValidSerialization(std::string preorder) {
		int i(0), len(preorder.size());
		bool valid(true);
		Judge(preorder, i, len, valid);
		while (i <len && preorder[i] != ',')///	�ж��Ƿ��ж���ڵ�
			i++;
		if (i <len) return false;	///�ڵ������Ƕ�����
		return valid;
	}
};