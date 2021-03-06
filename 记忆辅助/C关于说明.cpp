// C关于说明.cpp : 实现文件
//

#include "stdafx.h"
#include "记忆辅助.h"
#include "C关于说明.h"
#include "afxdialogex.h"


// C关于说明 对话框

IMPLEMENT_DYNAMIC(C关于说明, CDialogEx)

C关于说明::C关于说明(CWnd* pParent /*=NULL*/)
	: CDialogEx(C关于说明::IDD, pParent)
	, 说明(_T(""))
{

}

C关于说明::~C关于说明()
{
}

void C关于说明::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, 说明);
}


BEGIN_MESSAGE_MAP(C关于说明, CDialogEx)
END_MESSAGE_MAP()


// C关于说明 消息处理程序


BOOL C关于说明::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	说明 =
		"注意：（必读）\r\n"
		"  1、该软件密码仅供一般防御\r\n"
		"  2、不要在写入数据时关闭软件！\r\n"
		"  3、若有数据错误尽量不要再增删改（找备份吧）\r\n"
		"  4、系统时间错误则不要使用软件\r\n"
		"  5、过了24点重启软件刷新复习数据\r\n"
		"  6、内容限制900字，最多支持32704条项目，数据太多可能会卡顿，请耐心等候\r\n"
		"  7、最多支持到";
	说明 += gongju.riqizhuanhua(32767); 
	说明 += "\r\n"
		"  8、今日已背项目不因删除项目减少，它可能影响以后复习的个数\r\n"
		"\r\n"
		"软件介绍：\r\n"
		"    制作该软件是为了降低复习成本和提高学习记忆效率。她会为你定制一套学习计划，"
		"只要将你想记忆的东西交给她，如同一位老师。\r\n"
		"    记忆辅助的学习算法参考了一本有关学习方法和记忆理论的畅销书《学习这回事》（注：该书由德国心理学家塞巴斯蒂安·莱特纳撰写）。"
		"只有当一个项目连续4次被记住才算学习成功，中途若出现未记住的情况则连续次数重新计算。根据人脑记忆的特点，每次记忆的时间间隔也会逐次拉长，"
		"逐步实现感觉记忆到短时记忆的转化，有点类似于平常的反复回想式背书，但背的次数与间隔更科学和可掌握。\r\n"
		"    复习阶段是根据学习的效果来判断未来再复习的时间，根据遗忘规律来设定间隔天数，将复习控制在遗忘点，达到短时记忆到长时记忆转换的目的。"
		"复习阶段是最为重要的阶段，在背大量数据的时候没有一个良好的复习规律是记不住的，比如背单词。在背了大量单词后，"
		"会很难掌握复习，因为不知道哪些是已经遗忘的，于是就要把所有单词复习一遍，严重浪费时间和打击积极性。\r\n"
		"\r\n"
		"应用场景：\r\n"
		"  1、工作中的各种材料、经验、事情、常识等等。\r\n"
		"  2、生活中的好句子、常识、知识等等。\r\n"
		"  3、英语中的单词、句子、句型等等。\r\n"
		"  4、课堂、报告上的笔记，书上的知识点等等。\r\n"
		"  5、和自己相关的稍微重要的...\r\n";
		"\r\n";
		"\r\n";
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}
