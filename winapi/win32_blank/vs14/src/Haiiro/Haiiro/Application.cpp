// ヘッダのインクルード
#include "Application.h"	// アプリケーションクラス

// メッセージループ関数Run
int CApplication::Run() {

	// 変数の宣言
	MSG msg;			// メッセージ情報msg
	LONG lCount = 0;	// ループ回数lCount

	// メッセージループ
	while (TRUE) {

		// メッセージが来ているかを確認.
		if (PeekMessage(&msg, NULL, 0, 0, PM_NOREMOVE)) {	// PeekMessageでメッセージを確認.

			// メッセージ取得
			if (GetMessage(&msg, NULL, 0, 0) > 0) {	// GetMessageでメッセージ取得.

				// ウィンドウメッセージの送出
				DispatchMessage(&msg);	// DispatchMessageでウィンドウプロシージャに送出.
				TranslateMessage(&msg);	// TranslateMessageで仮想キーメッセージを文字へ変換.

			}
			else {	// WM_QUITまたはエラー.

				// メッセージループを抜ける.
				break;	// breakで抜ける.

			}

		}
		else {	// メッセージが来ていない場合.

			// アイドル処理
			if (OnIdle(lCount)) {	// OnIdleにlCountを渡して, この中でアイドル処理をする.
				lCount++;	// TRUEで返ってくるたびにlCountを増やす.
			}

		}

	}

	// 終了処理
	return ExitInstance();	// ExitInstanceの戻り値を返す.

}

// インスタンス終了処理関数ExitInstance
int CApplication::ExitInstance() {

	// メインウィンドウオブジェクトがあれば解放.
	if (m_pMainWindow != NULL) {	// m_pMainWindowがNULLじゃなければ.

		// 解放.
		delete m_pMainWindow;	// deleteでm_pMainWindowを解放.
		m_pMainWindow = NULL;	// NULLをセット.

	}

	// 成功なら0.
	return 0;	// 0を返す.

}

// アイドル処理関数OnIdle
BOOL CApplication::OnIdle(LONG lCount) {

	// とりあえずTRUE.
	return TRUE;

}