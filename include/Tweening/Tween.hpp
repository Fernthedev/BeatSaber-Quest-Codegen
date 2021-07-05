// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Tweening.InterpolationType
#include "Tweening/InterpolationType.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Tweening.Tween
  class Tween : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE29804
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE29814
    // private System.Single <duration>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE29824
    // private System.Boolean <loop>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loop and: delay
    char __padding2[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE29834
    // private System.Single <delay>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Action onStart
    // Size: 0x8
    // Offset: 0x20
    System::Action* onStart;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Action onCompleted
    // Size: 0x8
    // Offset: 0x28
    System::Action* onCompleted;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Action onKilled
    // Size: 0x8
    // Offset: 0x30
    System::Action* onKilled;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE29844
    // private System.Boolean <isStarted>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool isStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xE29854
    // private System.Boolean <isKilled>k__BackingField
    // Size: 0x1
    // Offset: 0x39
    bool isKilled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isKilled and: interpolationType
    char __padding8[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE29864
    // private Tweening.InterpolationType <interpolationType>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    Tweening::InterpolationType interpolationType;
    // Field size check
    static_assert(sizeof(Tweening::InterpolationType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE29874
    // private Tweening.EaseType <easeType>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    Tweening::EaseType easeType;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // Padding between fields: easeType and: animationCurve
    char __padding10[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE29884
    // private UnityEngine.AnimationCurve <animationCurve>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AnimationCurve* animationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // Creating value type constructor for type: Tween
    Tween(float time_ = {}, float duration_ = {}, bool loop_ = {}, float delay_ = {}, System::Action* onStart_ = {}, System::Action* onCompleted_ = {}, System::Action* onKilled_ = {}, bool isStarted_ = {}, bool isKilled_ = {}, Tweening::InterpolationType interpolationType_ = {}, Tweening::EaseType easeType_ = {}, UnityEngine::AnimationCurve* animationCurve_ = {}) noexcept : time{time_}, duration{duration_}, loop{loop_}, delay{delay_}, onStart{onStart_}, onCompleted{onCompleted_}, onKilled{onKilled_}, isStarted{isStarted_}, isKilled{isKilled_}, interpolationType{interpolationType_}, easeType{easeType_}, animationCurve{animationCurve_} {}
    // static field const value: static protected System.Single kEpsilon
    static constexpr const float kEpsilon = 0.001;
    // Get static field: static protected System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static protected System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // public System.Single get_progress()
    // Offset: 0x1121118
    float get_progress();
    // public System.Single get_time()
    // Offset: 0x11211B4
    float get_time();
    // protected System.Void set_time(System.Single value)
    // Offset: 0x11211BC
    void set_time(float value);
    // public System.Single get_duration()
    // Offset: 0x11211C4
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0x11211CC
    void set_duration(float value);
    // public System.Boolean get_loop()
    // Offset: 0x11211D4
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0x11211DC
    void set_loop(bool value);
    // public System.Single get_delay()
    // Offset: 0x11211E8
    float get_delay();
    // public System.Void set_delay(System.Single value)
    // Offset: 0x11211F0
    void set_delay(float value);
    // public System.Boolean get_isStarted()
    // Offset: 0x11211F8
    bool get_isStarted();
    // protected System.Void set_isStarted(System.Boolean value)
    // Offset: 0x1121200
    void set_isStarted(bool value);
    // public System.Boolean get_isActive()
    // Offset: 0x112120C
    bool get_isActive();
    // public System.Boolean get_isComplete()
    // Offset: 0x112123C
    bool get_isComplete();
    // public System.Boolean get_isKilled()
    // Offset: 0x112125C
    bool get_isKilled();
    // private System.Void set_isKilled(System.Boolean value)
    // Offset: 0x1121264
    void set_isKilled(bool value);
    // public Tweening.InterpolationType get_interpolationType()
    // Offset: 0x1121270
    Tweening::InterpolationType get_interpolationType();
    // protected System.Void set_interpolationType(Tweening.InterpolationType value)
    // Offset: 0x1121278
    void set_interpolationType(Tweening::InterpolationType value);
    // public Tweening.EaseType get_easeType()
    // Offset: 0x1121280
    Tweening::EaseType get_easeType();
    // public System.Void set_easeType(Tweening.EaseType value)
    // Offset: 0x1121288
    void set_easeType(Tweening::EaseType value);
    // public UnityEngine.AnimationCurve get_animationCurve()
    // Offset: 0x1121290
    UnityEngine::AnimationCurve* get_animationCurve();
    // protected System.Void set_animationCurve(UnityEngine.AnimationCurve value)
    // Offset: 0x1121298
    void set_animationCurve(UnityEngine::AnimationCurve* value);
    // public System.Void Kill()
    // Offset: 0x11212A0
    void Kill();
    // public System.Void Restart()
    // Offset: 0x11212AC
    void Restart();
    // public System.Void Update(System.Single deltaTime)
    // Offset: 0xFFFFFFFF
    void Update(float deltaTime);
    // public System.Void Sample(System.Single t)
    // Offset: 0xFFFFFFFF
    void Sample(float t);
    // protected System.Single Interpolate(System.Single t)
    // Offset: 0x1120940
    float Interpolate(float t);
    // protected System.Void .ctor()
    // Offset: 0x11212B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tween*, creationType>()));
    }
  }; // Tweening.Tween
  #pragma pack(pop)
  static check_size<sizeof(Tween), 72 + sizeof(UnityEngine::AnimationCurve*)> __Tweening_TweenSizeCheck;
  static_assert(sizeof(Tween) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Tweening::Tween*, "Tweening", "Tween");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tweening::Tween::get_progress
// Il2CppName: get_progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_progress)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_time)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::set_time)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_duration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_duration
// Il2CppName: set_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::set_duration)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_loop
// Il2CppName: get_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_loop)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_loop
// Il2CppName: set_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(bool)>(&Tweening::Tween::set_loop)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_delay
// Il2CppName: get_delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_delay)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_delay
// Il2CppName: set_delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::set_delay)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isStarted
// Il2CppName: get_isStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isStarted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_isStarted
// Il2CppName: set_isStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(bool)>(&Tweening::Tween::set_isStarted)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_isStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isActive
// Il2CppName: get_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isActive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isComplete
// Il2CppName: get_isComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isComplete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isKilled
// Il2CppName: get_isKilled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isKilled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isKilled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_isKilled
// Il2CppName: set_isKilled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(bool)>(&Tweening::Tween::set_isKilled)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_isKilled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_interpolationType
// Il2CppName: get_interpolationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::InterpolationType (Tweening::Tween::*)()>(&Tweening::Tween::get_interpolationType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_interpolationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_interpolationType
// Il2CppName: set_interpolationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(Tweening::InterpolationType)>(&Tweening::Tween::set_interpolationType)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Tweening", "InterpolationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_interpolationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_easeType
// Il2CppName: get_easeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::EaseType (Tweening::Tween::*)()>(&Tweening::Tween::get_easeType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_easeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_easeType
// Il2CppName: set_easeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(Tweening::EaseType)>(&Tweening::Tween::set_easeType)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_easeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_animationCurve
// Il2CppName: get_animationCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationCurve* (Tweening::Tween::*)()>(&Tweening::Tween::get_animationCurve)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_animationCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_animationCurve
// Il2CppName: set_animationCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(UnityEngine::AnimationCurve*)>(&Tweening::Tween::set_animationCurve)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_animationCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Kill
// Il2CppName: Kill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)()>(&Tweening::Tween::Kill)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Kill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Restart
// Il2CppName: Restart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)()>(&Tweening::Tween::Restart)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Restart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::Update)> {
  const MethodInfo* get() {
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaTime});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Sample
// Il2CppName: Sample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::Sample)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Sample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)(float)>(&Tweening::Tween::Interpolate)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
