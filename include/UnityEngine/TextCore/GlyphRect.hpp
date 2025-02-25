// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.GlyphRect
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DE80E4
  struct GlyphRect/*, public System::ValueType, public System::IEquatable_1<UnityEngine::TextCore::GlyphRect>*/ {
    public:
    // [NativeNameAttribute] Offset: 0xDE8820
    // private System.Int32 m_X
    // Size: 0x4
    // Offset: 0x0
    int m_X;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xDE886C
    // private System.Int32 m_Y
    // Size: 0x4
    // Offset: 0x4
    int m_Y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xDE88B8
    // private System.Int32 m_Width
    // Size: 0x4
    // Offset: 0x8
    int m_Width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xDE8904
    // private System.Int32 m_Height
    // Size: 0x4
    // Offset: 0xC
    int m_Height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GlyphRect
    constexpr GlyphRect(int m_X_ = {}, int m_Y_ = {}, int m_Width_ = {}, int m_Height_ = {}) noexcept : m_X{m_X_}, m_Y{m_Y_}, m_Width{m_Width_}, m_Height{m_Height_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::TextCore::GlyphRect>
    operator System::IEquatable_1<UnityEngine::TextCore::GlyphRect>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::TextCore::GlyphRect>*>(this);
    }
    // Get static field: static private readonly UnityEngine.TextCore.GlyphRect s_ZeroGlyphRect
    static UnityEngine::TextCore::GlyphRect _get_s_ZeroGlyphRect();
    // Set static field: static private readonly UnityEngine.TextCore.GlyphRect s_ZeroGlyphRect
    static void _set_s_ZeroGlyphRect(UnityEngine::TextCore::GlyphRect value);
    // Get instance field reference: private System.Int32 m_X
    int& dyn_m_X();
    // Get instance field reference: private System.Int32 m_Y
    int& dyn_m_Y();
    // Get instance field reference: private System.Int32 m_Width
    int& dyn_m_Width();
    // Get instance field reference: private System.Int32 m_Height
    int& dyn_m_Height();
    // public System.Int32 get_x()
    // Offset: 0x23F4540
    int get_x();
    // public System.Int32 get_y()
    // Offset: 0x23F4548
    int get_y();
    // public System.Int32 get_width()
    // Offset: 0x23F4550
    int get_width();
    // public System.Int32 get_height()
    // Offset: 0x23F4558
    int get_height();
    // static public UnityEngine.TextCore.GlyphRect get_zero()
    // Offset: 0x23F4560
    static UnityEngine::TextCore::GlyphRect get_zero();
    // public System.Void .ctor(System.Int32 x, System.Int32 y, System.Int32 width, System.Int32 height)
    // Offset: 0x23F45C8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  GlyphRect(int x, int y, int width, int height)
    // static private System.Void .cctor()
    // Offset: 0x23F4774
    static void _cctor();
    // public System.Boolean Equals(UnityEngine.TextCore.GlyphRect other)
    // Offset: 0x23F46D0
    bool Equals(UnityEngine::TextCore::GlyphRect other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x23F45D4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x23F4648
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // UnityEngine.TextCore.GlyphRect
  #pragma pack(pop)
  static check_size<sizeof(GlyphRect), 12 + sizeof(int)> __UnityEngine_TextCore_GlyphRectSizeCheck;
  static_assert(sizeof(GlyphRect) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::GlyphRect, "UnityEngine.TextCore", "GlyphRect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphRect::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::GlyphRect::*)()>(&UnityEngine::TextCore::GlyphRect::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphRect), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphRect::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::GlyphRect::*)()>(&UnityEngine::TextCore::GlyphRect::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphRect), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphRect::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::GlyphRect::*)()>(&UnityEngine::TextCore::GlyphRect::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphRect), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphRect::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::GlyphRect::*)()>(&UnityEngine::TextCore::GlyphRect::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphRect), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphRect::get_zero
// Il2CppName: get_zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::GlyphRect (*)()>(&UnityEngine::TextCore::GlyphRect::get_zero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphRect), "get_zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphRect::GlyphRect
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphRect::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TextCore::GlyphRect::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphRect), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphRect::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::GlyphRect::*)(UnityEngine::TextCore::GlyphRect)>(&UnityEngine::TextCore::GlyphRect::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore", "GlyphRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphRect), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphRect::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::GlyphRect::*)()>(&UnityEngine::TextCore::GlyphRect::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphRect), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::GlyphRect::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::GlyphRect::*)(::Il2CppObject*)>(&UnityEngine::TextCore::GlyphRect::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::GlyphRect), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
