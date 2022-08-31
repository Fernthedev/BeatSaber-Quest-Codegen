// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: Valve.VR.VROverlayInputMethod
#include "Valve/VR/VROverlayInputMethod.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: VREvent_t
  struct VREvent_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_Overlay
  class SteamVR_Overlay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_Overlay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_Overlay*, "", "SteamVR_Overlay");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Overlay
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_Overlay : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SteamVR_Overlay::IntersectionResults
    struct IntersectionResults;
    public:
    // public UnityEngine.Texture texture
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // public System.Boolean curved
    // Size: 0x1
    // Offset: 0x20
    bool curved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean antialias
    // Size: 0x1
    // Offset: 0x21
    bool antialias;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean highquality
    // Size: 0x1
    // Offset: 0x22
    bool highquality;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: highquality and: scale
    char __padding3[0x1] = {};
    // [TooltipAttribute] Offset: 0x10A083C
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x24
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10A0874
    // public System.Single distance
    // Size: 0x4
    // Offset: 0x28
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10A08AC
    // [RangeAttribute] Offset: 0x10A08AC
    // public System.Single alpha
    // Size: 0x4
    // Offset: 0x2C
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector4 uvOffset
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Vector4 uvOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector2 mouseScale
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Vector2 mouseScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 curvedRange
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Vector2 curvedRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public Valve.VR.VROverlayInputMethod inputMethod
    // Size: 0x4
    // Offset: 0x50
    ::Valve::VR::VROverlayInputMethod inputMethod;
    // Field size check
    static_assert(sizeof(::Valve::VR::VROverlayInputMethod) == 0x4);
    // Padding between fields: inputMethod and: handle
    char __padding10[0x4] = {};
    // private System.UInt64 handle
    // Size: 0x8
    // Offset: 0x58
    uint64_t handle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private SteamVR_Overlay <instance>k__BackingField
    static ::GlobalNamespace::SteamVR_Overlay* _get_$instance$k__BackingField();
    // Set static field: static private SteamVR_Overlay <instance>k__BackingField
    static void _set_$instance$k__BackingField(::GlobalNamespace::SteamVR_Overlay* value);
    // Get instance field reference: public UnityEngine.Texture texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_texture();
    // Get instance field reference: public System.Boolean curved
    [[deprecated("Use field access instead!")]] bool& dyn_curved();
    // Get instance field reference: public System.Boolean antialias
    [[deprecated("Use field access instead!")]] bool& dyn_antialias();
    // Get instance field reference: public System.Boolean highquality
    [[deprecated("Use field access instead!")]] bool& dyn_highquality();
    // Get instance field reference: public System.Single scale
    [[deprecated("Use field access instead!")]] float& dyn_scale();
    // Get instance field reference: public System.Single distance
    [[deprecated("Use field access instead!")]] float& dyn_distance();
    // Get instance field reference: public System.Single alpha
    [[deprecated("Use field access instead!")]] float& dyn_alpha();
    // Get instance field reference: public UnityEngine.Vector4 uvOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_uvOffset();
    // Get instance field reference: public UnityEngine.Vector2 mouseScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_mouseScale();
    // Get instance field reference: public UnityEngine.Vector2 curvedRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_curvedRange();
    // Get instance field reference: public Valve.VR.VROverlayInputMethod inputMethod
    [[deprecated("Use field access instead!")]] ::Valve::VR::VROverlayInputMethod& dyn_inputMethod();
    // Get instance field reference: private System.UInt64 handle
    [[deprecated("Use field access instead!")]] uint64_t& dyn_handle();
    // static public SteamVR_Overlay get_instance()
    // Offset: 0x18B52AC
    static ::GlobalNamespace::SteamVR_Overlay* get_instance();
    // static private System.Void set_instance(SteamVR_Overlay value)
    // Offset: 0x18B52FC
    static void set_instance(::GlobalNamespace::SteamVR_Overlay* value);
    // static public System.String get_key()
    // Offset: 0x18B1AB0
    static ::StringW get_key();
    // public System.Void .ctor()
    // Offset: 0x18B5C60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Overlay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Overlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Overlay*, creationType>()));
    }
    // private System.Void OnEnable()
    // Offset: 0x18B5350
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x18B54A0
    void OnDisable();
    // public System.Void UpdateOverlay()
    // Offset: 0x18B555C
    void UpdateOverlay();
    // public System.Boolean PollNextEvent(ref Valve.VR.VREvent_t pEvent)
    // Offset: 0x18B5998
    bool PollNextEvent(ByRef<::Valve::VR::VREvent_t> pEvent);
    // public System.Boolean ComputeIntersection(UnityEngine.Vector3 source, UnityEngine.Vector3 direction, ref SteamVR_Overlay/IntersectionResults results)
    // Offset: 0x18B5AA4
    bool ComputeIntersection(::UnityEngine::Vector3 source, ::UnityEngine::Vector3 direction, ByRef<::GlobalNamespace::SteamVR_Overlay::IntersectionResults> results);
  }; // SteamVR_Overlay
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Overlay), 88 + sizeof(uint64_t)> __GlobalNamespace_SteamVR_OverlaySizeCheck;
  static_assert(sizeof(SteamVR_Overlay) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Overlay::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_Overlay* (*)()>(&GlobalNamespace::SteamVR_Overlay::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Overlay*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Overlay::set_instance
// Il2CppName: set_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::SteamVR_Overlay*)>(&GlobalNamespace::SteamVR_Overlay::set_instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SteamVR_Overlay")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Overlay*), "set_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Overlay::get_key
// Il2CppName: get_key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::SteamVR_Overlay::get_key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Overlay*), "get_key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Overlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Overlay::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Overlay::*)()>(&GlobalNamespace::SteamVR_Overlay::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Overlay*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Overlay::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Overlay::*)()>(&GlobalNamespace::SteamVR_Overlay::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Overlay*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Overlay::UpdateOverlay
// Il2CppName: UpdateOverlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Overlay::*)()>(&GlobalNamespace::SteamVR_Overlay::UpdateOverlay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Overlay*), "UpdateOverlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Overlay::PollNextEvent
// Il2CppName: PollNextEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Overlay::*)(ByRef<::Valve::VR::VREvent_t>)>(&GlobalNamespace::SteamVR_Overlay::PollNextEvent)> {
  static const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Overlay*), "PollNextEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Overlay::ComputeIntersection
// Il2CppName: ComputeIntersection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Overlay::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::GlobalNamespace::SteamVR_Overlay::IntersectionResults>)>(&GlobalNamespace::SteamVR_Overlay::ComputeIntersection)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* results = &::il2cpp_utils::GetClassFromName("", "SteamVR_Overlay/IntersectionResults")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Overlay*), "ComputeIntersection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, direction, results});
  }
};
