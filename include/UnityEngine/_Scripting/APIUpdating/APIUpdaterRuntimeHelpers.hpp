// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine._Scripting.APIUpdating
namespace UnityEngine::_Scripting::APIUpdating {
  // Forward declaring type: APIUpdaterRuntimeHelpers
  class APIUpdaterRuntimeHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*, "UnityEngine._Scripting.APIUpdating", "APIUpdaterRuntimeHelpers");
// Type namespace: UnityEngine._Scripting.APIUpdating
namespace UnityEngine::_Scripting::APIUpdating {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class APIUpdaterRuntimeHelpers : public ::Il2CppObject {
    public:
    // static System.Boolean GetMovedFromAttributeDataForType(System.Type sourceType, out System.String assembly, out System.String nsp, out System.String klass)
    // Offset: 0x28236E0
    static bool GetMovedFromAttributeDataForType(::System::Type* sourceType, ByRef<::StringW> assembly, ByRef<::StringW> nsp, ByRef<::StringW> klass);
    // static System.Boolean GetObsoleteTypeRedirection(System.Type sourceType, out System.String assemblyName, out System.String nsp, out System.String className)
    // Offset: 0x2823814
    static bool GetObsoleteTypeRedirection(::System::Type* sourceType, ByRef<::StringW> assemblyName, ByRef<::StringW> nsp, ByRef<::StringW> className);
  }; // UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetMovedFromAttributeDataForType
// Il2CppName: GetMovedFromAttributeDataForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>)>(&UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetMovedFromAttributeDataForType)> {
  static const MethodInfo* get() {
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* nsp = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* klass = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*), "GetMovedFromAttributeDataForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceType, assembly, nsp, klass});
  }
};
// Writing MetadataGetter for method: UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetObsoleteTypeRedirection
// Il2CppName: GetObsoleteTypeRedirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>)>(&UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetObsoleteTypeRedirection)> {
  static const MethodInfo* get() {
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* nsp = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* className = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*), "GetObsoleteTypeRedirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceType, assemblyName, nsp, className});
  }
};
