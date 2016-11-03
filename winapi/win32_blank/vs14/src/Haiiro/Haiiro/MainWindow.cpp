// ヘッダのインクルード
#include "MainWindow.h"	// メインウィンドウクラス

// OnCloseとOnDestroyの間に子ウィンドウなどを破棄するメンバ関数Destroy.
void CMainWindow::Destroy() {

	// 子ウィンドウの破棄.
	m_pGraphicsView->Destroy();	// m_pGraphicsView->Destroyで破棄.

	// グラフィックスビューの破棄.
	if (m_pGraphicsView != NULL) {	// NULLでなければ.

		// m_pGraphicsViewの破棄.
		delete m_pGraphicsView;	// deleteでm_pGraphicsViewを解放.
		m_pGraphicsView = NULL;	// m_pGraphicsViewをNULLにセット.

	}

}

// ウィンドウ作成時のハンドラOnCreate.
int CMainWindow::OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct) {

	// 子ウィンドウとなるグラフィックスビューオブジェクトの作成.
	m_pGraphicsView = new CGraphicsView();	// CGraphicsViewオブジェクトm_pGraphicsViewの作成.

	// 子ウィンドウの作成.
	m_pGraphicsView->Create(100, 100, 200, 200, hwnd, (HMENU)IDC_GRAPHICS_VIEW, lpCreateStruct->hInstance);	// m_pGraphicsView->Createでグラフィックスビューを作成.

	// ウィンドウ作成成功
	return 0;	// 成功なら0を返す.

}

// ウィンドウ破棄時のハンドラOnDestroy
void CMainWindow::OnDestroy() {

	// メッセージループ終了.
	PostQuitMessage(0);	// PostQuitMessageでメッセージループを抜けさせる.

}

// ウィンドウを閉じる時のハンドラOnClose.
int CMainWindow::OnClose() {

	// 子ウィンドウの破棄.
	Destroy();	// Destroyで子ウィンドウの破棄.
	return 0;	// 0を返すと閉じる.

}