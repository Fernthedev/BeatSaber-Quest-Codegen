// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::WSA
namespace UnityEngine::XR::WSA {
}
// Completed forward declares
// Type namespace: UnityEngine.XR.WSA
namespace UnityEngine::XR::WSA {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.WSA.WorldAnchor
  // [UsedByNativeCodeAttribute] Offset: DC8F00
  // [NativeHeaderAttribute] Offset: DC8F00
  // [RequireComponent] Offset: DC8F00
  // [MovedFromAttribute] Offset: DC8F00
  class WorldAnchor : public UnityEngine::Component {
    public:
    // Nested type: UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate
    class OnTrackingChangedDelegate;
    // [DebuggerBrowsableAttribute] Offset: 0xDC8FF8
    // [CompilerGeneratedAttribute] Offset: 0xDC8FF8
    // private UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate OnTrackingChanged
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate* OnTrackingChanged;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate*) == 0x8);
    // Creating value type constructor for type: WorldAnchor
    WorldAnchor(UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate* OnTrackingChanged_ = {}) noexcept : OnTrackingChanged{OnTrackingChanged_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static private System.Void Internal_TriggerEventOnTrackingLost(UnityEngine.XR.WSA.WorldAnchor worldAnchor, System.Boolean located)
    // Offset: 0x23F0804
    static void Internal_TriggerEventOnTrackingLost(UnityEngine::XR::WSA::WorldAnchor* worldAnchor, bool located);
  }; // UnityEngine.XR.WSA.WorldAnchor
  #pragma pack(pop)
  static check_size<sizeof(WorldAnchor), 24 + sizeof(UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate*)> __UnityEngine_XR_WSA_WorldAnchorSizeCheck;
  static_assert(sizeof(WorldAnchor) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::WSA::WorldAnchor*, "UnityEngine.XR.WSA", "WorldAnchor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::WSA::WorldAnchor::Internal_TriggerEventOnTrackingLost
// Il2CppName: Internal_TriggerEventOnTrackingLost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::WSA::WorldAnchor*, bool)>(&UnityEngine::XR::WSA::WorldAnchor::Internal_TriggerEventOnTrackingLost)> {
  const MethodInfo* get() {
    static auto* worldAnchor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.WSA", "WorldAnchor")->byval_arg;
    static auto* located = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::WSA::WorldAnchor*), "Internal_TriggerEventOnTrackingLost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldAnchor, located});
  }
};
