// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SetupCoroutine
  // [RequiredByNativeCodeAttribute] Offset: D901DC
  class SetupCoroutine : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SetupCoroutine
    SetupCoroutine() noexcept {}
    // static public System.Void InvokeMoveNext(System.Collections.IEnumerator enumerator, System.IntPtr returnValueAddress)
    // Offset: 0x1B340F8
    static void InvokeMoveNext(System::Collections::IEnumerator* enumerator, System::IntPtr returnValueAddress);
    // static public System.Object InvokeMember(System.Object behaviour, System.String name, System.Object variable)
    // Offset: 0x1B34228
    static ::Il2CppObject* InvokeMember(::Il2CppObject* behaviour, ::Il2CppString* name, ::Il2CppObject* variable);
  }; // UnityEngine.SetupCoroutine
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SetupCoroutine*, "UnityEngine", "SetupCoroutine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SetupCoroutine::InvokeMoveNext
// Il2CppName: InvokeMoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::IEnumerator*, System::IntPtr)>(&UnityEngine::SetupCoroutine::InvokeMoveNext)> {
  const MethodInfo* get() {
    static auto* enumerator = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    static auto* returnValueAddress = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SetupCoroutine*), "InvokeMoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumerator, returnValueAddress});
  }
};
// Writing MetadataGetter for method: UnityEngine::SetupCoroutine::InvokeMember
// Il2CppName: InvokeMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppObject*, ::Il2CppString*, ::Il2CppObject*)>(&UnityEngine::SetupCoroutine::InvokeMember)> {
  const MethodInfo* get() {
    static auto* behaviour = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* variable = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SetupCoroutine*), "InvokeMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{behaviour, name, variable});
  }
};
