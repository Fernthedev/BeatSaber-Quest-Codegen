// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IStartSeekSongController
  // [TokenAttribute] Offset: FFFFFFFF
  class IStartSeekSongController {
    public:
    // Creating value type constructor for type: IStartSeekSongController
    IStartSeekSongController() noexcept {}
    // public UnityEngine.WaitUntil get_waitUntilIsReadyToStartTheSong()
    // Offset: 0xFFFFFFFF
    UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();
    // public System.Void StartSong(System.Single offsetTime)
    // Offset: 0xFFFFFFFF
    void StartSong(float offsetTime);
    // public System.Void SeekTo(System.Single songTime)
    // Offset: 0xFFFFFFFF
    void SeekTo(float songTime);
  }; // IStartSeekSongController
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IStartSeekSongController*, "", "IStartSeekSongController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IStartSeekSongController::get_waitUntilIsReadyToStartTheSong
// Il2CppName: get_waitUntilIsReadyToStartTheSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::WaitUntil* (GlobalNamespace::IStartSeekSongController::*)()>(&GlobalNamespace::IStartSeekSongController::get_waitUntilIsReadyToStartTheSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IStartSeekSongController*), "get_waitUntilIsReadyToStartTheSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IStartSeekSongController::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IStartSeekSongController::*)(float)>(&GlobalNamespace::IStartSeekSongController::StartSong)> {
  static const MethodInfo* get() {
    static auto* offsetTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IStartSeekSongController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IStartSeekSongController::SeekTo
// Il2CppName: SeekTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IStartSeekSongController::*)(float)>(&GlobalNamespace::IStartSeekSongController::SeekTo)> {
  static const MethodInfo* get() {
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IStartSeekSongController*), "SeekTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songTime});
  }
};
