// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0xB8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Internal_DrawTextureArguments
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  struct Internal_DrawTextureArguments/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Rect screenRect
    // Size: 0x10
    // Offset: 0x0
    UnityEngine::Rect screenRect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect sourceRect
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Rect sourceRect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public System.Int32 leftBorder
    // Size: 0x4
    // Offset: 0x20
    int leftBorder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 rightBorder
    // Size: 0x4
    // Offset: 0x24
    int rightBorder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 topBorder
    // Size: 0x4
    // Offset: 0x28
    int topBorder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 bottomBorder
    // Size: 0x4
    // Offset: 0x2C
    int bottomBorder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Color leftBorderColor
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Color leftBorderColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color rightBorderColor
    // Size: 0x10
    // Offset: 0x40
    UnityEngine::Color rightBorderColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color topBorderColor
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Color topBorderColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color bottomBorderColor
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color bottomBorderColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Vector4 borderWidths
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Vector4 borderWidths;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 cornerRadiuses
    // Size: 0x10
    // Offset: 0x90
    UnityEngine::Vector4 cornerRadiuses;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // public System.Boolean smoothCorners
    // Size: 0x1
    // Offset: 0xA0
    bool smoothCorners;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: smoothCorners and: pass
    char __padding13[0x3] = {};
    // public System.Int32 pass
    // Size: 0x4
    // Offset: 0xA4
    int pass;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Texture texture
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::Texture* texture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Material mat
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::Material* mat;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: Internal_DrawTextureArguments
    constexpr Internal_DrawTextureArguments(UnityEngine::Rect screenRect_ = {}, UnityEngine::Rect sourceRect_ = {}, int leftBorder_ = {}, int rightBorder_ = {}, int topBorder_ = {}, int bottomBorder_ = {}, UnityEngine::Color leftBorderColor_ = {}, UnityEngine::Color rightBorderColor_ = {}, UnityEngine::Color topBorderColor_ = {}, UnityEngine::Color bottomBorderColor_ = {}, UnityEngine::Color color_ = {}, UnityEngine::Vector4 borderWidths_ = {}, UnityEngine::Vector4 cornerRadiuses_ = {}, bool smoothCorners_ = {}, int pass_ = {}, UnityEngine::Texture* texture_ = {}, UnityEngine::Material* mat_ = {}) noexcept : screenRect{screenRect_}, sourceRect{sourceRect_}, leftBorder{leftBorder_}, rightBorder{rightBorder_}, topBorder{topBorder_}, bottomBorder{bottomBorder_}, leftBorderColor{leftBorderColor_}, rightBorderColor{rightBorderColor_}, topBorderColor{topBorderColor_}, bottomBorderColor{bottomBorderColor_}, color{color_}, borderWidths{borderWidths_}, cornerRadiuses{cornerRadiuses_}, smoothCorners{smoothCorners_}, pass{pass_}, texture{texture_}, mat{mat_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Rect screenRect
    UnityEngine::Rect& dyn_screenRect();
    // Get instance field reference: public UnityEngine.Rect sourceRect
    UnityEngine::Rect& dyn_sourceRect();
    // Get instance field reference: public System.Int32 leftBorder
    int& dyn_leftBorder();
    // Get instance field reference: public System.Int32 rightBorder
    int& dyn_rightBorder();
    // Get instance field reference: public System.Int32 topBorder
    int& dyn_topBorder();
    // Get instance field reference: public System.Int32 bottomBorder
    int& dyn_bottomBorder();
    // Get instance field reference: public UnityEngine.Color leftBorderColor
    UnityEngine::Color& dyn_leftBorderColor();
    // Get instance field reference: public UnityEngine.Color rightBorderColor
    UnityEngine::Color& dyn_rightBorderColor();
    // Get instance field reference: public UnityEngine.Color topBorderColor
    UnityEngine::Color& dyn_topBorderColor();
    // Get instance field reference: public UnityEngine.Color bottomBorderColor
    UnityEngine::Color& dyn_bottomBorderColor();
    // Get instance field reference: public UnityEngine.Color color
    UnityEngine::Color& dyn_color();
    // Get instance field reference: public UnityEngine.Vector4 borderWidths
    UnityEngine::Vector4& dyn_borderWidths();
    // Get instance field reference: public UnityEngine.Vector4 cornerRadiuses
    UnityEngine::Vector4& dyn_cornerRadiuses();
    // Get instance field reference: public System.Boolean smoothCorners
    bool& dyn_smoothCorners();
    // Get instance field reference: public System.Int32 pass
    int& dyn_pass();
    // Get instance field reference: public UnityEngine.Texture texture
    UnityEngine::Texture*& dyn_texture();
    // Get instance field reference: public UnityEngine.Material mat
    UnityEngine::Material*& dyn_mat();
  }; // UnityEngine.Internal_DrawTextureArguments
  #pragma pack(pop)
  static check_size<sizeof(Internal_DrawTextureArguments), 176 + sizeof(UnityEngine::Material*)> __UnityEngine_Internal_DrawTextureArgumentsSizeCheck;
  static_assert(sizeof(Internal_DrawTextureArguments) == 0xB8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Internal_DrawTextureArguments, "UnityEngine", "Internal_DrawTextureArguments");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
