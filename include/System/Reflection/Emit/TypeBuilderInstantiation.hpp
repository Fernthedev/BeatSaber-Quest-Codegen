// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.TypeInfo
#include "System/Reflection/TypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Type because it is already included!
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.TypeBuilderInstantiation
  class TypeBuilderInstantiation : public System::Reflection::TypeInfo {
    public:
    // Creating value type constructor for type: TypeBuilderInstantiation
    TypeBuilderInstantiation() noexcept {}
    // static System.Type MakeGenericType(System.Type type, System.Type[] typeArguments)
    // Offset: 0x1C7A5C8
    static System::Type* MakeGenericType(System::Type* type, ::Array<System::Type*>* typeArguments);
  }; // System.Reflection.Emit.TypeBuilderInstantiation
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::TypeBuilderInstantiation*, "System.Reflection.Emit", "TypeBuilderInstantiation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilderInstantiation::MakeGenericType
// Il2CppName: MakeGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (*)(System::Type*, ::Array<System::Type*>*)>(&System::Reflection::Emit::TypeBuilderInstantiation::MakeGenericType)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* typeArguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::TypeBuilderInstantiation*), "MakeGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, typeArguments});
  }
};
