// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Playables
namespace UnityEngine::Experimental::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.Playables.TexturePlayableOutput
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DB7A24
  // [StaticAccessorAttribute] Offset: DB7A24
  // [NativeHeaderAttribute] Offset: DB7A24
  // [RequiredByNativeCodeAttribute] Offset: DB7A24
  // [NativeHeaderAttribute] Offset: DB7A24
  struct TexturePlayableOutput/*, public System::ValueType, public UnityEngine::Playables::IPlayableOutput*/ {
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableOutputHandle) == 0xC);
    // Creating value type constructor for type: TexturePlayableOutput
    constexpr TexturePlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableOutput
    operator UnityEngine::Playables::IPlayableOutput() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableOutput*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableOutputHandle
    constexpr operator UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private UnityEngine.Playables.PlayableOutputHandle m_Handle
    UnityEngine::Playables::PlayableOutputHandle& dyn_m_Handle();
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0x1C55C70
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
  }; // UnityEngine.Experimental.Playables.TexturePlayableOutput
  #pragma pack(pop)
  static check_size<sizeof(TexturePlayableOutput), 0 + sizeof(UnityEngine::Playables::PlayableOutputHandle)> __UnityEngine_Experimental_Playables_TexturePlayableOutputSizeCheck;
  static_assert(sizeof(TexturePlayableOutput) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Playables::TexturePlayableOutput, "UnityEngine.Experimental.Playables", "TexturePlayableOutput");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Playables::TexturePlayableOutput::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutputHandle (UnityEngine::Experimental::Playables::TexturePlayableOutput::*)()>(&UnityEngine::Experimental::Playables::TexturePlayableOutput::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Playables::TexturePlayableOutput), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
