// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableOutputHandle
  struct PlayableOutputHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.IPlayableOutput
  // [TokenAttribute] Offset: FFFFFFFF
  class IPlayableOutput {
    public:
    // Creating value type constructor for type: IPlayableOutput
    IPlayableOutput() noexcept {}
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xFFFFFFFF
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
  }; // UnityEngine.Playables.IPlayableOutput
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::IPlayableOutput*, "UnityEngine.Playables", "IPlayableOutput");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::IPlayableOutput::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutputHandle (UnityEngine::Playables::IPlayableOutput::*)()>(&UnityEngine::Playables::IPlayableOutput::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::IPlayableOutput*), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
