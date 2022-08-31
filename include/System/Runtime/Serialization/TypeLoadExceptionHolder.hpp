// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: TypeLoadExceptionHolder
  class TypeLoadExceptionHolder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::TypeLoadExceptionHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::TypeLoadExceptionHolder*, "System.Runtime.Serialization", "TypeLoadExceptionHolder");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.TypeLoadExceptionHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeLoadExceptionHolder : public ::Il2CppObject {
    public:
    public:
    // private System.String m_typeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_typeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_typeName;
    }
    // Get instance field reference: private System.String m_typeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_typeName();
    // System.String get_TypeName()
    // Offset: 0x163A764
    ::StringW get_TypeName();
    // System.Void .ctor(System.String typeName)
    // Offset: 0x163A738
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadExceptionHolder* New_ctor(::StringW typeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::TypeLoadExceptionHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadExceptionHolder*, creationType>(typeName)));
    }
  }; // System.Runtime.Serialization.TypeLoadExceptionHolder
  #pragma pack(pop)
  static check_size<sizeof(TypeLoadExceptionHolder), 16 + sizeof(::StringW)> __System_Runtime_Serialization_TypeLoadExceptionHolderSizeCheck;
  static_assert(sizeof(TypeLoadExceptionHolder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::TypeLoadExceptionHolder::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Serialization::TypeLoadExceptionHolder::*)()>(&System::Runtime::Serialization::TypeLoadExceptionHolder::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::TypeLoadExceptionHolder*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::TypeLoadExceptionHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
