// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteCutSoundEffectManager
#include "GlobalNamespace/NoteCutSoundEffectManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutSoundEffectManager/InitData
  class NoteCutSoundEffectManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean useTestAudioClips
    // Size: 0x1
    // Offset: 0x10
    bool useTestAudioClips;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean ignoreBadCuts
    // Size: 0x1
    // Offset: 0x11
    bool ignoreBadCuts;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(bool useTestAudioClips_ = {}, bool ignoreBadCuts_ = {}) noexcept : useTestAudioClips{useTestAudioClips_}, ignoreBadCuts{ignoreBadCuts_} {}
    // public System.Void .ctor(System.Boolean useTestAudioClips, System.Boolean ignoreBadCuts)
    // Offset: 0x11D5FD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutSoundEffectManager::InitData* New_ctor(bool useTestAudioClips, bool ignoreBadCuts) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutSoundEffectManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutSoundEffectManager::InitData*, creationType>(useTestAudioClips, ignoreBadCuts)));
    }
  }; // NoteCutSoundEffectManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(NoteCutSoundEffectManager::InitData), 17 + sizeof(bool)> __GlobalNamespace_NoteCutSoundEffectManager_InitDataSizeCheck;
  static_assert(sizeof(NoteCutSoundEffectManager::InitData) == 0x12);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutSoundEffectManager::InitData*, "", "NoteCutSoundEffectManager/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffectManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
