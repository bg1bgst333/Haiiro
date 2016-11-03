// �w�b�_�̃C���N���[�h
#include "GraphicsView.h"	// �O���t�B�b�N�X�r���[�N���X

// �E�B���h�E�쐬�֐�Create.
BOOL CGraphicsView::Create(int x, int y, int iWidth, int iHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance) {

	// �N���X��"GraphicsView"�̎q�E�B���h�E���쐬.
	return CWindow::Create(_T("GraphicsView"), _T(""), WS_CHILD | WS_VISIBLE | WS_BORDER, x, y, iWidth, iHeight, hWndParent, hMenu, hInstance);	// CWindow::Create�ŃN���X��"GraphicsView"�̎q�E�B���h�E���쐬.

}

// OnClose��OnDestroy�̊ԂɎq�E�B���h�E�Ȃǂ�j�����郁���o�֐�Destroy.
void CGraphicsView::Destroy() {

	// �j��.
	DestroyWindow(m_hWnd);	// DestroyWindow��m_hWnd��j��.
	m_hWnd = NULL;	// m_hWnd��NULL�ɂ���.

}

// �E�B���h�E�쐬���̃n���h��OnCreate.
int CGraphicsView::OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct) {

	// �E�B���h�E�쐬����
	return 0;	// �����Ȃ�0��Ԃ�.

}

// �E�B���h�E�j�����̃n���h��OnDestroy
void CGraphicsView::OnDestroy() {

}

// �E�B���h�E����鎞�̃n���h��OnClose.
int CGraphicsView::OnClose() {

	// 0��Ԃ�.
	return 0;	// 0��Ԃ��ăE�B���h�E�����.

}