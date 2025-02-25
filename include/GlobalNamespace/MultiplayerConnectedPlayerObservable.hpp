// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IMultiplayerObservable
#include "GlobalNamespace/IMultiplayerObservable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerObservable
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerObservable : public ::Il2CppObject/*, public GlobalNamespace::IMultiplayerObservable*/ {
    public:
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerObservable
    MultiplayerConnectedPlayerObservable(GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}) noexcept : connectedPlayer{connectedPlayer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerObservable
    operator GlobalNamespace::IMultiplayerObservable() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerObservable*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::IConnectedPlayer*
    constexpr operator GlobalNamespace::IConnectedPlayer*() const noexcept {
      return connectedPlayer;
    }
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // public System.Single get_offsetSyncTime()
    // Offset: 0x11CCE98
    float get_offsetSyncTime();
    // public System.Boolean get_isFailed()
    // Offset: 0x11CCF4C
    bool get_isFailed();
    // public System.Void .ctor(IConnectedPlayer connectedPlayer)
    // Offset: 0x11CCE6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerObservable* New_ctor(GlobalNamespace::IConnectedPlayer* connectedPlayer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerObservable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerObservable*, creationType>(connectedPlayer)));
    }
  }; // MultiplayerConnectedPlayerObservable
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerObservable), 16 + sizeof(GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_MultiplayerConnectedPlayerObservableSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerObservable) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerObservable*, "", "MultiplayerConnectedPlayerObservable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerObservable::get_offsetSyncTime
// Il2CppName: get_offsetSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerConnectedPlayerObservable::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerObservable::get_offsetSyncTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerObservable*), "get_offsetSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerObservable::get_isFailed
// Il2CppName: get_isFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerConnectedPlayerObservable::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerObservable::get_isFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerObservable*), "get_isFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerObservable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
