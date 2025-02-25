// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Version/System.ParseFailureKind
#include "System/Version_ParseFailureKind.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x21
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Version/System.VersionResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct Version::VersionResult/*, public System::ValueType*/ {
    public:
    // System.Version m_parsedVersion
    // Size: 0x8
    // Offset: 0x0
    System::Version* m_parsedVersion;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // System.Version/System.ParseFailureKind m_failure
    // Size: 0x4
    // Offset: 0x8
    System::Version::ParseFailureKind m_failure;
    // Field size check
    static_assert(sizeof(System::Version::ParseFailureKind) == 0x4);
    // Padding between fields: m_failure and: m_exceptionArgument
    char __padding1[0x4] = {};
    // System.String m_exceptionArgument
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_exceptionArgument;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String m_argumentName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_argumentName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Boolean m_canThrow
    // Size: 0x1
    // Offset: 0x20
    bool m_canThrow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: VersionResult
    constexpr VersionResult(System::Version* m_parsedVersion_ = {}, System::Version::ParseFailureKind m_failure_ = {}, ::Il2CppString* m_exceptionArgument_ = {}, ::Il2CppString* m_argumentName_ = {}, bool m_canThrow_ = {}) noexcept : m_parsedVersion{m_parsedVersion_}, m_failure{m_failure_}, m_exceptionArgument{m_exceptionArgument_}, m_argumentName{m_argumentName_}, m_canThrow{m_canThrow_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.Version m_parsedVersion
    System::Version*& dyn_m_parsedVersion();
    // Get instance field reference: System.Version/System.ParseFailureKind m_failure
    System::Version::ParseFailureKind& dyn_m_failure();
    // Get instance field reference: System.String m_exceptionArgument
    ::Il2CppString*& dyn_m_exceptionArgument();
    // Get instance field reference: System.String m_argumentName
    ::Il2CppString*& dyn_m_argumentName();
    // Get instance field reference: System.Boolean m_canThrow
    bool& dyn_m_canThrow();
    // System.Void Init(System.String argumentName, System.Boolean canThrow)
    // Offset: 0x232E42C
    void Init(::Il2CppString* argumentName, bool canThrow);
    // System.Void SetFailure(System.Version/System.ParseFailureKind failure)
    // Offset: 0x232E8F0
    void SetFailure(System::Version::ParseFailureKind failure);
    // System.Void SetFailure(System.Version/System.ParseFailureKind failure, System.String argument)
    // Offset: 0x232EA2C
    void SetFailure(System::Version::ParseFailureKind failure, ::Il2CppString* argument);
    // System.Exception GetVersionParseException()
    // Offset: 0x232E6CC
    System::Exception* GetVersionParseException();
  }; // System.Version/System.VersionResult
  #pragma pack(pop)
  static check_size<sizeof(Version::VersionResult), 32 + sizeof(bool)> __System_Version_VersionResultSizeCheck;
  static_assert(sizeof(Version::VersionResult) == 0x21);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Version::VersionResult, "System", "Version/VersionResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Version::VersionResult::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Version::VersionResult::*)(::Il2CppString*, bool)>(&System::Version::VersionResult::Init)> {
  static const MethodInfo* get() {
    static auto* argumentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* canThrow = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version::VersionResult), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argumentName, canThrow});
  }
};
// Writing MetadataGetter for method: System::Version::VersionResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Version::VersionResult::*)(System::Version::ParseFailureKind)>(&System::Version::VersionResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System", "Version/ParseFailureKind")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version::VersionResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure});
  }
};
// Writing MetadataGetter for method: System::Version::VersionResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Version::VersionResult::*)(System::Version::ParseFailureKind, ::Il2CppString*)>(&System::Version::VersionResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System", "Version/ParseFailureKind")->byval_arg;
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version::VersionResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, argument});
  }
};
// Writing MetadataGetter for method: System::Version::VersionResult::GetVersionParseException
// Il2CppName: GetVersionParseException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (System::Version::VersionResult::*)()>(&System::Version::VersionResult::GetVersionParseException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version::VersionResult), "GetVersionParseException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
