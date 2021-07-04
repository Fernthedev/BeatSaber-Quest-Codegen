// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.CoroutineTween.ITweenValue
  class ITweenValue {
    public:
    // Creating value type constructor for type: ITweenValue
    ITweenValue() noexcept {}
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0xFFFFFFFF
    void TweenValue(float floatPercentage);
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0xFFFFFFFF
    bool get_ignoreTimeScale();
    // public System.Single get_duration()
    // Offset: 0xFFFFFFFF
    float get_duration();
    // public System.Boolean ValidTarget()
    // Offset: 0xFFFFFFFF
    bool ValidTarget();
  }; // UnityEngine.UI.CoroutineTween.ITweenValue
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::ITweenValue*, "UnityEngine.UI.CoroutineTween", "ITweenValue");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ITweenValue::TweenValue
// Il2CppName: TweenValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::ITweenValue::*)(float)>(&UnityEngine::UI::CoroutineTween::ITweenValue::TweenValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ITweenValue*), "TweenValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ITweenValue::get_ignoreTimeScale
// Il2CppName: get_ignoreTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CoroutineTween::ITweenValue::*)()>(&UnityEngine::UI::CoroutineTween::ITweenValue::get_ignoreTimeScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ITweenValue*), "get_ignoreTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ITweenValue::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::CoroutineTween::ITweenValue::*)()>(&UnityEngine::UI::CoroutineTween::ITweenValue::get_duration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ITweenValue*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ITweenValue::ValidTarget
// Il2CppName: ValidTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CoroutineTween::ITweenValue::*)()>(&UnityEngine::UI::CoroutineTween::ITweenValue::ValidTarget)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ITweenValue*), "ValidTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
