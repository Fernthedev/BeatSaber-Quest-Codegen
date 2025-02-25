// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // [TokenAttribute] Offset: FFFFFFFF
  class Tween : public ::Il2CppObject {
    public:
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <duration>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <loop>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loop and: delay
    char __padding2[0x3] = {};
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
    // private System.Boolean <isStarted>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool isStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <isKilled>k__BackingField
    // Size: 0x1
    // Offset: 0x39
    bool isKilled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isKilled and: interpolationType
    char __padding8[0x2] = {};
    // private Tweening.InterpolationType <interpolationType>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    Tweening::InterpolationType interpolationType;
    // Field size check
    static_assert(sizeof(Tweening::InterpolationType) == 0x4);
    // private Tweening.EaseType <easeType>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    Tweening::EaseType easeType;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // Padding between fields: easeType and: animationCurve
    char __padding10[0x4] = {};
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
    // Get instance field reference: private System.Single <time>k__BackingField
    float& dyn_$time$k__BackingField();
    // Get instance field reference: private System.Single <duration>k__BackingField
    float& dyn_$duration$k__BackingField();
    // Get instance field reference: private System.Boolean <loop>k__BackingField
    bool& dyn_$loop$k__BackingField();
    // Get instance field reference: private System.Single <delay>k__BackingField
    float& dyn_$delay$k__BackingField();
    // Get instance field reference: public System.Action onStart
    System::Action*& dyn_onStart();
    // Get instance field reference: public System.Action onCompleted
    System::Action*& dyn_onCompleted();
    // Get instance field reference: public System.Action onKilled
    System::Action*& dyn_onKilled();
    // Get instance field reference: private System.Boolean <isStarted>k__BackingField
    bool& dyn_$isStarted$k__BackingField();
    // Get instance field reference: private System.Boolean <isKilled>k__BackingField
    bool& dyn_$isKilled$k__BackingField();
    // Get instance field reference: private Tweening.InterpolationType <interpolationType>k__BackingField
    Tweening::InterpolationType& dyn_$interpolationType$k__BackingField();
    // Get instance field reference: private Tweening.EaseType <easeType>k__BackingField
    Tweening::EaseType& dyn_$easeType$k__BackingField();
    // Get instance field reference: private UnityEngine.AnimationCurve <animationCurve>k__BackingField
    UnityEngine::AnimationCurve*& dyn_$animationCurve$k__BackingField();
    // public System.Single get_progress()
    // Offset: 0x1293CC0
    float get_progress();
    // public System.Single get_time()
    // Offset: 0x1293D5C
    float get_time();
    // protected System.Void set_time(System.Single value)
    // Offset: 0x1293D64
    void set_time(float value);
    // public System.Single get_duration()
    // Offset: 0x1293D6C
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0x1293D74
    void set_duration(float value);
    // public System.Boolean get_loop()
    // Offset: 0x1293D7C
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0x1293D84
    void set_loop(bool value);
    // public System.Single get_delay()
    // Offset: 0x1293D90
    float get_delay();
    // public System.Void set_delay(System.Single value)
    // Offset: 0x1293D98
    void set_delay(float value);
    // public System.Boolean get_isStarted()
    // Offset: 0x1293DA0
    bool get_isStarted();
    // protected System.Void set_isStarted(System.Boolean value)
    // Offset: 0x1293DA8
    void set_isStarted(bool value);
    // public System.Boolean get_isActive()
    // Offset: 0x1293DB4
    bool get_isActive();
    // public System.Boolean get_isComplete()
    // Offset: 0x1293DE4
    bool get_isComplete();
    // public System.Boolean get_isKilled()
    // Offset: 0x1293E04
    bool get_isKilled();
    // private System.Void set_isKilled(System.Boolean value)
    // Offset: 0x1293E0C
    void set_isKilled(bool value);
    // public Tweening.InterpolationType get_interpolationType()
    // Offset: 0x1293E18
    Tweening::InterpolationType get_interpolationType();
    // protected System.Void set_interpolationType(Tweening.InterpolationType value)
    // Offset: 0x1293E20
    void set_interpolationType(Tweening::InterpolationType value);
    // public Tweening.EaseType get_easeType()
    // Offset: 0x1293E28
    Tweening::EaseType get_easeType();
    // public System.Void set_easeType(Tweening.EaseType value)
    // Offset: 0x1293E30
    void set_easeType(Tweening::EaseType value);
    // public UnityEngine.AnimationCurve get_animationCurve()
    // Offset: 0x1293E38
    UnityEngine::AnimationCurve* get_animationCurve();
    // protected System.Void set_animationCurve(UnityEngine.AnimationCurve value)
    // Offset: 0x1293E40
    void set_animationCurve(UnityEngine::AnimationCurve* value);
    // public System.Void Kill()
    // Offset: 0x1293E48
    void Kill();
    // public System.Void Restart()
    // Offset: 0x1293E54
    void Restart();
    // public System.Void Update(System.Single deltaTime)
    // Offset: 0xFFFFFFFF
    void Update(float deltaTime);
    // public System.Void Sample(System.Single t)
    // Offset: 0xFFFFFFFF
    void Sample(float t);
    // protected System.Single Interpolate(System.Single t)
    // Offset: 0x12934E8
    float Interpolate(float t);
    // protected System.Void .ctor()
    // Offset: 0x1293E60
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
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_duration
// Il2CppName: set_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::set_duration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_loop
// Il2CppName: get_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_loop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_loop
// Il2CppName: set_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(bool)>(&Tweening::Tween::set_loop)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_delay
// Il2CppName: get_delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)()>(&Tweening::Tween::get_delay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_delay
// Il2CppName: set_delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::set_delay)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isStarted
// Il2CppName: get_isStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_isStarted
// Il2CppName: set_isStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(bool)>(&Tweening::Tween::set_isStarted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_isStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isActive
// Il2CppName: get_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isComplete
// Il2CppName: get_isComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_isKilled
// Il2CppName: get_isKilled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tweening::Tween::*)()>(&Tweening::Tween::get_isKilled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_isKilled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_isKilled
// Il2CppName: set_isKilled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(bool)>(&Tweening::Tween::set_isKilled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_isKilled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_interpolationType
// Il2CppName: get_interpolationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::InterpolationType (Tweening::Tween::*)()>(&Tweening::Tween::get_interpolationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_interpolationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_interpolationType
// Il2CppName: set_interpolationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(Tweening::InterpolationType)>(&Tweening::Tween::set_interpolationType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Tweening", "InterpolationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_interpolationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_easeType
// Il2CppName: get_easeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::EaseType (Tweening::Tween::*)()>(&Tweening::Tween::get_easeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_easeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_easeType
// Il2CppName: set_easeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(Tweening::EaseType)>(&Tweening::Tween::set_easeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_easeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::get_animationCurve
// Il2CppName: get_animationCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationCurve* (Tweening::Tween::*)()>(&Tweening::Tween::get_animationCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "get_animationCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::set_animationCurve
// Il2CppName: set_animationCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(UnityEngine::AnimationCurve*)>(&Tweening::Tween::set_animationCurve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "set_animationCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Kill
// Il2CppName: Kill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)()>(&Tweening::Tween::Kill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Kill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Restart
// Il2CppName: Restart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)()>(&Tweening::Tween::Restart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Restart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::Update)> {
  static const MethodInfo* get() {
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaTime});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Sample
// Il2CppName: Sample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Tween::*)(float)>(&Tweening::Tween::Sample)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Sample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::Tween::*)(float)>(&Tweening::Tween::Interpolate)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::Tween*), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Tweening::Tween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
