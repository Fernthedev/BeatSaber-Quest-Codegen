// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TimelineAsset
#include "UnityEngine/Timeline/TimelineAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.EditorSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class TimelineAsset::EditorSettings : public ::Il2CppObject {
    public:
    // private System.Single m_Framerate
    // Size: 0x4
    // Offset: 0x10
    float m_Framerate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_ScenePreview
    // Size: 0x1
    // Offset: 0x14
    bool m_ScenePreview;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EditorSettings
    EditorSettings(float m_Framerate_ = {}, bool m_ScenePreview_ = {}) noexcept : m_Framerate{m_Framerate_}, m_ScenePreview{m_ScenePreview_} {}
    // Get static field: static readonly System.Single kMinFps
    static float _get_kMinFps();
    // Set static field: static readonly System.Single kMinFps
    static void _set_kMinFps(float value);
    // Get static field: static readonly System.Single kMaxFps
    static float _get_kMaxFps();
    // Set static field: static readonly System.Single kMaxFps
    static void _set_kMaxFps(float value);
    // Get static field: static readonly System.Single kDefaultFps
    static float _get_kDefaultFps();
    // Set static field: static readonly System.Single kDefaultFps
    static void _set_kDefaultFps(float value);
    // Get instance field reference: private System.Single m_Framerate
    float& dyn_m_Framerate();
    // Get instance field reference: private System.Boolean m_ScenePreview
    bool& dyn_m_ScenePreview();
    // public System.Single get_fps()
    // Offset: 0x23650C4
    float get_fps();
    // public System.Void set_fps(System.Single value)
    // Offset: 0x23650CC
    void set_fps(float value);
    // public System.Boolean get_scenePreview()
    // Offset: 0x23650F4
    bool get_scenePreview();
    // public System.Void set_scenePreview(System.Boolean value)
    // Offset: 0x23650FC
    void set_scenePreview(bool value);
    // static private System.Void .cctor()
    // Offset: 0x2365188
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2365108
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineAsset::EditorSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimelineAsset::EditorSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineAsset::EditorSettings*, creationType>()));
    }
  }; // UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.EditorSettings
  #pragma pack(pop)
  static check_size<sizeof(TimelineAsset::EditorSettings), 20 + sizeof(bool)> __UnityEngine_Timeline_TimelineAsset_EditorSettingsSizeCheck;
  static_assert(sizeof(TimelineAsset::EditorSettings) == 0x15);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineAsset::EditorSettings*, "UnityEngine.Timeline", "TimelineAsset/EditorSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::get_fps
// Il2CppName: get_fps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)()>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::get_fps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "get_fps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::set_fps
// Il2CppName: set_fps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)(float)>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::set_fps)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "set_fps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::get_scenePreview
// Il2CppName: get_scenePreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)()>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::get_scenePreview)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "get_scenePreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::set_scenePreview
// Il2CppName: set_scenePreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)(bool)>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::set_scenePreview)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "set_scenePreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
