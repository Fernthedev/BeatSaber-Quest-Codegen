// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerLobbyAvatarController
#include "GlobalNamespace/MultiplayerLobbyAvatarController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyAvatarController/<SpawnAnimationCoroutine>d__8
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MultiplayerLobbyAvatarController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLobbyAvatarController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyAvatarController*) == 0x8);
    // Creating value type constructor for type: $SpawnAnimationCoroutine$d__8
    $SpawnAnimationCoroutine$d__8(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::MultiplayerLobbyAvatarController* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public MultiplayerLobbyAvatarController <>4__this
    GlobalNamespace::MultiplayerLobbyAvatarController*& dyn_$$4__this();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x107CED0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x107CF38
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x107C9A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x107CE14
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x107CE18
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x107CED8
    void System_Collections_IEnumerator_Reset();
  }; // MultiplayerLobbyAvatarController/<SpawnAnimationCoroutine>d__8
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8), 32 + sizeof(GlobalNamespace::MultiplayerLobbyAvatarController*)> __GlobalNamespace_MultiplayerLobbyAvatarController_$SpawnAnimationCoroutine$d__8SizeCheck;
  static_assert(sizeof(MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8*, "", "MultiplayerLobbyAvatarController/<SpawnAnimationCoroutine>d__8");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
