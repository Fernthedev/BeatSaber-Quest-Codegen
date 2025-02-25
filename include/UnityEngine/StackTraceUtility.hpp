// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: StackTrace
  class StackTrace;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.StackTraceUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class StackTraceUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StackTraceUtility
    StackTraceUtility() noexcept {}
    // Get static field: static private System.String projectFolder
    static ::Il2CppString* _get_projectFolder();
    // Set static field: static private System.String projectFolder
    static void _set_projectFolder(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x2356950
    static void _cctor();
    // static System.Void SetProjectFolder(System.String folder)
    // Offset: 0x2355E08
    static void SetProjectFolder(::Il2CppString* folder);
    // static public System.String ExtractStackTrace()
    // Offset: 0x2355EE4
    static ::Il2CppString* ExtractStackTrace();
    // static System.Void ExtractStringFromExceptionInternal(System.Object exceptiono, out System.String message, out System.String stackTrace)
    // Offset: 0x2356638
    static void ExtractStringFromExceptionInternal(::Il2CppObject* exceptiono, ByRef<::Il2CppString*> message, ByRef<::Il2CppString*> stackTrace);
    // static System.String ExtractFormattedStackTrace(System.Diagnostics.StackTrace stackTrace)
    // Offset: 0x2356034
    static ::Il2CppString* ExtractFormattedStackTrace(System::Diagnostics::StackTrace* stackTrace);
  }; // UnityEngine.StackTraceUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::StackTraceUtility*, "UnityEngine", "StackTraceUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::StackTraceUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::StackTraceUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StackTraceUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::StackTraceUtility::SetProjectFolder
// Il2CppName: SetProjectFolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&UnityEngine::StackTraceUtility::SetProjectFolder)> {
  static const MethodInfo* get() {
    static auto* folder = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StackTraceUtility*), "SetProjectFolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{folder});
  }
};
// Writing MetadataGetter for method: UnityEngine::StackTraceUtility::ExtractStackTrace
// Il2CppName: ExtractStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::StackTraceUtility::ExtractStackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StackTraceUtility*), "ExtractStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::StackTraceUtility::ExtractStringFromExceptionInternal
// Il2CppName: ExtractStringFromExceptionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ByRef<::Il2CppString*>, ByRef<::Il2CppString*>)>(&UnityEngine::StackTraceUtility::ExtractStringFromExceptionInternal)> {
  static const MethodInfo* get() {
    static auto* exceptiono = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StackTraceUtility*), "ExtractStringFromExceptionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exceptiono, message, stackTrace});
  }
};
// Writing MetadataGetter for method: UnityEngine::StackTraceUtility::ExtractFormattedStackTrace
// Il2CppName: ExtractFormattedStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Diagnostics::StackTrace*)>(&UnityEngine::StackTraceUtility::ExtractFormattedStackTrace)> {
  static const MethodInfo* get() {
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "StackTrace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StackTraceUtility*), "ExtractFormattedStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stackTrace});
  }
};
