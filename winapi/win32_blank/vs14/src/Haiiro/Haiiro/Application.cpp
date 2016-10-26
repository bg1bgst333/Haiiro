// �w�b�_�̃C���N���[�h
#include "Application.h"	// �A�v���P�[�V�����N���X

// ���b�Z�[�W���[�v�֐�Run
int CApplication::Run() {

	// �ϐ��̐錾
	MSG msg;			// ���b�Z�[�W���msg
	LONG lCount = 0;	// ���[�v��lCount

	// ���b�Z�[�W���[�v
	while (TRUE) {

		// ���b�Z�[�W�����Ă��邩���m�F.
		if (PeekMessage(&msg, NULL, 0, 0, PM_NOREMOVE)) {	// PeekMessage�Ń��b�Z�[�W���m�F.

			// ���b�Z�[�W�擾
			if (GetMessage(&msg, NULL, 0, 0) > 0) {	// GetMessage�Ń��b�Z�[�W�擾.

				// �E�B���h�E���b�Z�[�W�̑��o
				DispatchMessage(&msg);	// DispatchMessage�ŃE�B���h�E�v���V�[�W���ɑ��o.
				TranslateMessage(&msg);	// TranslateMessage�ŉ��z�L�[���b�Z�[�W�𕶎��֕ϊ�.

			}
			else {	// WM_QUIT�܂��̓G���[.

				// ���b�Z�[�W���[�v�𔲂���.
				break;	// break�Ŕ�����.

			}

		}
		else {	// ���b�Z�[�W�����Ă��Ȃ��ꍇ.

			// �A�C�h������
			if (OnIdle(lCount)) {	// OnIdle��lCount��n����, ���̒��ŃA�C�h������������.
				lCount++;	// TRUE�ŕԂ��Ă��邽�т�lCount�𑝂₷.
			}

		}

	}

	// �I������
	return ExitInstance();	// ExitInstance�̖߂�l��Ԃ�.

}

// �C���X�^���X�I�������֐�ExitInstance
int CApplication::ExitInstance() {

	// ���C���E�B���h�E�I�u�W�F�N�g������Ή��.
	if (m_pMainWindow != NULL) {	// m_pMainWindow��NULL����Ȃ����.

		// ���.
		delete m_pMainWindow;	// delete��m_pMainWindow�����.
		m_pMainWindow = NULL;	// NULL���Z�b�g.

	}

	// �����Ȃ�0.
	return 0;	// 0��Ԃ�.

}

// �A�C�h�������֐�OnIdle
BOOL CApplication::OnIdle(LONG lCount) {

	// �Ƃ肠����TRUE.
	return TRUE;

}