// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IStateTable`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class IStateTable_3;
  // Forward declaring type: IEquatableByReference`1<T>
  template<typename T>
  class IEquatableByReference_1;
  // Forward declaring type: ISyncStateSerializable`1<T>
  template<typename T>
  class ISyncStateSerializable_1;
  // Forward declaring type: IPoolablePacket
  class IPoolablePacket;
  // Forward declaring type: ISyncStateDeltaSerializable`1<T>
  template<typename T>
  class ISyncStateDeltaSerializable_1;
  // Forward declaring type: LocalMultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class LocalMultiplayerSyncState_3;
  // Forward declaring type: MultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
  // Forward declaring type: IConvertible
  class IConvertible;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: IScoreSyncStateManager`5
  template<typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
  class IScoreSyncStateManager_5 {
    public:
    // Creating value type constructor for type: IScoreSyncStateManager_5
    IScoreSyncStateManager_5() noexcept {}
    // public System.Single get_syncTime()
    // Offset: 0xFFFFFFFF
    float get_syncTime() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IScoreSyncStateManager_5::get_syncTime");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_syncTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0xFFFFFFFF
    int get_connectedPlayerCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IScoreSyncStateManager_5::get_connectedPlayerCount");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_connectedPlayerCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public LocalMultiplayerSyncState`3<TStateTable,TType,TState> get_localState()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* get_localState() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IScoreSyncStateManager_5::get_localState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_localState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetSyncStateForPlayer(IConnectedPlayer player)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncStateForPlayer(GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IScoreSyncStateManager_5::GetSyncStateForPlayer");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetSyncStateForPlayer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(player)})));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, player);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetSyncState(System.Int32 i)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncState(int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IScoreSyncStateManager_5::GetSyncState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetSyncState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(i)})));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, i);
    }
  }; // IScoreSyncStateManager`5
  // Could not write size check! Type: IScoreSyncStateManager`5 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::IScoreSyncStateManager_5, "", "IScoreSyncStateManager`5");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
