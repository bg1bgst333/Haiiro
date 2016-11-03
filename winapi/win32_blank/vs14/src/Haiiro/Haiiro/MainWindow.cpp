// �w�b�_�̃C���N���[�h
#include "MainWindow.h"	// ���C���E�B���h�E�N���X

// OnClose��OnDestroy�̊ԂɎq�E�B���h�E�Ȃǂ�j�����郁���o�֐�Destroy.
void CMainWindow::Destroy() {

	// �q�E�B���h�E�̔j��.
	m_pGraphicsView->Destroy();	// m_pGraphicsView->Destroy�Ŕj��.

	// �O���t�B�b�N�X�r���[�̔j��.
	if (m_pGraphicsView != NULL) {	// NULL�łȂ����.

		// m_pGraphicsView�̔j��.
		delete m_pGraphicsView;	// delete��m_pGraphicsView�����.
		m_pGraphicsView = NULL;	// m_pGraphicsView��NULL�ɃZ�b�g.

	}

}

// �E�B���h�E�쐬���̃n���h��OnCreate.
int CMainWindow::OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct) {

	// �q�E�B���h�E�ƂȂ�O���t�B�b�N�X�r���[�I�u�W�F�N�g�̍쐬.
	m_pGraphicsView = new CGraphicsView();	// CGraphicsView�I�u�W�F�N�gm_pGraphicsView�̍쐬.

	// �q�E�B���h�E�̍쐬.
	m_pGraphicsView->Create(100, 100, 200, 200, hwnd, (HMENU)IDC_GRAPHICS_VIEW, lpCreateStruct->hInstance);	// m_pGraphicsView->Create�ŃO���t�B�b�N�X�r���[���쐬.

	// �E�B���h�E�쐬����
	return 0;	// �����Ȃ�0��Ԃ�.

}

// �E�B���h�E�j�����̃n���h��OnDestroy
void CMainWindow::OnDestroy() {

	// ���b�Z�[�W���[�v�I��.
	PostQuitMessage(0);	// PostQuitMessage�Ń��b�Z�[�W���[�v�𔲂�������.

}

// �E�B���h�E����鎞�̃n���h��OnClose.
int CMainWindow::OnClose() {

	// �q�E�B���h�E�̔j��.
	Destroy();	// Destroy�Ŏq�E�B���h�E�̔j��.
	return 0;	// 0��Ԃ��ƕ���.

}