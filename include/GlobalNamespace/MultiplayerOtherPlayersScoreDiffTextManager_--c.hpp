// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerOtherPlayersScoreDiffTextManager
#include "GlobalNamespace/MultiplayerOtherPlayersScoreDiffTextManager.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerOtherPlayersScoreDiffTextManager/<>c
  // [CompilerGeneratedAttribute] Offset: E122E8
  class MultiplayerOtherPlayersScoreDiffTextManager::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MultiplayerOtherPlayersScoreDiffTextManager/<>c <>9
    static GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerOtherPlayersScoreDiffTextManager/<>c <>9
    static void _set_$$9(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c* value);
    // Get static field: static public System.Func`2<MultiplayerScoreProvider/RankedPlayer,System.Boolean> <>9__10_0
    static System::Func_2<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, bool>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<MultiplayerScoreProvider/RankedPlayer,System.Boolean> <>9__10_0
    static void _set_$$9__10_0(System::Func_2<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x1007380
    static void _cctor();
    // System.Boolean <Update>b__10_0(MultiplayerScoreProvider/RankedPlayer p)
    // Offset: 0x10073EC
    bool $Update$b__10_0(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* p);
    // public System.Void .ctor()
    // Offset: 0x10073E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerOtherPlayersScoreDiffTextManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerOtherPlayersScoreDiffTextManager::$$c*, creationType>()));
    }
  }; // MultiplayerOtherPlayersScoreDiffTextManager/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c*, "", "MultiplayerOtherPlayersScoreDiffTextManager/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c::$Update$b__10_0
// Il2CppName: <Update>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c::*)(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)>(&GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c::$Update$b__10_0)> {
  const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c*), "<Update>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
