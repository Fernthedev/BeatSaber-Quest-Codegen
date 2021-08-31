// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerSessionManager
#include "GlobalNamespace/MultiplayerSessionManager.hpp"
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
  // Autogenerated type: MultiplayerSessionManager/<>c__DisplayClass97_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerSessionManager::$$c__DisplayClass97_0 : public ::Il2CppObject {
    public:
    // public System.String userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass97_0
    $$c__DisplayClass97_0(::Il2CppString* userId_ = {}) noexcept : userId{userId_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return userId;
    }
    // Get instance field reference: public System.String userId
    ::Il2CppString*& dyn_userId();
    // System.Boolean <GetPlayerByUserId>b__0(IConnectedPlayer player)
    // Offset: 0x16EEBFC
    bool $GetPlayerByUserId$b__0(GlobalNamespace::IConnectedPlayer* player);
    // public System.Void .ctor()
    // Offset: 0x16EE6BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerSessionManager::$$c__DisplayClass97_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSessionManager::$$c__DisplayClass97_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSessionManager::$$c__DisplayClass97_0*, creationType>()));
    }
  }; // MultiplayerSessionManager/<>c__DisplayClass97_0
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerSessionManager::$$c__DisplayClass97_0), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_MultiplayerSessionManager_$$c__DisplayClass97_0SizeCheck;
  static_assert(sizeof(MultiplayerSessionManager::$$c__DisplayClass97_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSessionManager::$$c__DisplayClass97_0*, "", "MultiplayerSessionManager/<>c__DisplayClass97_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSessionManager::$$c__DisplayClass97_0::$GetPlayerByUserId$b__0
// Il2CppName: <GetPlayerByUserId>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerSessionManager::$$c__DisplayClass97_0::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerSessionManager::$$c__DisplayClass97_0::$GetPlayerByUserId$b__0)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSessionManager::$$c__DisplayClass97_0*), "<GetPlayerByUserId>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSessionManager::$$c__DisplayClass97_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
