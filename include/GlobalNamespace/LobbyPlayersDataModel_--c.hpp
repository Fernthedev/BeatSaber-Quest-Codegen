// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LobbyPlayersDataModel
#include "GlobalNamespace/LobbyPlayersDataModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LobbyPlayersDataModel/<>c
  // [CompilerGeneratedAttribute] Offset: E11C38
  class LobbyPlayersDataModel::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly LobbyPlayersDataModel/<>c <>9
    static GlobalNamespace::LobbyPlayersDataModel::$$c* _get_$$9();
    // Set static field: static public readonly LobbyPlayersDataModel/<>c <>9
    static void _set_$$9(GlobalNamespace::LobbyPlayersDataModel::$$c* value);
    // Get static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__42_0
    static System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* _get_$$9__42_0();
    // Set static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__42_0
    static void _set_$$9__42_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x23F5538
    static void _cctor();
    // System.String <SetOwnedSongPacks>b__42_0(IBeatmapLevelPack pack)
    // Offset: 0x23F55A4
    ::Il2CppString* $SetOwnedSongPacks$b__42_0(GlobalNamespace::IBeatmapLevelPack* pack);
    // public System.Void .ctor()
    // Offset: 0x23F559C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyPlayersDataModel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyPlayersDataModel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyPlayersDataModel::$$c*, creationType>()));
    }
  }; // LobbyPlayersDataModel/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyPlayersDataModel::$$c*, "", "LobbyPlayersDataModel/<>c");
// Writing includes for template specializations
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayersDataModel::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LobbyPlayersDataModel::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayersDataModel::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayersDataModel::$$c::$SetOwnedSongPacks$b__42_0
// Il2CppName: <SetOwnedSongPacks>b__42_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LobbyPlayersDataModel::$$c::*)(GlobalNamespace::IBeatmapLevelPack*)>(&GlobalNamespace::LobbyPlayersDataModel::$$c::$SetOwnedSongPacks$b__42_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayersDataModel::$$c*), "<SetOwnedSongPacks>b__42_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IBeatmapLevelPack*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayersDataModel::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
