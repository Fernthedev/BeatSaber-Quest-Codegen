// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextureFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextureFormat/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TextureFormat
    constexpr TextureFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextureFormat Alpha8
    static constexpr const int Alpha8 = 1;
    // Get static field: static public UnityEngine.TextureFormat Alpha8
    static UnityEngine::TextureFormat _get_Alpha8();
    // Set static field: static public UnityEngine.TextureFormat Alpha8
    static void _set_Alpha8(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ARGB4444
    static constexpr const int ARGB4444 = 2;
    // Get static field: static public UnityEngine.TextureFormat ARGB4444
    static UnityEngine::TextureFormat _get_ARGB4444();
    // Set static field: static public UnityEngine.TextureFormat ARGB4444
    static void _set_ARGB4444(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGB24
    static constexpr const int RGB24 = 3;
    // Get static field: static public UnityEngine.TextureFormat RGB24
    static UnityEngine::TextureFormat _get_RGB24();
    // Set static field: static public UnityEngine.TextureFormat RGB24
    static void _set_RGB24(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGBA32
    static constexpr const int RGBA32 = 4;
    // Get static field: static public UnityEngine.TextureFormat RGBA32
    static UnityEngine::TextureFormat _get_RGBA32();
    // Set static field: static public UnityEngine.TextureFormat RGBA32
    static void _set_RGBA32(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ARGB32
    static constexpr const int ARGB32 = 5;
    // Get static field: static public UnityEngine.TextureFormat ARGB32
    static UnityEngine::TextureFormat _get_ARGB32();
    // Set static field: static public UnityEngine.TextureFormat ARGB32
    static void _set_ARGB32(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGB565
    static constexpr const int RGB565 = 7;
    // Get static field: static public UnityEngine.TextureFormat RGB565
    static UnityEngine::TextureFormat _get_RGB565();
    // Set static field: static public UnityEngine.TextureFormat RGB565
    static void _set_RGB565(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat R16
    static constexpr const int R16 = 9;
    // Get static field: static public UnityEngine.TextureFormat R16
    static UnityEngine::TextureFormat _get_R16();
    // Set static field: static public UnityEngine.TextureFormat R16
    static void _set_R16(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat DXT1
    static constexpr const int DXT1 = 10;
    // Get static field: static public UnityEngine.TextureFormat DXT1
    static UnityEngine::TextureFormat _get_DXT1();
    // Set static field: static public UnityEngine.TextureFormat DXT1
    static void _set_DXT1(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat DXT5
    static constexpr const int DXT5 = 12;
    // Get static field: static public UnityEngine.TextureFormat DXT5
    static UnityEngine::TextureFormat _get_DXT5();
    // Set static field: static public UnityEngine.TextureFormat DXT5
    static void _set_DXT5(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGBA4444
    static constexpr const int RGBA4444 = 13;
    // Get static field: static public UnityEngine.TextureFormat RGBA4444
    static UnityEngine::TextureFormat _get_RGBA4444();
    // Set static field: static public UnityEngine.TextureFormat RGBA4444
    static void _set_RGBA4444(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat BGRA32
    static constexpr const int BGRA32 = 14;
    // Get static field: static public UnityEngine.TextureFormat BGRA32
    static UnityEngine::TextureFormat _get_BGRA32();
    // Set static field: static public UnityEngine.TextureFormat BGRA32
    static void _set_BGRA32(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RHalf
    static constexpr const int RHalf = 15;
    // Get static field: static public UnityEngine.TextureFormat RHalf
    static UnityEngine::TextureFormat _get_RHalf();
    // Set static field: static public UnityEngine.TextureFormat RHalf
    static void _set_RHalf(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGHalf
    static constexpr const int RGHalf = 16;
    // Get static field: static public UnityEngine.TextureFormat RGHalf
    static UnityEngine::TextureFormat _get_RGHalf();
    // Set static field: static public UnityEngine.TextureFormat RGHalf
    static void _set_RGHalf(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGBAHalf
    static constexpr const int RGBAHalf = 17;
    // Get static field: static public UnityEngine.TextureFormat RGBAHalf
    static UnityEngine::TextureFormat _get_RGBAHalf();
    // Set static field: static public UnityEngine.TextureFormat RGBAHalf
    static void _set_RGBAHalf(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RFloat
    static constexpr const int RFloat = 18;
    // Get static field: static public UnityEngine.TextureFormat RFloat
    static UnityEngine::TextureFormat _get_RFloat();
    // Set static field: static public UnityEngine.TextureFormat RFloat
    static void _set_RFloat(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGFloat
    static constexpr const int RGFloat = 19;
    // Get static field: static public UnityEngine.TextureFormat RGFloat
    static UnityEngine::TextureFormat _get_RGFloat();
    // Set static field: static public UnityEngine.TextureFormat RGFloat
    static void _set_RGFloat(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGBAFloat
    static constexpr const int RGBAFloat = 20;
    // Get static field: static public UnityEngine.TextureFormat RGBAFloat
    static UnityEngine::TextureFormat _get_RGBAFloat();
    // Set static field: static public UnityEngine.TextureFormat RGBAFloat
    static void _set_RGBAFloat(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat YUY2
    static constexpr const int YUY2 = 21;
    // Get static field: static public UnityEngine.TextureFormat YUY2
    static UnityEngine::TextureFormat _get_YUY2();
    // Set static field: static public UnityEngine.TextureFormat YUY2
    static void _set_YUY2(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGB9e5Float
    static constexpr const int RGB9e5Float = 22;
    // Get static field: static public UnityEngine.TextureFormat RGB9e5Float
    static UnityEngine::TextureFormat _get_RGB9e5Float();
    // Set static field: static public UnityEngine.TextureFormat RGB9e5Float
    static void _set_RGB9e5Float(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat BC4
    static constexpr const int BC4 = 26;
    // Get static field: static public UnityEngine.TextureFormat BC4
    static UnityEngine::TextureFormat _get_BC4();
    // Set static field: static public UnityEngine.TextureFormat BC4
    static void _set_BC4(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat BC5
    static constexpr const int BC5 = 27;
    // Get static field: static public UnityEngine.TextureFormat BC5
    static UnityEngine::TextureFormat _get_BC5();
    // Set static field: static public UnityEngine.TextureFormat BC5
    static void _set_BC5(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat BC6H
    static constexpr const int BC6H = 24;
    // Get static field: static public UnityEngine.TextureFormat BC6H
    static UnityEngine::TextureFormat _get_BC6H();
    // Set static field: static public UnityEngine.TextureFormat BC6H
    static void _set_BC6H(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat BC7
    static constexpr const int BC7 = 25;
    // Get static field: static public UnityEngine.TextureFormat BC7
    static UnityEngine::TextureFormat _get_BC7();
    // Set static field: static public UnityEngine.TextureFormat BC7
    static void _set_BC7(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat DXT1Crunched
    static constexpr const int DXT1Crunched = 28;
    // Get static field: static public UnityEngine.TextureFormat DXT1Crunched
    static UnityEngine::TextureFormat _get_DXT1Crunched();
    // Set static field: static public UnityEngine.TextureFormat DXT1Crunched
    static void _set_DXT1Crunched(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat DXT5Crunched
    static constexpr const int DXT5Crunched = 29;
    // Get static field: static public UnityEngine.TextureFormat DXT5Crunched
    static UnityEngine::TextureFormat _get_DXT5Crunched();
    // Set static field: static public UnityEngine.TextureFormat DXT5Crunched
    static void _set_DXT5Crunched(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat PVRTC_RGB2
    static constexpr const int PVRTC_RGB2 = 30;
    // Get static field: static public UnityEngine.TextureFormat PVRTC_RGB2
    static UnityEngine::TextureFormat _get_PVRTC_RGB2();
    // Set static field: static public UnityEngine.TextureFormat PVRTC_RGB2
    static void _set_PVRTC_RGB2(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat PVRTC_RGBA2
    static constexpr const int PVRTC_RGBA2 = 31;
    // Get static field: static public UnityEngine.TextureFormat PVRTC_RGBA2
    static UnityEngine::TextureFormat _get_PVRTC_RGBA2();
    // Set static field: static public UnityEngine.TextureFormat PVRTC_RGBA2
    static void _set_PVRTC_RGBA2(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat PVRTC_RGB4
    static constexpr const int PVRTC_RGB4 = 32;
    // Get static field: static public UnityEngine.TextureFormat PVRTC_RGB4
    static UnityEngine::TextureFormat _get_PVRTC_RGB4();
    // Set static field: static public UnityEngine.TextureFormat PVRTC_RGB4
    static void _set_PVRTC_RGB4(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat PVRTC_RGBA4
    static constexpr const int PVRTC_RGBA4 = 33;
    // Get static field: static public UnityEngine.TextureFormat PVRTC_RGBA4
    static UnityEngine::TextureFormat _get_PVRTC_RGBA4();
    // Set static field: static public UnityEngine.TextureFormat PVRTC_RGBA4
    static void _set_PVRTC_RGBA4(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ETC_RGB4
    static constexpr const int ETC_RGB4 = 34;
    // Get static field: static public UnityEngine.TextureFormat ETC_RGB4
    static UnityEngine::TextureFormat _get_ETC_RGB4();
    // Set static field: static public UnityEngine.TextureFormat ETC_RGB4
    static void _set_ETC_RGB4(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat EAC_R
    static constexpr const int EAC_R = 41;
    // Get static field: static public UnityEngine.TextureFormat EAC_R
    static UnityEngine::TextureFormat _get_EAC_R();
    // Set static field: static public UnityEngine.TextureFormat EAC_R
    static void _set_EAC_R(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat EAC_R_SIGNED
    static constexpr const int EAC_R_SIGNED = 42;
    // Get static field: static public UnityEngine.TextureFormat EAC_R_SIGNED
    static UnityEngine::TextureFormat _get_EAC_R_SIGNED();
    // Set static field: static public UnityEngine.TextureFormat EAC_R_SIGNED
    static void _set_EAC_R_SIGNED(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat EAC_RG
    static constexpr const int EAC_RG = 43;
    // Get static field: static public UnityEngine.TextureFormat EAC_RG
    static UnityEngine::TextureFormat _get_EAC_RG();
    // Set static field: static public UnityEngine.TextureFormat EAC_RG
    static void _set_EAC_RG(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat EAC_RG_SIGNED
    static constexpr const int EAC_RG_SIGNED = 44;
    // Get static field: static public UnityEngine.TextureFormat EAC_RG_SIGNED
    static UnityEngine::TextureFormat _get_EAC_RG_SIGNED();
    // Set static field: static public UnityEngine.TextureFormat EAC_RG_SIGNED
    static void _set_EAC_RG_SIGNED(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ETC2_RGB
    static constexpr const int ETC2_RGB = 45;
    // Get static field: static public UnityEngine.TextureFormat ETC2_RGB
    static UnityEngine::TextureFormat _get_ETC2_RGB();
    // Set static field: static public UnityEngine.TextureFormat ETC2_RGB
    static void _set_ETC2_RGB(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ETC2_RGBA1
    static constexpr const int ETC2_RGBA1 = 46;
    // Get static field: static public UnityEngine.TextureFormat ETC2_RGBA1
    static UnityEngine::TextureFormat _get_ETC2_RGBA1();
    // Set static field: static public UnityEngine.TextureFormat ETC2_RGBA1
    static void _set_ETC2_RGBA1(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ETC2_RGBA8
    static constexpr const int ETC2_RGBA8 = 47;
    // Get static field: static public UnityEngine.TextureFormat ETC2_RGBA8
    static UnityEngine::TextureFormat _get_ETC2_RGBA8();
    // Set static field: static public UnityEngine.TextureFormat ETC2_RGBA8
    static void _set_ETC2_RGBA8(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_4x4
    static constexpr const int ASTC_4x4 = 48;
    // Get static field: static public UnityEngine.TextureFormat ASTC_4x4
    static UnityEngine::TextureFormat _get_ASTC_4x4();
    // Set static field: static public UnityEngine.TextureFormat ASTC_4x4
    static void _set_ASTC_4x4(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_5x5
    static constexpr const int ASTC_5x5 = 49;
    // Get static field: static public UnityEngine.TextureFormat ASTC_5x5
    static UnityEngine::TextureFormat _get_ASTC_5x5();
    // Set static field: static public UnityEngine.TextureFormat ASTC_5x5
    static void _set_ASTC_5x5(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_6x6
    static constexpr const int ASTC_6x6 = 50;
    // Get static field: static public UnityEngine.TextureFormat ASTC_6x6
    static UnityEngine::TextureFormat _get_ASTC_6x6();
    // Set static field: static public UnityEngine.TextureFormat ASTC_6x6
    static void _set_ASTC_6x6(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_8x8
    static constexpr const int ASTC_8x8 = 51;
    // Get static field: static public UnityEngine.TextureFormat ASTC_8x8
    static UnityEngine::TextureFormat _get_ASTC_8x8();
    // Set static field: static public UnityEngine.TextureFormat ASTC_8x8
    static void _set_ASTC_8x8(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_10x10
    static constexpr const int ASTC_10x10 = 52;
    // Get static field: static public UnityEngine.TextureFormat ASTC_10x10
    static UnityEngine::TextureFormat _get_ASTC_10x10();
    // Set static field: static public UnityEngine.TextureFormat ASTC_10x10
    static void _set_ASTC_10x10(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_12x12
    static constexpr const int ASTC_12x12 = 53;
    // Get static field: static public UnityEngine.TextureFormat ASTC_12x12
    static UnityEngine::TextureFormat _get_ASTC_12x12();
    // Set static field: static public UnityEngine.TextureFormat ASTC_12x12
    static void _set_ASTC_12x12(UnityEngine::TextureFormat value);
    // [ObsoleteAttribute] Offset: 0xDB26A4
    // static field const value: static public UnityEngine.TextureFormat ETC_RGB4_3DS
    static constexpr const int ETC_RGB4_3DS = 60;
    // Get static field: static public UnityEngine.TextureFormat ETC_RGB4_3DS
    static UnityEngine::TextureFormat _get_ETC_RGB4_3DS();
    // Set static field: static public UnityEngine.TextureFormat ETC_RGB4_3DS
    static void _set_ETC_RGB4_3DS(UnityEngine::TextureFormat value);
    // [ObsoleteAttribute] Offset: 0xDB26DC
    // static field const value: static public UnityEngine.TextureFormat ETC_RGBA8_3DS
    static constexpr const int ETC_RGBA8_3DS = 61;
    // Get static field: static public UnityEngine.TextureFormat ETC_RGBA8_3DS
    static UnityEngine::TextureFormat _get_ETC_RGBA8_3DS();
    // Set static field: static public UnityEngine.TextureFormat ETC_RGBA8_3DS
    static void _set_ETC_RGBA8_3DS(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RG16
    static constexpr const int RG16 = 62;
    // Get static field: static public UnityEngine.TextureFormat RG16
    static UnityEngine::TextureFormat _get_RG16();
    // Set static field: static public UnityEngine.TextureFormat RG16
    static void _set_RG16(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat R8
    static constexpr const int R8 = 63;
    // Get static field: static public UnityEngine.TextureFormat R8
    static UnityEngine::TextureFormat _get_R8();
    // Set static field: static public UnityEngine.TextureFormat R8
    static void _set_R8(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ETC_RGB4Crunched
    static constexpr const int ETC_RGB4Crunched = 64;
    // Get static field: static public UnityEngine.TextureFormat ETC_RGB4Crunched
    static UnityEngine::TextureFormat _get_ETC_RGB4Crunched();
    // Set static field: static public UnityEngine.TextureFormat ETC_RGB4Crunched
    static void _set_ETC_RGB4Crunched(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ETC2_RGBA8Crunched
    static constexpr const int ETC2_RGBA8Crunched = 65;
    // Get static field: static public UnityEngine.TextureFormat ETC2_RGBA8Crunched
    static UnityEngine::TextureFormat _get_ETC2_RGBA8Crunched();
    // Set static field: static public UnityEngine.TextureFormat ETC2_RGBA8Crunched
    static void _set_ETC2_RGBA8Crunched(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_HDR_4x4
    static constexpr const int ASTC_HDR_4x4 = 66;
    // Get static field: static public UnityEngine.TextureFormat ASTC_HDR_4x4
    static UnityEngine::TextureFormat _get_ASTC_HDR_4x4();
    // Set static field: static public UnityEngine.TextureFormat ASTC_HDR_4x4
    static void _set_ASTC_HDR_4x4(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_HDR_5x5
    static constexpr const int ASTC_HDR_5x5 = 67;
    // Get static field: static public UnityEngine.TextureFormat ASTC_HDR_5x5
    static UnityEngine::TextureFormat _get_ASTC_HDR_5x5();
    // Set static field: static public UnityEngine.TextureFormat ASTC_HDR_5x5
    static void _set_ASTC_HDR_5x5(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_HDR_6x6
    static constexpr const int ASTC_HDR_6x6 = 68;
    // Get static field: static public UnityEngine.TextureFormat ASTC_HDR_6x6
    static UnityEngine::TextureFormat _get_ASTC_HDR_6x6();
    // Set static field: static public UnityEngine.TextureFormat ASTC_HDR_6x6
    static void _set_ASTC_HDR_6x6(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_HDR_8x8
    static constexpr const int ASTC_HDR_8x8 = 69;
    // Get static field: static public UnityEngine.TextureFormat ASTC_HDR_8x8
    static UnityEngine::TextureFormat _get_ASTC_HDR_8x8();
    // Set static field: static public UnityEngine.TextureFormat ASTC_HDR_8x8
    static void _set_ASTC_HDR_8x8(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_HDR_10x10
    static constexpr const int ASTC_HDR_10x10 = 70;
    // Get static field: static public UnityEngine.TextureFormat ASTC_HDR_10x10
    static UnityEngine::TextureFormat _get_ASTC_HDR_10x10();
    // Set static field: static public UnityEngine.TextureFormat ASTC_HDR_10x10
    static void _set_ASTC_HDR_10x10(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_HDR_12x12
    static constexpr const int ASTC_HDR_12x12 = 71;
    // Get static field: static public UnityEngine.TextureFormat ASTC_HDR_12x12
    static UnityEngine::TextureFormat _get_ASTC_HDR_12x12();
    // Set static field: static public UnityEngine.TextureFormat ASTC_HDR_12x12
    static void _set_ASTC_HDR_12x12(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RG32
    static constexpr const int RG32 = 72;
    // Get static field: static public UnityEngine.TextureFormat RG32
    static UnityEngine::TextureFormat _get_RG32();
    // Set static field: static public UnityEngine.TextureFormat RG32
    static void _set_RG32(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGB48
    static constexpr const int RGB48 = 73;
    // Get static field: static public UnityEngine.TextureFormat RGB48
    static UnityEngine::TextureFormat _get_RGB48();
    // Set static field: static public UnityEngine.TextureFormat RGB48
    static void _set_RGB48(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat RGBA64
    static constexpr const int RGBA64 = 74;
    // Get static field: static public UnityEngine.TextureFormat RGBA64
    static UnityEngine::TextureFormat _get_RGBA64();
    // Set static field: static public UnityEngine.TextureFormat RGBA64
    static void _set_RGBA64(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGB_4x4
    static constexpr const int ASTC_RGB_4x4 = 48;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGB_4x4
    static UnityEngine::TextureFormat _get_ASTC_RGB_4x4();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGB_4x4
    static void _set_ASTC_RGB_4x4(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGB_5x5
    static constexpr const int ASTC_RGB_5x5 = 49;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGB_5x5
    static UnityEngine::TextureFormat _get_ASTC_RGB_5x5();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGB_5x5
    static void _set_ASTC_RGB_5x5(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGB_6x6
    static constexpr const int ASTC_RGB_6x6 = 50;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGB_6x6
    static UnityEngine::TextureFormat _get_ASTC_RGB_6x6();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGB_6x6
    static void _set_ASTC_RGB_6x6(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGB_8x8
    static constexpr const int ASTC_RGB_8x8 = 51;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGB_8x8
    static UnityEngine::TextureFormat _get_ASTC_RGB_8x8();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGB_8x8
    static void _set_ASTC_RGB_8x8(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGB_10x10
    static constexpr const int ASTC_RGB_10x10 = 52;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGB_10x10
    static UnityEngine::TextureFormat _get_ASTC_RGB_10x10();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGB_10x10
    static void _set_ASTC_RGB_10x10(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGB_12x12
    static constexpr const int ASTC_RGB_12x12 = 53;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGB_12x12
    static UnityEngine::TextureFormat _get_ASTC_RGB_12x12();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGB_12x12
    static void _set_ASTC_RGB_12x12(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGBA_4x4
    static constexpr const int ASTC_RGBA_4x4 = 54;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGBA_4x4
    static UnityEngine::TextureFormat _get_ASTC_RGBA_4x4();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGBA_4x4
    static void _set_ASTC_RGBA_4x4(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGBA_5x5
    static constexpr const int ASTC_RGBA_5x5 = 55;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGBA_5x5
    static UnityEngine::TextureFormat _get_ASTC_RGBA_5x5();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGBA_5x5
    static void _set_ASTC_RGBA_5x5(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGBA_6x6
    static constexpr const int ASTC_RGBA_6x6 = 56;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGBA_6x6
    static UnityEngine::TextureFormat _get_ASTC_RGBA_6x6();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGBA_6x6
    static void _set_ASTC_RGBA_6x6(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGBA_8x8
    static constexpr const int ASTC_RGBA_8x8 = 57;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGBA_8x8
    static UnityEngine::TextureFormat _get_ASTC_RGBA_8x8();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGBA_8x8
    static void _set_ASTC_RGBA_8x8(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGBA_10x10
    static constexpr const int ASTC_RGBA_10x10 = 58;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGBA_10x10
    static UnityEngine::TextureFormat _get_ASTC_RGBA_10x10();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGBA_10x10
    static void _set_ASTC_RGBA_10x10(UnityEngine::TextureFormat value);
    // static field const value: static public UnityEngine.TextureFormat ASTC_RGBA_12x12
    static constexpr const int ASTC_RGBA_12x12 = 59;
    // Get static field: static public UnityEngine.TextureFormat ASTC_RGBA_12x12
    static UnityEngine::TextureFormat _get_ASTC_RGBA_12x12();
    // Set static field: static public UnityEngine.TextureFormat ASTC_RGBA_12x12
    static void _set_ASTC_RGBA_12x12(UnityEngine::TextureFormat value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // UnityEngine.TextureFormat
  #pragma pack(pop)
  static check_size<sizeof(TextureFormat), 0 + sizeof(int)> __UnityEngine_TextureFormatSizeCheck;
  static_assert(sizeof(TextureFormat) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextureFormat, "UnityEngine", "TextureFormat");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
