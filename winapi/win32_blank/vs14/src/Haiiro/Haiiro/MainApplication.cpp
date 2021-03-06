// ヘッダのインクルード
#include "MainApplication.h"	// メインアプリケーションクラス
#include "MainWindow.h"	// メインウィンドウクラス

// インスタンス初期化関数InitInstance
BOOL CMainApplication::InitInstance(HINSTANCE hInstance, LPTSTR lpCmdLine, int nShowCmd) {

	// ウィンドウクラスの登録.
	CWindow::RegisterClass(hInstance, _T("Haiiro_MainWindow"));	// CWindow::RegisterClassで"Haiiro_MainWindow"をウィンドウクラスに登録.
	CWindow::RegisterClass(hInstance, _T("GraphicsView"));	// CWindow::RegisterClassで"GraphicsView"をウィンドウクラスに登録.

	// CMainWindowオブジェクトの作成.
	m_pMainWindow = new CMainWindow();	// CMainWindowオブジェクトを作成し, そのポインタをm_pMainWindowに格納.

	// ウィンドウの作成.
	BOOL bRet = m_pMainWindow->Create(_T("Haiiro_MainWindow"), _T("Haiiro"), hInstance);	// m_pMainWindow->Createでウィンドウ作成.
	if (!bRet) {	// FALSEなら失敗.

		// 失敗ならエラー処理.
		return FALSE;	// FALSEを返す.

	}

	// ウィンドウの表示
	m_pMainWindow->ShowWindow(SW_SHOW);	// m_pMainWindow->ShowWindowでウィンドウを表示.

	// 成功ならTRUE.
	return TRUE;	// TRUEを返す.

}