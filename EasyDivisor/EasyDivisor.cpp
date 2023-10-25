﻿// EasyDivisor.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

int main()
{
    int maxNum = 0; // 調べる範囲（最大値）
    int count = 0;  // 約数を８個もつ数の個数

    // 正しい値を入力させる
    while (maxNum < 1 || maxNum > 200 || maxNum % 2 == 0)
    {
        printf("最大値(１以上１９９以下の奇数)を入力\n> ");
        cin >> maxNum;
    }
    
    // 奇数のみを調べるので２でインクリメント
    for (int i = 1; i <= maxNum; i += 2)
    {
        // 約数の数をカウント
        int divisor = 0;

        // １～その数自体の範囲で約数の個数を調べる
        for (int j = 1; j <= i; ++j)
        {
            // 割り切れたら約数をカウント
            if (i % j == 0)
            {
                ++divisor;
            }
            // 約数の数が８個を超えたらアウト
            if (divisor > 8)
            {
                continue;
            }
        }

        // 約数の数が８個ならカウントする
        if (divisor == 8)
        {
            ++count;
        }
    }

    printf("約数を８個持つ奇数の数は %d 個です", count);
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
