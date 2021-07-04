// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.XR.InputFeatureType
#include "UnityEngine/XR/InputFeatureType.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputFeatureUsage
  // [RequiredByNativeCodeAttribute] Offset: DB65A8
  // [NativeHeaderAttribute] Offset: DB65A8
  // [NativeConditionalAttribute] Offset: DB65A8
  struct InputFeatureUsage/*, public System::ValueType, public System::IEquatable_1<UnityEngine::XR::InputFeatureUsage>*/ {
    public:
    // System.String m_Name
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NativeNameAttribute] Offset: 0xDB6F7C
    // UnityEngine.XR.InputFeatureType m_InternalType
    // Size: 0x4
    // Offset: 0x8
    UnityEngine::XR::InputFeatureType m_InternalType;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::InputFeatureType) == 0x4);
    // Creating value type constructor for type: InputFeatureUsage
    constexpr InputFeatureUsage(::Il2CppString* m_Name_ = {}, UnityEngine::XR::InputFeatureType m_InternalType_ = {}) noexcept : m_Name{m_Name_}, m_InternalType{m_InternalType_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::XR::InputFeatureUsage>
    operator System::IEquatable_1<UnityEngine::XR::InputFeatureUsage>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::XR::InputFeatureUsage>*>(this);
    }
    // public System.String get_name()
    // Offset: 0xF23B34
    ::Il2CppString* get_name();
    // UnityEngine.XR.InputFeatureType get_internalType()
    // Offset: 0xF23B3C
    UnityEngine::XR::InputFeatureType get_internalType();
    // public System.Boolean Equals(UnityEngine.XR.InputFeatureUsage other)
    // Offset: 0xF23B4C
    bool Equals(UnityEngine::XR::InputFeatureUsage other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF23B44
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF23B90
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.InputFeatureUsage
  #pragma pack(pop)
  static check_size<sizeof(InputFeatureUsage), 8 + sizeof(UnityEngine::XR::InputFeatureType)> __UnityEngine_XR_InputFeatureUsageSizeCheck;
  static_assert(sizeof(InputFeatureUsage) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputFeatureUsage, "UnityEngine.XR", "InputFeatureUsage");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::XR::InputFeatureUsage::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::XR::InputFeatureUsage::*)()>(&UnityEngine::XR::InputFeatureUsage::get_name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputFeatureUsage), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputFeatureUsage::get_internalType
// Il2CppName: get_internalType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::InputFeatureType (UnityEngine::XR::InputFeatureUsage::*)()>(&UnityEngine::XR::InputFeatureUsage::get_internalType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputFeatureUsage), "get_internalType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputFeatureUsage::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputFeatureUsage::*)(UnityEngine::XR::InputFeatureUsage)>(&UnityEngine::XR::InputFeatureUsage::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputFeatureUsage), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::XR::InputFeatureUsage>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputFeatureUsage::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputFeatureUsage::*)(::Il2CppObject*)>(&UnityEngine::XR::InputFeatureUsage::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputFeatureUsage), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputFeatureUsage::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::InputFeatureUsage::*)()>(&UnityEngine::XR::InputFeatureUsage::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputFeatureUsage), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
