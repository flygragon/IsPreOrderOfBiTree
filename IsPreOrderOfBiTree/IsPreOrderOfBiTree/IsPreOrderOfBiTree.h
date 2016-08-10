#pragma once
#include<string>

class IspreOrderOfBiTree {
	void Judge(std::string& preorder, int& i, int& len, bool& valid) {
		if (isdigit(preorder[i])) {	/// 判断当前节点是否存在
			while (i <len && preorder[i++] != ',');
			if (i == len) valid = false;	///字符串结束，左子树不存在
			if (valid) Judge(preorder, i, len, valid); ///判断左子树是否存在
			else return;
			while (i <len && preorder[i++] != ',');
			if (i == len) valid = false;	///字符串结束，右子树不存在
			if (valid) Judge(preorder, i, len, valid);	///判断右子树是否存在
			else return;
		}
	}
public:
	bool isValidSerialization(std::string preorder) {
		int i(0), len(preorder.size());
		bool valid(true);
		Judge(preorder, i, len, valid);
		while (i <len && preorder[i] != ',')///	判断是否有多余节点
			i++;
		if (i <len) return false;	///节点多余则非二叉树
		return valid;
	}
};