// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.MatchTargetFields
#include "UnityEngine/Timeline/MatchTargetFields.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: MatchTargetFieldConstants
  class MatchTargetFieldConstants;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::MatchTargetFieldConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MatchTargetFieldConstants*, "UnityEngine.Timeline", "MatchTargetFieldConstants");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.MatchTargetFieldConstants
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MatchTargetFieldConstants : public ::Il2CppObject {
    public:
    // Get static field: static public UnityEngine.Timeline.MatchTargetFields All
    static ::UnityEngine::Timeline::MatchTargetFields _get_All();
    // Set static field: static public UnityEngine.Timeline.MatchTargetFields All
    static void _set_All(::UnityEngine::Timeline::MatchTargetFields value);
    // Get static field: static public UnityEngine.Timeline.MatchTargetFields None
    static ::UnityEngine::Timeline::MatchTargetFields _get_None();
    // Set static field: static public UnityEngine.Timeline.MatchTargetFields None
    static void _set_None(::UnityEngine::Timeline::MatchTargetFields value);
    // Get static field: static public UnityEngine.Timeline.MatchTargetFields Position
    static ::UnityEngine::Timeline::MatchTargetFields _get_Position();
    // Set static field: static public UnityEngine.Timeline.MatchTargetFields Position
    static void _set_Position(::UnityEngine::Timeline::MatchTargetFields value);
    // Get static field: static public UnityEngine.Timeline.MatchTargetFields Rotation
    static ::UnityEngine::Timeline::MatchTargetFields _get_Rotation();
    // Set static field: static public UnityEngine.Timeline.MatchTargetFields Rotation
    static void _set_Rotation(::UnityEngine::Timeline::MatchTargetFields value);
    // static private System.Void .cctor()
    // Offset: 0x1DB03CC
    static void _cctor();
    // static public System.Boolean HasAny(UnityEngine.Timeline.MatchTargetFields me, UnityEngine.Timeline.MatchTargetFields fields)
    // Offset: 0x1DB0340
    static bool HasAny(::UnityEngine::Timeline::MatchTargetFields me, ::UnityEngine::Timeline::MatchTargetFields fields);
    // static public UnityEngine.Timeline.MatchTargetFields Toggle(UnityEngine.Timeline.MatchTargetFields me, UnityEngine.Timeline.MatchTargetFields flag)
    // Offset: 0x1DB03C4
    static ::UnityEngine::Timeline::MatchTargetFields Toggle(::UnityEngine::Timeline::MatchTargetFields me, ::UnityEngine::Timeline::MatchTargetFields flag);
  }; // UnityEngine.Timeline.MatchTargetFieldConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::MatchTargetFieldConstants::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::MatchTargetFieldConstants::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MatchTargetFieldConstants*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MatchTargetFieldConstants::HasAny
// Il2CppName: HasAny
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::MatchTargetFields, ::UnityEngine::Timeline::MatchTargetFields)>(&UnityEngine::Timeline::MatchTargetFieldConstants::HasAny)> {
  static const MethodInfo* get() {
    static auto* me = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "MatchTargetFields")->byval_arg;
    static auto* fields = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "MatchTargetFields")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MatchTargetFieldConstants*), "HasAny", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{me, fields});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MatchTargetFieldConstants::Toggle
// Il2CppName: Toggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::MatchTargetFields (*)(::UnityEngine::Timeline::MatchTargetFields, ::UnityEngine::Timeline::MatchTargetFields)>(&UnityEngine::Timeline::MatchTargetFieldConstants::Toggle)> {
  static const MethodInfo* get() {
    static auto* me = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "MatchTargetFields")->byval_arg;
    static auto* flag = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "MatchTargetFields")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MatchTargetFieldConstants*), "Toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{me, flag});
  }
};
