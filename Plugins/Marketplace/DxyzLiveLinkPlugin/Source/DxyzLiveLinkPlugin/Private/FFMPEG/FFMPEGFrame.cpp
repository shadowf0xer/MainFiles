/*************************************************************************
* From https://github.com/bakjos/FFMPEGMedia (Giovanny Gutiérrez)
*************************************************************************/

#include "FFMPEGFrame.h"

FFMPEGFrame::FFMPEGFrame()
{
    mFrame = NULL;
    mSerial = 0;
    mPts = 0.0;           
    mDuration = 0.0;      
    mPos = 0;          
    mWidth = 0;
    mHeight = 0;
    mFormat = 0;    
    mUploaded = false;
    mFlip_v = false;
    mSub = {0};
}

FFMPEGFrame::~FFMPEGFrame()
{
    Destroy();
}

int FFMPEGFrame::Init () {
    Destroy();
    mFrame = av_frame_alloc();
    return mFrame == 0? 0: 1;
}

void FFMPEGFrame::Destroy() {
    if (mFrame != NULL) {
        UnRef();
        av_frame_free(&mFrame);
    }
    mFrame = NULL;
}

void FFMPEGFrame::UnRef() {
    if ( mFrame != NULL) {
        av_frame_unref(mFrame);
        avsubtitle_free(&mSub);
    }
}

int FFMPEGFrame::GetSerial() {
    return mSerial;
}

int64_t FFMPEGFrame::GetPos() {
    return mPos;
}

double FFMPEGFrame::GetPts() {
    return mPts;

}

double FFMPEGFrame::GetDuration() {
    return mDuration;
}

AVFrame* FFMPEGFrame::GetFrame() {
    return mFrame;
}

int FFMPEGFrame::GetWidth() {
    return mWidth;
}

int FFMPEGFrame::GetHeight() {
    return mHeight;
}

int FFMPEGFrame::GetFormat() {
    return mFormat;
}

AVRational FFMPEGFrame::GetSar() {
    return mSar;
}

bool FFMPEGFrame::IsUploaded() {
    return mUploaded;
}

bool FFMPEGFrame::IsVerticalFlip() {
    return mFlip_v;
}

AVSubtitle& FFMPEGFrame::GetSub() {
    return mSub;
}

double FFMPEGFrame::GetDifference(FFMPEGFrame* nextvp, double max) {

    if (mSerial == nextvp->mSerial) {
        double duration = nextvp->mPts - mPts;
        if (isnan(duration) || duration <= 0 || duration > max)
            return GetDuration();
        else
            return duration;
    }
    else {
        return 0.0;
    }
}

void FFMPEGFrame::UpdateFrame(AVFrame* src_frame, double pts, double duration, int64_t pos, int serial) {
    this->mSar = src_frame->sample_aspect_ratio;
    this->mUploaded = 0;
    
    this->mWidth = src_frame->width;
    this->mHeight = src_frame->height;
    this->mFormat = src_frame->format;
    
    this->mPts = pts;
    this->mDuration = duration;
    this->mPos = pos;
    this->mSerial = serial;
}


void FFMPEGFrame::UpdateSize(FFMPEGFrame *vp) {
    mWidth = vp->mWidth;
    mHeight = vp->mHeight;
}

void FFMPEGFrame::SetPts(double pts) {
    this->mPts = pts;
}

void FFMPEGFrame::SetSerial(int s) {
    this->mSerial = s;
}

void FFMPEGFrame::SetWidth(int w) {
    this->mWidth = w;
}

void FFMPEGFrame::SetHeight(int h) {
    this->mHeight = h;
}

void FFMPEGFrame::SetUploaded(bool u) {
    this->mUploaded = u;
}

void FFMPEGFrame::SetVerticalFlip(bool fv) {
    this->mFlip_v = fv;
}

void FFMPEGFrame::SetPos(int64_t p) {
    this->mPos = p;
}

void FFMPEGFrame::SetDuration(double d) {
    this->mDuration = d;
}

