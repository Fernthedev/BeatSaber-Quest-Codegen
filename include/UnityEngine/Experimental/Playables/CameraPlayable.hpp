// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Playables
namespace UnityEngine::Experimental::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.Playables.CameraPlayable
  // [NativeHeaderAttribute] Offset: D924F4
  // [StaticAccessorAttribute] Offset: D924F4
  // [NativeHeaderAttribute] Offset: D924F4
  // [NativeHeaderAttribute] Offset: D924F4
  // [RequiredByNativeCodeAttribute] Offset: D924F4
  struct CameraPlayable/*, public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Experimental::Playables::CameraPlayable>*/ {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    // Creating value type constructor for type: CameraPlayable
    constexpr CameraPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Experimental::Playables::CameraPlayable>
    operator System::IEquatable_1<UnityEngine::Experimental::Playables::CameraPlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Experimental::Playables::CameraPlayable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xF07E50
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Experimental.Playables.CameraPlayable other)
    // Offset: 0xF07E5C
    bool Equals(UnityEngine::Experimental::Playables::CameraPlayable other);
  }; // UnityEngine.Experimental.Playables.CameraPlayable
  #pragma pack(pop)
  static check_size<sizeof(CameraPlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Experimental_Playables_CameraPlayableSizeCheck;
  static_assert(sizeof(CameraPlayable) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Playables::CameraPlayable, "UnityEngine.Experimental.Playables", "CameraPlayable");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::Experimental::Playables::CameraPlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Experimental::Playables::CameraPlayable::*)()>(&UnityEngine::Experimental::Playables::CameraPlayable::GetHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Playables::CameraPlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Playables::CameraPlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::Playables::CameraPlayable::*)(UnityEngine::Experimental::Playables::CameraPlayable)>(&UnityEngine::Experimental::Playables::CameraPlayable::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Playables::CameraPlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Experimental::Playables::CameraPlayable>()});
  }
};
