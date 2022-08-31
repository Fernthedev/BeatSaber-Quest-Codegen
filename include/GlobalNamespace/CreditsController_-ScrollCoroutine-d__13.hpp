// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CreditsController
#include "GlobalNamespace/CreditsController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CreditsController::$ScrollCoroutine$d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsController::$ScrollCoroutine$d__13*, "", "CreditsController/<ScrollCoroutine>d__13");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CreditsController/<ScrollCoroutine>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CreditsController::$ScrollCoroutine$d__13 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
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
    // public CreditsController <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::CreditsController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CreditsController*) == 0x8);
    // private System.Single <contentHeight>5__2
    // Size: 0x4
    // Offset: 0x28
    float $contentHeight$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <contentWrapperHeight>5__3
    // Size: 0x4
    // Offset: 0x2C
    float $contentWrapperHeight$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <posY>5__4
    // Size: 0x4
    // Offset: 0x30
    float $posY$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <scrollingSpeed>5__5
    // Size: 0x4
    // Offset: 0x34
    float $scrollingSpeed$5__5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: i_Il2CppObject
    inline ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* i_Il2CppObject() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public CreditsController <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CreditsController*& dyn_$$4__this();
    // Get instance field reference: private System.Single <contentHeight>5__2
    [[deprecated("Use field access instead!")]] float& dyn_$contentHeight$5__2();
    // Get instance field reference: private System.Single <contentWrapperHeight>5__3
    [[deprecated("Use field access instead!")]] float& dyn_$contentWrapperHeight$5__3();
    // Get instance field reference: private System.Single <posY>5__4
    [[deprecated("Use field access instead!")]] float& dyn_$posY$5__4();
    // Get instance field reference: private System.Single <scrollingSpeed>5__5
    [[deprecated("Use field access instead!")]] float& dyn_$scrollingSpeed$5__5();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1492524
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x149258C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1492204
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsController::$ScrollCoroutine$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsController::$ScrollCoroutine$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1492278
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x149227C
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x149252C
    void System_Collections_IEnumerator_Reset();
  }; // CreditsController/<ScrollCoroutine>d__13
  #pragma pack(pop)
  static check_size<sizeof(CreditsController::$ScrollCoroutine$d__13), 52 + sizeof(float)> __GlobalNamespace_CreditsController_$ScrollCoroutine$d__13SizeCheck;
  static_assert(sizeof(CreditsController::$ScrollCoroutine$d__13) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::*)()>(&GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController::$ScrollCoroutine$d__13*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::*)()>(&GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController::$ScrollCoroutine$d__13*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::*)()>(&GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController::$ScrollCoroutine$d__13*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::*)()>(&GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController::$ScrollCoroutine$d__13*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::*)()>(&GlobalNamespace::CreditsController::$ScrollCoroutine$d__13::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController::$ScrollCoroutine$d__13*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
