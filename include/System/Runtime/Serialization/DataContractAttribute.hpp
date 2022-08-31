// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: DataContractAttribute
  class DataContractAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::DataContractAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataContractAttribute*, "System.Runtime.Serialization", "DataContractAttribute");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.DataContractAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10A12C0
  class DataContractAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Boolean isReference
    // Size: 0x1
    // Offset: 0x10
    bool isReference;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return isReference;
    }
    // Get instance field reference: private System.Boolean isReference
    [[deprecated("Use field access instead!")]] bool& dyn_isReference();
    // public System.Boolean get_IsReference()
    // Offset: 0x2B202E0
    bool get_IsReference();
  }; // System.Runtime.Serialization.DataContractAttribute
  #pragma pack(pop)
  static check_size<sizeof(DataContractAttribute), 16 + sizeof(bool)> __System_Runtime_Serialization_DataContractAttributeSizeCheck;
  static_assert(sizeof(DataContractAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::DataContractAttribute::get_IsReference
// Il2CppName: get_IsReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::DataContractAttribute::*)()>(&System::Runtime::Serialization::DataContractAttribute::get_IsReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::DataContractAttribute*), "get_IsReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
