// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerLobbyAvatarManager
#include "GlobalNamespace/MultiplayerLobbyAvatarManager.hpp"
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
  // Forward declaring type: MultiplayerLobbyAvatarController
  class MultiplayerLobbyAvatarController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyAvatarManager/<RemovePlayerAndDestroy>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MultiplayerLobbyAvatarManager <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLobbyAvatarManager* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyAvatarManager*) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public MultiplayerLobbyAvatarController multiplayerAvatar
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerAvatar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyAvatarController*) == 0x8);
    // Creating value type constructor for type: $RemovePlayerAndDestroy$d__13
    $RemovePlayerAndDestroy$d__13(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::MultiplayerLobbyAvatarManager* $$4__this_ = {}, ::Il2CppString* userId_ = {}, GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerAvatar_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, userId{userId_}, multiplayerAvatar{multiplayerAvatar_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field: private System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: private System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: private System.Object <>2__current
    ::Il2CppObject* _get_$$2__current();
    // Set instance field: private System.Object <>2__current
    void _set_$$2__current(::Il2CppObject* value);
    // Get instance field: public MultiplayerLobbyAvatarManager <>4__this
    GlobalNamespace::MultiplayerLobbyAvatarManager* _get_$$4__this();
    // Set instance field: public MultiplayerLobbyAvatarManager <>4__this
    void _set_$$4__this(GlobalNamespace::MultiplayerLobbyAvatarManager* value);
    // Get instance field: public System.String userId
    ::Il2CppString* _get_userId();
    // Set instance field: public System.String userId
    void _set_userId(::Il2CppString* value);
    // Get instance field: public MultiplayerLobbyAvatarController multiplayerAvatar
    GlobalNamespace::MultiplayerLobbyAvatarController* _get_multiplayerAvatar();
    // Set instance field: public MultiplayerLobbyAvatarController multiplayerAvatar
    void _set_multiplayerAvatar(GlobalNamespace::MultiplayerLobbyAvatarController* value);
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x106196C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10619D4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1061788
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1061858
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x106185C
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1061974
    void System_Collections_IEnumerator_Reset();
  }; // MultiplayerLobbyAvatarManager/<RemovePlayerAndDestroy>d__13
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13), 48 + sizeof(GlobalNamespace::MultiplayerLobbyAvatarController*)> __GlobalNamespace_MultiplayerLobbyAvatarManager_$RemovePlayerAndDestroy$d__13SizeCheck;
  static_assert(sizeof(MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13*, "", "MultiplayerLobbyAvatarManager/<RemovePlayerAndDestroy>d__13");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
