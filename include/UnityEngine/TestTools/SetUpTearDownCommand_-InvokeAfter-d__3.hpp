// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.SetUpTearDownCommand
#include "UnityEngine/TestTools/SetUpTearDownCommand.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.SetUpTearDownCommand/<InvokeAfter>d__3
  // [CompilerGeneratedAttribute] Offset: E3D9E8
  class SetUpTearDownCommand::$InvokeAfter$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Reflection.MethodInfo action
    // Size: 0x8
    // Offset: 0x20
    System::Reflection::MethodInfo* action;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*) == 0x8);
    // Creating value type constructor for type: $InvokeAfter$d__3
    $InvokeAfter$d__3(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, System::Reflection::MethodInfo* action_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, action{action_}, context{context_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14B9834
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetUpTearDownCommand::$InvokeAfter$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetUpTearDownCommand::$InvokeAfter$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14B997C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14B9980
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x14B9A40
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14B9A48
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14B9AA8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.SetUpTearDownCommand/<InvokeAfter>d__3
  #pragma pack(pop)
  static check_size<sizeof(SetUpTearDownCommand::$InvokeAfter$d__3), 40 + sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)> __UnityEngine_TestTools_SetUpTearDownCommand_$InvokeAfter$d__3SizeCheck;
  static_assert(sizeof(SetUpTearDownCommand::$InvokeAfter$d__3) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3*, "UnityEngine.TestTools", "SetUpTearDownCommand/<InvokeAfter>d__3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::System_IDisposable_Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::System_Collections_IEnumerator_Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::*)()>(&UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
