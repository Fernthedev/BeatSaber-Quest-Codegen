// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.ITweenValue
#include "TMPro/ITweenValue.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x15
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.FloatTween
  struct FloatTween/*, public System::ValueType, public TMPro::ITweenValue*/ {
    public:
    // Nested type: TMPro::FloatTween::FloatTweenCallback
    class FloatTweenCallback;
    // private TMPro.FloatTween/FloatTweenCallback m_Target
    // Size: 0x8
    // Offset: 0x0
    TMPro::FloatTween::FloatTweenCallback* m_Target;
    // Field size check
    static_assert(sizeof(TMPro::FloatTween::FloatTweenCallback*) == 0x8);
    // private System.Single m_StartValue
    // Size: 0x4
    // Offset: 0x8
    float m_StartValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_TargetValue
    // Size: 0x4
    // Offset: 0xC
    float m_TargetValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Duration
    // Size: 0x4
    // Offset: 0x10
    float m_Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_IgnoreTimeScale
    // Size: 0x1
    // Offset: 0x14
    bool m_IgnoreTimeScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FloatTween
    constexpr FloatTween(TMPro::FloatTween::FloatTweenCallback* m_Target_ = {}, float m_StartValue_ = {}, float m_TargetValue_ = {}, float m_Duration_ = {}, bool m_IgnoreTimeScale_ = {}) noexcept : m_Target{m_Target_}, m_StartValue{m_StartValue_}, m_TargetValue{m_TargetValue_}, m_Duration{m_Duration_}, m_IgnoreTimeScale{m_IgnoreTimeScale_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator TMPro::ITweenValue
    operator TMPro::ITweenValue() noexcept {
      return *reinterpret_cast<TMPro::ITweenValue*>(this);
    }
    // public System.Single get_startValue()
    // Offset: 0xEE4E80
    float get_startValue();
    // public System.Void set_startValue(System.Single value)
    // Offset: 0xEE4E88
    void set_startValue(float value);
    // public System.Single get_targetValue()
    // Offset: 0xEE4E90
    float get_targetValue();
    // public System.Void set_targetValue(System.Single value)
    // Offset: 0xEE4E98
    void set_targetValue(float value);
    // public System.Single get_duration()
    // Offset: 0xEE4EA0
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0xEE4EA8
    void set_duration(float value);
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0xEE4EB0
    bool get_ignoreTimeScale();
    // public System.Void set_ignoreTimeScale(System.Boolean value)
    // Offset: 0xEE4EB8
    void set_ignoreTimeScale(bool value);
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0xEE4EC4
    void TweenValue(float floatPercentage);
    // public System.Void AddOnChangedCallback(UnityEngine.Events.UnityAction`1<System.Single> callback)
    // Offset: 0xEE4ECC
    void AddOnChangedCallback(UnityEngine::Events::UnityAction_1<float>* callback);
    // public System.Boolean GetIgnoreTimescale()
    // Offset: 0xEE4ED4
    bool GetIgnoreTimescale();
    // public System.Single GetDuration()
    // Offset: 0xEE4EDC
    float GetDuration();
    // public System.Boolean ValidTarget()
    // Offset: 0xEE4EE4
    bool ValidTarget();
  }; // TMPro.FloatTween
  #pragma pack(pop)
  static check_size<sizeof(FloatTween), 20 + sizeof(bool)> __TMPro_FloatTweenSizeCheck;
  static_assert(sizeof(FloatTween) == 0x15);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::FloatTween, "TMPro", "FloatTween");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::FloatTween::get_startValue
// Il2CppName: get_startValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::FloatTween::*)()>(&TMPro::FloatTween::get_startValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "get_startValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::set_startValue
// Il2CppName: set_startValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FloatTween::*)(float)>(&TMPro::FloatTween::set_startValue)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "set_startValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::get_targetValue
// Il2CppName: get_targetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::FloatTween::*)()>(&TMPro::FloatTween::get_targetValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "get_targetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::set_targetValue
// Il2CppName: set_targetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FloatTween::*)(float)>(&TMPro::FloatTween::set_targetValue)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "set_targetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::FloatTween::*)()>(&TMPro::FloatTween::get_duration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::set_duration
// Il2CppName: set_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FloatTween::*)(float)>(&TMPro::FloatTween::set_duration)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "set_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::get_ignoreTimeScale
// Il2CppName: get_ignoreTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::FloatTween::*)()>(&TMPro::FloatTween::get_ignoreTimeScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "get_ignoreTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::set_ignoreTimeScale
// Il2CppName: set_ignoreTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FloatTween::*)(bool)>(&TMPro::FloatTween::set_ignoreTimeScale)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "set_ignoreTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::TweenValue
// Il2CppName: TweenValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FloatTween::*)(float)>(&TMPro::FloatTween::TweenValue)> {
  const MethodInfo* get() {
    static auto* floatPercentage = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "TweenValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{floatPercentage});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::AddOnChangedCallback
// Il2CppName: AddOnChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FloatTween::*)(UnityEngine::Events::UnityAction_1<float>*)>(&TMPro::FloatTween::AddOnChangedCallback)> {
  const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "AddOnChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::GetIgnoreTimescale
// Il2CppName: GetIgnoreTimescale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::FloatTween::*)()>(&TMPro::FloatTween::GetIgnoreTimescale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "GetIgnoreTimescale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::GetDuration
// Il2CppName: GetDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::FloatTween::*)()>(&TMPro::FloatTween::GetDuration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "GetDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::FloatTween::ValidTarget
// Il2CppName: ValidTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::FloatTween::*)()>(&TMPro::FloatTween::ValidTarget)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::FloatTween), "ValidTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
