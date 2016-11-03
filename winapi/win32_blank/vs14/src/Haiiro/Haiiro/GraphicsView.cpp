// ヘッダのインクルード
#include "GraphicsView.h"	// グラフィックスビュークラス

// ウィンドウ作成関数Create.
BOOL CGraphicsView::Create(int x, int y, int iWidth, int iHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance) {

	// クラス名"GraphicsView"の子ウィンドウを作成.
	return CWindow::Create(_T("GraphicsView"), _T(""), WS_CHILD | WS_VISIBLE | WS_BORDER, x, y, iWidth, iHeight, hWndParent, hMenu, hInstance);	// CWindow::Createでクラス名"GraphicsView"の子ウィンドウを作成.

}

// OnCloseとOnDestroyの間に子ウィンドウなどを破棄するメンバ関数Destroy.
void CGraphicsView::Destroy() {

	// 破棄.
	DestroyWindow(m_hWnd);	// DestroyWindowでm_hWndを破棄.
	m_hWnd = NULL;	// m_hWndをNULLにする.

}

// ウィンドウ作成時のハンドラOnCreate.
int CGraphicsView::OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct) {

	// ウィンドウ作成成功
	return 0;	// 成功なら0を返す.

}

// ウィンドウ破棄時のハンドラOnDestroy
void CGraphicsView::OnDestroy() {

}

// ウィンドウを閉じる時のハンドラOnClose.
int CGraphicsView::OnClose() {

	// 0を返す.
	return 0;	// 0を返してウィンドウを閉じる.

}