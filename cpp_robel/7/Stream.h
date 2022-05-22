#ifndef STREAM_H_20210821_1220_HOVHEAK_INCLUDE_
#define STREAM_H_20210821_1220_HOVHEAK_INCLUDE_

//0以上の値を順次取得していく処理を行うための基底クラス
class Stream{
public:
    Stream(); //コンストラクタ
    virtual ~Stream(); //仮想デストラクタ
    double Get() const; //設定された値を取得
    bool Set(); //値を設定

protected:
    virtual void SetBase() =0; //値を設定する基本関数
    double m_n; //現在の値
};

#endif // #ifndef STREAM_H_20210821_1220_HOVHEAK_INCLUDE_