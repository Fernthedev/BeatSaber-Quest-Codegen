// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NetworkConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkConstants : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NetworkConstants
    NetworkConstants() noexcept {}
    // static field const value: static public System.UInt32 kProtocolVersion
    static constexpr const uint kProtocolVersion = 5u;
    // Get static field: static public System.UInt32 kProtocolVersion
    static uint _get_kProtocolVersion();
    // Set static field: static public System.UInt32 kProtocolVersion
    static void _set_kProtocolVersion(uint value);
    // static field const value: static public System.String dedicatedServerState
    static constexpr const char* dedicatedServerState = "dedicated_server";
    // Get static field: static public System.String dedicatedServerState
    static ::Il2CppString* _get_dedicatedServerState();
    // Set static field: static public System.String dedicatedServerState
    static void _set_dedicatedServerState(::Il2CppString* value);
    // static field const value: static public System.String playerState
    static constexpr const char* playerState = "player";
    // Get static field: static public System.String playerState
    static ::Il2CppString* _get_playerState();
    // Set static field: static public System.String playerState
    static void _set_playerState(::Il2CppString* value);
    // static field const value: static public System.String spectatingState
    static constexpr const char* spectatingState = "spectating";
    // Get static field: static public System.String spectatingState
    static ::Il2CppString* _get_spectatingState();
    // Set static field: static public System.String spectatingState
    static void _set_spectatingState(::Il2CppString* value);
    // static field const value: static public System.String backgroundedState
    static constexpr const char* backgroundedState = "backgrounded";
    // Get static field: static public System.String backgroundedState
    static ::Il2CppString* _get_backgroundedState();
    // Set static field: static public System.String backgroundedState
    static void _set_backgroundedState(::Il2CppString* value);
    // static field const value: static public System.String terminatingState
    static constexpr const char* terminatingState = "terminating";
    // Get static field: static public System.String terminatingState
    static ::Il2CppString* _get_terminatingState();
    // Set static field: static public System.String terminatingState
    static void _set_terminatingState(::Il2CppString* value);
    // static field const value: static public System.String wantsToPlayNextLevel
    static constexpr const char* wantsToPlayNextLevel = "wants_to_play_next_level";
    // Get static field: static public System.String wantsToPlayNextLevel
    static ::Il2CppString* _get_wantsToPlayNextLevel();
    // Set static field: static public System.String wantsToPlayNextLevel
    static void _set_wantsToPlayNextLevel(::Il2CppString* value);
    // static field const value: static public System.String wasActiveAtLevelStart
    static constexpr const char* wasActiveAtLevelStart = "was_active_at_level_start";
    // Get static field: static public System.String wasActiveAtLevelStart
    static ::Il2CppString* _get_wasActiveAtLevelStart();
    // Set static field: static public System.String wasActiveAtLevelStart
    static void _set_wasActiveAtLevelStart(::Il2CppString* value);
    // static field const value: static public System.String isActive
    static constexpr const char* isActive = "is_active";
    // Get static field: static public System.String isActive
    static ::Il2CppString* _get_isActive();
    // Set static field: static public System.String isActive
    static void _set_isActive(::Il2CppString* value);
    // static field const value: static public System.String finishedLevel
    static constexpr const char* finishedLevel = "finished_level";
    // Get static field: static public System.String finishedLevel
    static ::Il2CppString* _get_finishedLevel();
    // Set static field: static public System.String finishedLevel
    static void _set_finishedLevel(::Il2CppString* value);
  }; // NetworkConstants
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkConstants*, "", "NetworkConstants");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
