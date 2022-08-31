// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SliderState
  class SliderState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SliderState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SliderState*, "UnityEngine", "SliderState");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SliderState
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderState : public ::Il2CppObject {
    public:
    public:
    // public System.Single dragStartPos
    // Size: 0x4
    // Offset: 0x10
    float dragStartPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single dragStartValue
    // Size: 0x4
    // Offset: 0x14
    float dragStartValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean isDragging
    // Size: 0x1
    // Offset: 0x18
    bool isDragging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Single dragStartPos
    [[deprecated("Use field access instead!")]] float& dyn_dragStartPos();
    // Get instance field reference: public System.Single dragStartValue
    [[deprecated("Use field access instead!")]] float& dyn_dragStartValue();
    // Get instance field reference: public System.Boolean isDragging
    [[deprecated("Use field access instead!")]] bool& dyn_isDragging();
    // public System.Void .ctor()
    // Offset: 0x201C7AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SliderState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderState*, creationType>()));
    }
  }; // UnityEngine.SliderState
  #pragma pack(pop)
  static check_size<sizeof(SliderState), 24 + sizeof(bool)> __UnityEngine_SliderStateSizeCheck;
  static_assert(sizeof(SliderState) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SliderState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
