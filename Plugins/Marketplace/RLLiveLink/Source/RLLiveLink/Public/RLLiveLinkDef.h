// Copyright 2019 The Reallusion Authors. All Rights Reserved.

#pragma once

enum class ELightType : int
{
    Directional = 0,
    Point,
    Spot,
    Rect
};

enum class ELightColor : int
{
    Red = 0,
    Green,
    Blue
};

TMap<ELightColor, FName> LightColorMap =
{
    { ELightColor::Red,   "Red" },
    { ELightColor::Green, "Green" },
    { ELightColor::Blue,  "Blue" }
};