// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: StandardLevelFailedController
#include "GlobalNamespace/StandardLevelFailedController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelFailedController/<LevelFailedCoroutine>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class StandardLevelFailedController::$LevelFailedCoroutine$d__13 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public StandardLevelFailedController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::StandardLevelFailedController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelFailedController*) == 0x8);
    // private LevelCompletionResults <levelCompletionResults>5__2
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LevelCompletionResults* $levelCompletionResults$5__2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCompletionResults*) == 0x8);
    // Creating value type constructor for type: $LevelFailedCoroutine$d__13
    $LevelFailedCoroutine$d__13(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::StandardLevelFailedController* $$4__this_ = {}, GlobalNamespace::LevelCompletionResults* $levelCompletionResults$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $levelCompletionResults$5__2{$levelCompletionResults$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public StandardLevelFailedController <>4__this
    GlobalNamespace::StandardLevelFailedController*& dyn_$$4__this();
    // Get instance field reference: private LevelCompletionResults <levelCompletionResults>5__2
    GlobalNamespace::LevelCompletionResults*& dyn_$levelCompletionResults$5__2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1067D9C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1067E04
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1067B54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelFailedController::$LevelFailedCoroutine$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelFailedController::$LevelFailedCoroutine$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1067B88
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1067B8C
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1067DA4
    void System_Collections_IEnumerator_Reset();
  }; // StandardLevelFailedController/<LevelFailedCoroutine>d__13
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelFailedController::$LevelFailedCoroutine$d__13), 40 + sizeof(GlobalNamespace::LevelCompletionResults*)> __GlobalNamespace_StandardLevelFailedController_$LevelFailedCoroutine$d__13SizeCheck;
  static_assert(sizeof(StandardLevelFailedController::$LevelFailedCoroutine$d__13) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13*, "", "StandardLevelFailedController/<LevelFailedCoroutine>d__13");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::*)()>(&GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::*)()>(&GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::*)()>(&GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::*)()>(&GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::*)()>(&GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
