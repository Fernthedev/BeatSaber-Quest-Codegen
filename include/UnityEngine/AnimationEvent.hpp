// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AnimationEventSource
#include "UnityEngine/AnimationEventSource.hpp"
// Including type: UnityEngine.AnimatorStateInfo
#include "UnityEngine/AnimatorStateInfo.hpp"
// Including type: UnityEngine.AnimatorClipInfo
#include "UnityEngine/AnimatorClipInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: AnimationState
  class AnimationState;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x74
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimationEvent
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: DCE6E4
  class AnimationEvent : public ::Il2CppObject {
    public:
    // System.Single m_Time
    // Size: 0x4
    // Offset: 0x10
    float m_Time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Time and: m_FunctionName
    char __padding0[0x4] = {};
    // System.String m_FunctionName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_FunctionName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String m_StringParameter
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_StringParameter;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // UnityEngine.Object m_ObjectReferenceParameter
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Object* m_ObjectReferenceParameter;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
    // System.Single m_FloatParameter
    // Size: 0x4
    // Offset: 0x30
    float m_FloatParameter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Int32 m_IntParameter
    // Size: 0x4
    // Offset: 0x34
    int m_IntParameter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_MessageOptions
    // Size: 0x4
    // Offset: 0x38
    int m_MessageOptions;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // UnityEngine.AnimationEventSource m_Source
    // Size: 0x4
    // Offset: 0x3C
    UnityEngine::AnimationEventSource m_Source;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationEventSource) == 0x4);
    // UnityEngine.AnimationState m_StateSender
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationState* m_StateSender;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationState*) == 0x8);
    // UnityEngine.AnimatorStateInfo m_AnimatorStateInfo
    // Size: 0x24
    // Offset: 0x48
    UnityEngine::AnimatorStateInfo m_AnimatorStateInfo;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimatorStateInfo) == 0x24);
    // UnityEngine.AnimatorClipInfo m_AnimatorClipInfo
    // Size: 0x8
    // Offset: 0x6C
    UnityEngine::AnimatorClipInfo m_AnimatorClipInfo;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimatorClipInfo) == 0x8);
    // Creating value type constructor for type: AnimationEvent
    AnimationEvent(float m_Time_ = {}, ::Il2CppString* m_FunctionName_ = {}, ::Il2CppString* m_StringParameter_ = {}, UnityEngine::Object* m_ObjectReferenceParameter_ = {}, float m_FloatParameter_ = {}, int m_IntParameter_ = {}, int m_MessageOptions_ = {}, UnityEngine::AnimationEventSource m_Source_ = {}, UnityEngine::AnimationState* m_StateSender_ = {}, UnityEngine::AnimatorStateInfo m_AnimatorStateInfo_ = {}, UnityEngine::AnimatorClipInfo m_AnimatorClipInfo_ = {}) noexcept : m_Time{m_Time_}, m_FunctionName{m_FunctionName_}, m_StringParameter{m_StringParameter_}, m_ObjectReferenceParameter{m_ObjectReferenceParameter_}, m_FloatParameter{m_FloatParameter_}, m_IntParameter{m_IntParameter_}, m_MessageOptions{m_MessageOptions_}, m_Source{m_Source_}, m_StateSender{m_StateSender_}, m_AnimatorStateInfo{m_AnimatorStateInfo_}, m_AnimatorClipInfo{m_AnimatorClipInfo_} {}
    // Get instance field reference: System.Single m_Time
    float& dyn_m_Time();
    // Get instance field reference: System.String m_FunctionName
    ::Il2CppString*& dyn_m_FunctionName();
    // Get instance field reference: System.String m_StringParameter
    ::Il2CppString*& dyn_m_StringParameter();
    // Get instance field reference: UnityEngine.Object m_ObjectReferenceParameter
    UnityEngine::Object*& dyn_m_ObjectReferenceParameter();
    // Get instance field reference: System.Single m_FloatParameter
    float& dyn_m_FloatParameter();
    // Get instance field reference: System.Int32 m_IntParameter
    int& dyn_m_IntParameter();
    // Get instance field reference: System.Int32 m_MessageOptions
    int& dyn_m_MessageOptions();
    // Get instance field reference: UnityEngine.AnimationEventSource m_Source
    UnityEngine::AnimationEventSource& dyn_m_Source();
    // Get instance field reference: UnityEngine.AnimationState m_StateSender
    UnityEngine::AnimationState*& dyn_m_StateSender();
    // Get instance field reference: UnityEngine.AnimatorStateInfo m_AnimatorStateInfo
    UnityEngine::AnimatorStateInfo& dyn_m_AnimatorStateInfo();
    // Get instance field reference: UnityEngine.AnimatorClipInfo m_AnimatorClipInfo
    UnityEngine::AnimatorClipInfo& dyn_m_AnimatorClipInfo();
    // public System.Void .ctor()
    // Offset: 0x23807D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AnimationEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationEvent*, creationType>()));
    }
  }; // UnityEngine.AnimationEvent
  #pragma pack(pop)
  static check_size<sizeof(AnimationEvent), 108 + sizeof(UnityEngine::AnimatorClipInfo)> __UnityEngine_AnimationEventSizeCheck;
  static_assert(sizeof(AnimationEvent) == 0x74);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimationEvent*, "UnityEngine", "AnimationEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimationEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
