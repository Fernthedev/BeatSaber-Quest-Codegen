// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.DefaultTestWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/DefaultTestWorkItem.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: IEditModeTestYieldInstruction
  class IEditModeTestYieldInstruction;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.DefaultTestWorkItem/<PerformWork>d__2
  // [CompilerGeneratedAttribute] Offset: E3D88C
  class DefaultTestWorkItem::$PerformWork$d__2 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.DefaultTestWorkItem <>4__this
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem*) == 0x8);
    // private System.Collections.IEnumerator <>7__wrap1
    // Size: 0x8
    // Offset: 0x30
    System::Collections::IEnumerator* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // private UnityEngine.TestTools.IEditModeTestYieldInstruction <editModeTestYieldInstruction>5__3
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::TestTools::IEditModeTestYieldInstruction* $editModeTestYieldInstruction$5__3;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::IEditModeTestYieldInstruction*) == 0x8);
    // private System.Collections.IEnumerator <enumerator>5__4
    // Size: 0x8
    // Offset: 0x40
    System::Collections::IEnumerator* $enumerator$5__4;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: $PerformWork$d__2
    $PerformWork$d__2(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem* $$4__this_ = {}, System::Collections::IEnumerator* $$7__wrap1_ = {}, UnityEngine::TestTools::IEditModeTestYieldInstruction* $editModeTestYieldInstruction$5__3_ = {}, System::Collections::IEnumerator* $enumerator$5__4_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_}, $editModeTestYieldInstruction$5__3{$editModeTestYieldInstruction$5__3_}, $enumerator$5__4{$enumerator$5__4_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14AB498
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultTestWorkItem::$PerformWork$d__2* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultTestWorkItem::$PerformWork$d__2*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14AB4D0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14AB644
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x14AB620
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x14AB554
    void $$m__Finally2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x14ABDA0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14ABDA8
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14ABE08
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0x14ABE10
    System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x14ABEBC
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.DefaultTestWorkItem/<PerformWork>d__2
  #pragma pack(pop)
  static check_size<sizeof(DefaultTestWorkItem::$PerformWork$d__2), 64 + sizeof(System::Collections::IEnumerator*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_DefaultTestWorkItem_$PerformWork$d__2SizeCheck;
  static_assert(sizeof(DefaultTestWorkItem::$PerformWork$d__2) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "DefaultTestWorkItem/<PerformWork>d__2");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_IDisposable_Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::$$m__Finally1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::$$m__Finally2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_Collections_IEnumerator_Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* (UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2*), "System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2::System_Collections_IEnumerable_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
