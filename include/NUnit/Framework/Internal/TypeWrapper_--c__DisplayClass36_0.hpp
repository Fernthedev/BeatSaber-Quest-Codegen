// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TypeWrapper
#include "NUnit/Framework/Internal/TypeWrapper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TypeWrapper/<>c__DisplayClass36_0
  // [CompilerGeneratedAttribute] Offset: E04E0C
  class TypeWrapper::$$c__DisplayClass36_0 : public ::Il2CppObject {
    public:
    // public System.Type[] argTypes
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::Type*>* argTypes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass36_0
    $$c__DisplayClass36_0(::Array<System::Type*>* argTypes_ = {}) noexcept : argTypes{argTypes_} {}
    // Creating conversion operator: operator ::Array<System::Type*>*
    constexpr operator ::Array<System::Type*>*() const noexcept {
      return argTypes;
    }
    // System.Boolean <GetConstructor>b__0(System.Reflection.ConstructorInfo c)
    // Offset: 0x22B7A64
    bool $GetConstructor$b__0(System::Reflection::ConstructorInfo* c);
    // public System.Void .ctor()
    // Offset: 0x22B79A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeWrapper::$$c__DisplayClass36_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass36_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeWrapper::$$c__DisplayClass36_0*, creationType>()));
    }
  }; // NUnit.Framework.Internal.TypeWrapper/<>c__DisplayClass36_0
  #pragma pack(pop)
  static check_size<sizeof(TypeWrapper::$$c__DisplayClass36_0), 16 + sizeof(::Array<System::Type*>*)> __NUnit_Framework_Internal_TypeWrapper_$$c__DisplayClass36_0SizeCheck;
  static_assert(sizeof(TypeWrapper::$$c__DisplayClass36_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass36_0*, "NUnit.Framework.Internal", "TypeWrapper/<>c__DisplayClass36_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass36_0::$GetConstructor$b__0
// Il2CppName: <GetConstructor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass36_0::*)(System::Reflection::ConstructorInfo*)>(&NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass36_0::$GetConstructor$b__0)> {
  const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Reflection", "ConstructorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass36_0*), "<GetConstructor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass36_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
