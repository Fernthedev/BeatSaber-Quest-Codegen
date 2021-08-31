// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Resolution
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: DADD44
  struct Resolution/*, public System::ValueType*/ {
    public:
    // private System.Int32 m_Width
    // Size: 0x4
    // Offset: 0x0
    int m_Width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Height
    // Size: 0x4
    // Offset: 0x4
    int m_Height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_RefreshRate
    // Size: 0x4
    // Offset: 0x8
    int m_RefreshRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Resolution
    constexpr Resolution(int m_Width_ = {}, int m_Height_ = {}, int m_RefreshRate_ = {}) noexcept : m_Width{m_Width_}, m_Height{m_Height_}, m_RefreshRate{m_RefreshRate_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: private System.Int32 m_Width
    int _get_m_Width();
    // Set instance field: private System.Int32 m_Width
    void _set_m_Width(int value);
    // Get instance field: private System.Int32 m_Height
    int _get_m_Height();
    // Set instance field: private System.Int32 m_Height
    void _set_m_Height(int value);
    // Get instance field: private System.Int32 m_RefreshRate
    int _get_m_RefreshRate();
    // Set instance field: private System.Int32 m_RefreshRate
    void _set_m_RefreshRate(int value);
    // public System.Int32 get_width()
    // Offset: 0x1C4CA50
    int get_width();
    // public System.Int32 get_height()
    // Offset: 0x1C4CA58
    int get_height();
    // public override System.String ToString()
    // Offset: 0x1C4CA60
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Resolution
  #pragma pack(pop)
  static check_size<sizeof(Resolution), 8 + sizeof(int)> __UnityEngine_ResolutionSizeCheck;
  static_assert(sizeof(Resolution) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Resolution, "UnityEngine", "Resolution");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Resolution::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Resolution::*)()>(&UnityEngine::Resolution::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resolution), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resolution::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Resolution::*)()>(&UnityEngine::Resolution::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resolution), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resolution::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Resolution::*)()>(&UnityEngine::Resolution::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resolution), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
