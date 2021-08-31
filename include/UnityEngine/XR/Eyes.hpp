// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.Eyes
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DD5D78
  // [NativeHeaderAttribute] Offset: DD5D78
  // [RequiredByNativeCodeAttribute] Offset: DD5D78
  // [NativeHeaderAttribute] Offset: DD5D78
  // [StaticAccessorAttribute] Offset: DD5D78
  // [NativeConditionalAttribute] Offset: DD5D78
  struct Eyes/*, public System::ValueType, public System::IEquatable_1<UnityEngine::XR::Eyes>*/ {
    public:
    // private System.UInt64 m_DeviceId
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_DeviceId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt32 m_FeatureIndex
    // Size: 0x4
    // Offset: 0x8
    uint m_FeatureIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: Eyes
    constexpr Eyes(uint64_t m_DeviceId_ = {}, uint m_FeatureIndex_ = {}) noexcept : m_DeviceId{m_DeviceId_}, m_FeatureIndex{m_FeatureIndex_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::XR::Eyes>
    operator System::IEquatable_1<UnityEngine::XR::Eyes>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::XR::Eyes>*>(this);
    }
    // Get instance field: private System.UInt64 m_DeviceId
    uint64_t _get_m_DeviceId();
    // Set instance field: private System.UInt64 m_DeviceId
    void _set_m_DeviceId(uint64_t value);
    // Get instance field: private System.UInt32 m_FeatureIndex
    uint _get_m_FeatureIndex();
    // Set instance field: private System.UInt32 m_FeatureIndex
    void _set_m_FeatureIndex(uint value);
    // System.UInt64 get_deviceId()
    // Offset: 0x2409BEC
    uint64_t get_deviceId();
    // System.UInt32 get_featureIndex()
    // Offset: 0x2409BF4
    uint get_featureIndex();
    // public System.Boolean Equals(UnityEngine.XR.Eyes other)
    // Offset: 0x2409C94
    bool Equals(UnityEngine::XR::Eyes other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2409BFC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2409CB8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.Eyes
  #pragma pack(pop)
  static check_size<sizeof(Eyes), 8 + sizeof(uint)> __UnityEngine_XR_EyesSizeCheck;
  static_assert(sizeof(Eyes) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Eyes, "UnityEngine.XR", "Eyes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Eyes::get_deviceId
// Il2CppName: get_deviceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (UnityEngine::XR::Eyes::*)()>(&UnityEngine::XR::Eyes::get_deviceId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Eyes), "get_deviceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Eyes::get_featureIndex
// Il2CppName: get_featureIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::XR::Eyes::*)()>(&UnityEngine::XR::Eyes::get_featureIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Eyes), "get_featureIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Eyes::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Eyes::*)(UnityEngine::XR::Eyes)>(&UnityEngine::XR::Eyes::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "Eyes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Eyes), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Eyes::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Eyes::*)(::Il2CppObject*)>(&UnityEngine::XR::Eyes::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Eyes), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Eyes::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::Eyes::*)()>(&UnityEngine::XR::Eyes::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Eyes), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
