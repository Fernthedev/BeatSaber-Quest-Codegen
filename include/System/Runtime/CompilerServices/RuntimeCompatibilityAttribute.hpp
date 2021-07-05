// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
  // [AttributeUsageAttribute] Offset: D7E994
  class RuntimeCompatibilityAttribute : public System::Attribute {
    public:
    // private System.Boolean m_wrapNonExceptionThrows
    // Size: 0x1
    // Offset: 0x10
    bool m_wrapNonExceptionThrows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RuntimeCompatibilityAttribute
    RuntimeCompatibilityAttribute(bool m_wrapNonExceptionThrows_ = {}) noexcept : m_wrapNonExceptionThrows{m_wrapNonExceptionThrows_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_wrapNonExceptionThrows;
    }
    // public System.Void set_WrapNonExceptionThrows(System.Boolean value)
    // Offset: 0x141CA34
    void set_WrapNonExceptionThrows(bool value);
    // public System.Void .ctor()
    // Offset: 0x141CA2C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeCompatibilityAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeCompatibilityAttribute*, creationType>()));
    }
  }; // System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
  #pragma pack(pop)
  static check_size<sizeof(RuntimeCompatibilityAttribute), 16 + sizeof(bool)> __System_Runtime_CompilerServices_RuntimeCompatibilityAttributeSizeCheck;
  static_assert(sizeof(RuntimeCompatibilityAttribute) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*, "System.Runtime.CompilerServices", "RuntimeCompatibilityAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows
// Il2CppName: set_WrapNonExceptionThrows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::*)(bool)>(&System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*), "set_WrapNonExceptionThrows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
