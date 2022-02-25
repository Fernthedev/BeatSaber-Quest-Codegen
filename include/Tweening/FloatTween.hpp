// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tweening.Tween`1
#include "Tweening/Tween_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: StaticMemoryPool`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
  class StaticMemoryPool_7;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Forward declaring type: FloatTween
  class FloatTween;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Tweening::FloatTween);
DEFINE_IL2CPP_ARG_TYPE(Tweening::FloatTween*, "Tweening", "FloatTween");
// Type namespace: Tweening
namespace Tweening {
  // WARNING Size may be invalid!
  // Autogenerated type: Tweening.FloatTween
  // [TokenAttribute] Offset: FFFFFFFF
  class FloatTween : public Tweening::Tween_1<float> {
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1251520
    // Get static field: static public readonly Zenject.StaticMemoryPool`7<System.Single,System.Single,System.Action`1<System.Single>,System.Single,Tweening.EaseType,System.Single,Tweening.FloatTween> Pool
    static Zenject::StaticMemoryPool_7<float, float, System::Action_1<float>*, float, Tweening::EaseType, float, Tweening::FloatTween*>* _get_Pool();
    // Set static field: static public readonly Zenject.StaticMemoryPool`7<System.Single,System.Single,System.Action`1<System.Single>,System.Single,Tweening.EaseType,System.Single,Tweening.FloatTween> Pool
    static void _set_Pool(Zenject::StaticMemoryPool_7<float, float, System::Action_1<float>*, float, Tweening::EaseType, float, Tweening::FloatTween*>* value);
    // public System.Void .ctor(System.Single fromValue, System.Single toValue, System.Action`1<System.Single> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0x2AEEECC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatTween* New_ctor(float fromValue, float toValue, System::Action_1<float>* onUpdate, float duration, Tweening::EaseType easeType, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::FloatTween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatTween*, creationType>(fromValue, toValue, onUpdate, duration, easeType, delay)));
    }
    // public System.Void .ctor(System.Single fromValue, System.Single toValue, System.Action`1<System.Single> onUpdate, System.Single duration, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0x2AEEF64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatTween* New_ctor(float fromValue, float toValue, System::Action_1<float>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::FloatTween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatTween*, creationType>(fromValue, toValue, onUpdate, duration, animationCurve, delay)));
    }
    // static private System.Void .cctor()
    // Offset: 0x2AEF028
    static void _cctor();
    // public System.Single GetValue(System.Single t)
    // Offset: 0x2AEEFFC
    float GetValue(float t);
    // public System.Void .ctor()
    // Offset: 0x2AEEE7C
    // Implemented from: Tweening.Tween`1
    // Base method: System.Void Tween_1::.ctor()
    // Base method: System.Void Tween::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatTween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::FloatTween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatTween*, creationType>()));
    }
  }; // Tweening.FloatTween
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tweening::FloatTween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::FloatTween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::FloatTween::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Tweening::FloatTween::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::FloatTween*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tweening::FloatTween::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::FloatTween::*)(float)>(&Tweening::FloatTween::GetValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tweening::FloatTween*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Tweening::FloatTween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
