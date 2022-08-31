// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Skipping declaration: Fill because it is already included!
  // Skipping declaration: Anchor because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: AutoUnwrapSettings
  struct AutoUnwrapSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::AutoUnwrapSettings, "UnityEngine.ProBuilder", "AutoUnwrapSettings");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.AutoUnwrapSettings
  // [TokenAttribute] Offset: FFFFFFFF
  struct AutoUnwrapSettings/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor
    struct Anchor;
    // Nested type: ::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill
    struct Fill;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor
    // [TokenAttribute] Offset: FFFFFFFF
    struct Anchor/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Anchor
      constexpr Anchor(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor UpperLeft
      static constexpr const int UpperLeft = 0;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor UpperLeft
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_UpperLeft();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor UpperLeft
      static void _set_UpperLeft(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor UpperCenter
      static constexpr const int UpperCenter = 1;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor UpperCenter
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_UpperCenter();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor UpperCenter
      static void _set_UpperCenter(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor UpperRight
      static constexpr const int UpperRight = 2;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor UpperRight
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_UpperRight();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor UpperRight
      static void _set_UpperRight(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor MiddleLeft
      static constexpr const int MiddleLeft = 3;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor MiddleLeft
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_MiddleLeft();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor MiddleLeft
      static void _set_MiddleLeft(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor MiddleCenter
      static constexpr const int MiddleCenter = 4;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor MiddleCenter
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_MiddleCenter();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor MiddleCenter
      static void _set_MiddleCenter(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor MiddleRight
      static constexpr const int MiddleRight = 5;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor MiddleRight
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_MiddleRight();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor MiddleRight
      static void _set_MiddleRight(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor LowerLeft
      static constexpr const int LowerLeft = 6;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor LowerLeft
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_LowerLeft();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor LowerLeft
      static void _set_LowerLeft(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor LowerCenter
      static constexpr const int LowerCenter = 7;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor LowerCenter
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_LowerCenter();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor LowerCenter
      static void _set_LowerCenter(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor LowerRight
      static constexpr const int LowerRight = 8;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor LowerRight
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_LowerRight();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor LowerRight
      static void _set_LowerRight(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor None
      static constexpr const int None = 9;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor None
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_None();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor None
      static void _set_None(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor
    #pragma pack(pop)
    static check_size<sizeof(AutoUnwrapSettings::Anchor), 0 + sizeof(int)> __UnityEngine_ProBuilder_AutoUnwrapSettings_AnchorSizeCheck;
    static_assert(sizeof(AutoUnwrapSettings::Anchor) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill
    // [TokenAttribute] Offset: FFFFFFFF
    struct Fill/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Fill
      constexpr Fill(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill Fit
      static constexpr const int Fit = 0;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill Fit
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill _get_Fit();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill Fit
      static void _set_Fit(::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill Tile
      static constexpr const int Tile = 1;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill Tile
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill _get_Tile();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill Tile
      static void _set_Tile(::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill Stretch
      static constexpr const int Stretch = 2;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill Stretch
      static ::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill _get_Stretch();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill Stretch
      static void _set_Stretch(::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill
    #pragma pack(pop)
    static check_size<sizeof(AutoUnwrapSettings::Fill), 0 + sizeof(int)> __UnityEngine_ProBuilder_AutoUnwrapSettings_FillSizeCheck;
    static_assert(sizeof(AutoUnwrapSettings::Fill) == 0x4);
    public:
    // [FormerlySerializedAsAttribute] Offset: 0x1117324
    // private System.Boolean m_UseWorldSpace
    // Size: 0x1
    // Offset: 0x0
    bool m_UseWorldSpace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [FormerlySerializedAsAttribute] Offset: 0x1117370
    // private System.Boolean m_FlipU
    // Size: 0x1
    // Offset: 0x1
    bool m_FlipU;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [FormerlySerializedAsAttribute] Offset: 0x11173BC
    // private System.Boolean m_FlipV
    // Size: 0x1
    // Offset: 0x2
    bool m_FlipV;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [FormerlySerializedAsAttribute] Offset: 0x1117408
    // private System.Boolean m_SwapUV
    // Size: 0x1
    // Offset: 0x3
    bool m_SwapUV;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [FormerlySerializedAsAttribute] Offset: 0x1117454
    // private UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill m_Fill
    // Size: 0x4
    // Offset: 0x4
    ::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill m_Fill;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0x11174A0
    // private UnityEngine.Vector2 m_Scale
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Vector2 m_Scale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x11174EC
    // private UnityEngine.Vector2 m_Offset
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2 m_Offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x1117538
    // private System.Single m_Rotation
    // Size: 0x4
    // Offset: 0x18
    float m_Rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0x1117584
    // private UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor m_Anchor
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor m_Anchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor) == 0x4);
    public:
    // Creating value type constructor for type: AutoUnwrapSettings
    constexpr AutoUnwrapSettings(bool m_UseWorldSpace_ = {}, bool m_FlipU_ = {}, bool m_FlipV_ = {}, bool m_SwapUV_ = {}, ::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill m_Fill_ = {}, ::UnityEngine::Vector2 m_Scale_ = {}, ::UnityEngine::Vector2 m_Offset_ = {}, float m_Rotation_ = {}, ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor m_Anchor_ = {}) noexcept : m_UseWorldSpace{m_UseWorldSpace_}, m_FlipU{m_FlipU_}, m_FlipV{m_FlipV_}, m_SwapUV{m_SwapUV_}, m_Fill{m_Fill_}, m_Scale{m_Scale_}, m_Offset{m_Offset_}, m_Rotation{m_Rotation_}, m_Anchor{m_Anchor_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Boolean m_UseWorldSpace
    [[deprecated("Use field access instead!")]] bool& dyn_m_UseWorldSpace();
    // Get instance field reference: private System.Boolean m_FlipU
    [[deprecated("Use field access instead!")]] bool& dyn_m_FlipU();
    // Get instance field reference: private System.Boolean m_FlipV
    [[deprecated("Use field access instead!")]] bool& dyn_m_FlipV();
    // Get instance field reference: private System.Boolean m_SwapUV
    [[deprecated("Use field access instead!")]] bool& dyn_m_SwapUV();
    // Get instance field reference: private UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill m_Fill
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill& dyn_m_Fill();
    // Get instance field reference: private UnityEngine.Vector2 m_Scale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_Scale();
    // Get instance field reference: private UnityEngine.Vector2 m_Offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_Offset();
    // Get instance field reference: private System.Single m_Rotation
    [[deprecated("Use field access instead!")]] float& dyn_m_Rotation();
    // Get instance field reference: private UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor m_Anchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor& dyn_m_Anchor();
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_defaultAutoUnwrapSettings()
    // Offset: 0x2562288
    static ::UnityEngine::ProBuilder::AutoUnwrapSettings get_defaultAutoUnwrapSettings();
    // public System.Boolean get_useWorldSpace()
    // Offset: 0x2562338
    bool get_useWorldSpace();
    // public System.Void set_useWorldSpace(System.Boolean value)
    // Offset: 0x2562340
    void set_useWorldSpace(bool value);
    // public System.Boolean get_flipU()
    // Offset: 0x256234C
    bool get_flipU();
    // public System.Void set_flipU(System.Boolean value)
    // Offset: 0x2562354
    void set_flipU(bool value);
    // public System.Boolean get_flipV()
    // Offset: 0x2562360
    bool get_flipV();
    // public System.Void set_flipV(System.Boolean value)
    // Offset: 0x2562368
    void set_flipV(bool value);
    // public System.Boolean get_swapUV()
    // Offset: 0x2562374
    bool get_swapUV();
    // public System.Void set_swapUV(System.Boolean value)
    // Offset: 0x256237C
    void set_swapUV(bool value);
    // public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill get_fill()
    // Offset: 0x2562388
    ::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill get_fill();
    // public System.Void set_fill(UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Fill value)
    // Offset: 0x2562390
    void set_fill(::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
    // public UnityEngine.Vector2 get_scale()
    // Offset: 0x2562398
    ::UnityEngine::Vector2 get_scale();
    // public System.Void set_scale(UnityEngine.Vector2 value)
    // Offset: 0x25623A0
    void set_scale(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_offset()
    // Offset: 0x25623A8
    ::UnityEngine::Vector2 get_offset();
    // public System.Void set_offset(UnityEngine.Vector2 value)
    // Offset: 0x25623B0
    void set_offset(::UnityEngine::Vector2 value);
    // public System.Single get_rotation()
    // Offset: 0x25623B8
    float get_rotation();
    // public System.Void set_rotation(System.Single value)
    // Offset: 0x25623C0
    void set_rotation(float value);
    // public UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor get_anchor()
    // Offset: 0x25623C8
    ::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor get_anchor();
    // public System.Void set_anchor(UnityEngine.ProBuilder.AutoUnwrapSettings/UnityEngine.ProBuilder.Anchor value)
    // Offset: 0x25623D0
    void set_anchor(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_tile()
    // Offset: 0x2562444
    static ::UnityEngine::ProBuilder::AutoUnwrapSettings get_tile();
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_fit()
    // Offset: 0x2562480
    static ::UnityEngine::ProBuilder::AutoUnwrapSettings get_fit();
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_stretch()
    // Offset: 0x25624C0
    static ::UnityEngine::ProBuilder::AutoUnwrapSettings get_stretch();
    // public System.Void .ctor(UnityEngine.ProBuilder.AutoUnwrapSettings unwrapSettings)
    // Offset: 0x25623D8
    // ABORTED: is copy constructor.  AutoUnwrapSettings(::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);
    // public System.Void Reset()
    // Offset: 0x25622C4
    void Reset();
    // public override System.String ToString()
    // Offset: 0x2562504
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.ProBuilder.AutoUnwrapSettings
  #pragma pack(pop)
  static check_size<sizeof(AutoUnwrapSettings), 28 + sizeof(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor)> __UnityEngine_ProBuilder_AutoUnwrapSettingsSizeCheck;
  static_assert(sizeof(AutoUnwrapSettings) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Fill");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Anchor");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_defaultAutoUnwrapSettings
// Il2CppName: get_defaultAutoUnwrapSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_defaultAutoUnwrapSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_defaultAutoUnwrapSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_useWorldSpace
// Il2CppName: get_useWorldSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_useWorldSpace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_useWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::set_useWorldSpace
// Il2CppName: set_useWorldSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_useWorldSpace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "set_useWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipU
// Il2CppName: get_flipU
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipU)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_flipU", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipU
// Il2CppName: set_flipU
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipU)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "set_flipU", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipV
// Il2CppName: get_flipV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_flipV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipV
// Il2CppName: set_flipV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipV)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "set_flipV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_swapUV
// Il2CppName: get_swapUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_swapUV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_swapUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::set_swapUV
// Il2CppName: set_swapUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_swapUV)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "set_swapUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_fill
// Il2CppName: get_fill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_fill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_fill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::set_fill
// Il2CppName: set_fill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(::UnityEngine::ProBuilder::AutoUnwrapSettings::Fill)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_fill)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "AutoUnwrapSettings/Fill")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "set_fill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_scale
// Il2CppName: get_scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_scale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::set_scale
// Il2CppName: set_scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(::UnityEngine::Vector2)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_scale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "set_scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_offset
// Il2CppName: get_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::set_offset
// Il2CppName: set_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(::UnityEngine::Vector2)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_offset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "set_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(float)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_anchor
// Il2CppName: get_anchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_anchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_anchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::set_anchor
// Il2CppName: set_anchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(::UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_anchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "AutoUnwrapSettings/Anchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "set_anchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_tile
// Il2CppName: get_tile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_tile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_tile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_fit
// Il2CppName: get_fit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_fit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_fit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::get_stretch
// Il2CppName: get_stretch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_stretch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "get_stretch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::AutoUnwrapSettings
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::AutoUnwrapSettings::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::AutoUnwrapSettings), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
