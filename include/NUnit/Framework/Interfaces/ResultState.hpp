// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.TestStatus
#include "NUnit/Framework/Interfaces/TestStatus.hpp"
// Including type: NUnit.Framework.Interfaces.FailureSite
#include "NUnit/Framework/Interfaces/FailureSite.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ResultState
  // [TokenAttribute] Offset: FFFFFFFF
  class ResultState : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xE230F8
    // private NUnit.Framework.Interfaces.TestStatus <Status>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    NUnit::Framework::Interfaces::TestStatus Status;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::TestStatus) == 0x4);
    // Padding between fields: Status and: Label
    char __padding0[0x4] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xE23134
    // private System.String <Label>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Label;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE23170
    // private NUnit.Framework.Interfaces.FailureSite <Site>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    NUnit::Framework::Interfaces::FailureSite Site;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::FailureSite) == 0x4);
    // Creating value type constructor for type: ResultState
    ResultState(NUnit::Framework::Interfaces::TestStatus Status_ = {}, ::Il2CppString* Label_ = {}, NUnit::Framework::Interfaces::FailureSite Site_ = {}) noexcept : Status{Status_}, Label{Label_}, Site{Site_} {}
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Inconclusive
    static NUnit::Framework::Interfaces::ResultState* _get_Inconclusive();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Inconclusive
    static void _set_Inconclusive(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Skipped
    static NUnit::Framework::Interfaces::ResultState* _get_Skipped();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Skipped
    static void _set_Skipped(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Ignored
    static NUnit::Framework::Interfaces::ResultState* _get_Ignored();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Ignored
    static void _set_Ignored(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Explicit
    static NUnit::Framework::Interfaces::ResultState* _get_Explicit();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Explicit
    static void _set_Explicit(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Success
    static NUnit::Framework::Interfaces::ResultState* _get_Success();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Success
    static void _set_Success(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Failure
    static NUnit::Framework::Interfaces::ResultState* _get_Failure();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Failure
    static void _set_Failure(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Error
    static NUnit::Framework::Interfaces::ResultState* _get_Error();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Error
    static void _set_Error(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Cancelled
    static NUnit::Framework::Interfaces::ResultState* _get_Cancelled();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Cancelled
    static void _set_Cancelled(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState NotRunnable
    static NUnit::Framework::Interfaces::ResultState* _get_NotRunnable();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState NotRunnable
    static void _set_NotRunnable(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState ChildFailure
    static NUnit::Framework::Interfaces::ResultState* _get_ChildFailure();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState ChildFailure
    static void _set_ChildFailure(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState SetUpFailure
    static NUnit::Framework::Interfaces::ResultState* _get_SetUpFailure();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState SetUpFailure
    static void _set_SetUpFailure(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState SetUpError
    static NUnit::Framework::Interfaces::ResultState* _get_SetUpError();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState SetUpError
    static void _set_SetUpError(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState TearDownError
    static NUnit::Framework::Interfaces::ResultState* _get_TearDownError();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState TearDownError
    static void _set_TearDownError(NUnit::Framework::Interfaces::ResultState* value);
    // Get instance field: private NUnit.Framework.Interfaces.TestStatus <Status>k__BackingField
    NUnit::Framework::Interfaces::TestStatus _get_$Status$k__BackingField();
    // Set instance field: private NUnit.Framework.Interfaces.TestStatus <Status>k__BackingField
    void _set_$Status$k__BackingField(NUnit::Framework::Interfaces::TestStatus value);
    // Get instance field: private System.String <Label>k__BackingField
    ::Il2CppString* _get_$Label$k__BackingField();
    // Set instance field: private System.String <Label>k__BackingField
    void _set_$Label$k__BackingField(::Il2CppString* value);
    // Get instance field: private NUnit.Framework.Interfaces.FailureSite <Site>k__BackingField
    NUnit::Framework::Interfaces::FailureSite _get_$Site$k__BackingField();
    // Set instance field: private NUnit.Framework.Interfaces.FailureSite <Site>k__BackingField
    void _set_$Site$k__BackingField(NUnit::Framework::Interfaces::FailureSite value);
    // public NUnit.Framework.Interfaces.TestStatus get_Status()
    // Offset: 0x17701E0
    NUnit::Framework::Interfaces::TestStatus get_Status();
    // private System.Void set_Status(NUnit.Framework.Interfaces.TestStatus value)
    // Offset: 0x17701E8
    void set_Status(NUnit::Framework::Interfaces::TestStatus value);
    // public System.String get_Label()
    // Offset: 0x17701F0
    ::Il2CppString* get_Label();
    // private System.Void set_Label(System.String value)
    // Offset: 0x17701F8
    void set_Label(::Il2CppString* value);
    // public NUnit.Framework.Interfaces.FailureSite get_Site()
    // Offset: 0x1770200
    NUnit::Framework::Interfaces::FailureSite get_Site();
    // private System.Void set_Site(NUnit.Framework.Interfaces.FailureSite value)
    // Offset: 0x1770208
    void set_Site(NUnit::Framework::Interfaces::FailureSite value);
    // public System.Void .ctor(NUnit.Framework.Interfaces.TestStatus status)
    // Offset: 0x17700E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultState* New_ctor(NUnit::Framework::Interfaces::TestStatus status) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::ResultState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultState*, creationType>(status)));
    }
    // public System.Void .ctor(NUnit.Framework.Interfaces.TestStatus status, System.String label)
    // Offset: 0x17701D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultState* New_ctor(NUnit::Framework::Interfaces::TestStatus status, ::Il2CppString* label) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::ResultState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultState*, creationType>(status, label)));
    }
    // public System.Void .ctor(NUnit.Framework.Interfaces.TestStatus status, System.String label, NUnit.Framework.Interfaces.FailureSite site)
    // Offset: 0x177014C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultState* New_ctor(NUnit::Framework::Interfaces::TestStatus status, ::Il2CppString* label, NUnit::Framework::Interfaces::FailureSite site) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::ResultState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultState*, creationType>(status, label, site)));
    }
    // static private System.Void .cctor()
    // Offset: 0x17705C4
    static void _cctor();
    // public NUnit.Framework.Interfaces.ResultState WithSite(NUnit.Framework.Interfaces.FailureSite site)
    // Offset: 0x1770210
    NUnit::Framework::Interfaces::ResultState* WithSite(NUnit::Framework::Interfaces::FailureSite site);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x177028C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1770418
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1770460
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Interfaces.ResultState
  #pragma pack(pop)
  static check_size<sizeof(ResultState), 32 + sizeof(NUnit::Framework::Interfaces::FailureSite)> __NUnit_Framework_Interfaces_ResultStateSizeCheck;
  static_assert(sizeof(ResultState) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ResultState*, "NUnit.Framework.Interfaces", "ResultState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::get_Status
// Il2CppName: get_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TestStatus (NUnit::Framework::Interfaces::ResultState::*)()>(&NUnit::Framework::Interfaces::ResultState::get_Status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), "get_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::set_Status
// Il2CppName: set_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::ResultState::*)(NUnit::Framework::Interfaces::TestStatus)>(&NUnit::Framework::Interfaces::ResultState::set_Status)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TestStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), "set_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::get_Label
// Il2CppName: get_Label
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ResultState::*)()>(&NUnit::Framework::Interfaces::ResultState::get_Label)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), "get_Label", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::set_Label
// Il2CppName: set_Label
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::ResultState::*)(::Il2CppString*)>(&NUnit::Framework::Interfaces::ResultState::set_Label)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), "set_Label", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::get_Site
// Il2CppName: get_Site
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::FailureSite (NUnit::Framework::Interfaces::ResultState::*)()>(&NUnit::Framework::Interfaces::ResultState::get_Site)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), "get_Site", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::set_Site
// Il2CppName: set_Site
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::ResultState::*)(NUnit::Framework::Interfaces::FailureSite)>(&NUnit::Framework::Interfaces::ResultState::set_Site)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "FailureSite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), "set_Site", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Interfaces::ResultState::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::WithSite
// Il2CppName: WithSite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ResultState* (NUnit::Framework::Interfaces::ResultState::*)(NUnit::Framework::Interfaces::FailureSite)>(&NUnit::Framework::Interfaces::ResultState::WithSite)> {
  static const MethodInfo* get() {
    static auto* site = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "FailureSite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), "WithSite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{site});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ResultState::*)(::Il2CppObject*)>(&NUnit::Framework::Interfaces::ResultState::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Interfaces::ResultState::*)()>(&NUnit::Framework::Interfaces::ResultState::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ResultState::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ResultState::*)()>(&NUnit::Framework::Interfaces::ResultState::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ResultState*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
