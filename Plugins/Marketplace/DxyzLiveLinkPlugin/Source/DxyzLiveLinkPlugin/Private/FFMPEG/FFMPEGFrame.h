/*************************************************************************
* From https://github.com/bakjos/FFMPEGMedia (Giovanny Gutiérrez)
*************************************************************************/

#pragma once

extern "C" {
    #include <libavcodec/avcodec.h>
}

class FFMPEGFrame
{
public:
    FFMPEGFrame();
    ~FFMPEGFrame();

    int Init ();
    void Destroy();
    void UnRef();

    int GetSerial();
    int64_t GetPos();
    double GetPts();
    double GetDuration();
    AVFrame* GetFrame();
    int  GetWidth();
    int  GetHeight();
    int  GetFormat();
    AVRational  GetSar();
    bool  IsUploaded();
    bool  IsVerticalFlip();
    AVSubtitle& GetSub();
    
    void UpdateFrame(AVFrame* src_frame, double pts, double duration, int64_t pos, int serial);
    void UpdateSize(FFMPEGFrame *vp);

    
    void SetPos(int64_t pos);
    void SetDuration(double duration);
    void SetPts(double pts);
    void SetSerial(int serial);
    void SetWidth(int width);
    void SetHeight(int height);
    void SetUploaded(bool u);
    void SetVerticalFlip(bool v);

    double GetDifference( FFMPEGFrame* nextvp, double max );

private:
    AVFrame *mFrame;
    AVSubtitle mSub;
    int mSerial;
    double mPts;           /* presentation timestamp for the frame */
    double mDuration;      /* estimated duration of the frame */
    int64_t mPos;          /* byte position of the frame in the input file */
    int mWidth;
    int mHeight;
    int mFormat;
    AVRational mSar;
    bool mUploaded;
    bool mFlip_v;
};
