// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`4<T1, T2, T3, TResult>
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyName
  class AssemblyName;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeNameParser
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeNameParser : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TypeNameParser
    TypeNameParser() noexcept {}
    // static System.Type GetType(System.String typeName, System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly> assemblyResolver, System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type> typeResolver, System.Boolean throwOnError, System.Boolean ignoreCase, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x2322A44
    static System::Type* GetType(::Il2CppString* typeName, System::Func_2<System::Reflection::AssemblyName*, System::Reflection::Assembly*>* assemblyResolver, System::Func_4<System::Reflection::Assembly*, ::Il2CppString*, bool, System::Type*>* typeResolver, bool throwOnError, bool ignoreCase, ByRef<System::Threading::StackCrawlMark> stackMark);
  }; // System.TypeNameParser
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TypeNameParser*, "System", "TypeNameParser");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TypeNameParser::GetType
// Il2CppName: GetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (*)(::Il2CppString*, System::Func_2<System::Reflection::AssemblyName*, System::Reflection::Assembly*>*, System::Func_4<System::Reflection::Assembly*, ::Il2CppString*, bool, System::Type*>*, bool, bool, ByRef<System::Threading::StackCrawlMark>)>(&System::TypeNameParser::GetType)> {
  static const MethodInfo* get() {
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* assemblyResolver = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "AssemblyName"), ::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")})->byval_arg;
    static auto* typeResolver = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`4"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly"), ::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Boolean"), ::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* stackMark = &::il2cpp_utils::GetClassFromName("System.Threading", "StackCrawlMark")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeNameParser*), "GetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeName, assemblyResolver, typeResolver, throwOnError, ignoreCase, stackMark});
  }
};
