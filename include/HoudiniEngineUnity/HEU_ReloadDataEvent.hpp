// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_ReloadEventData
  class HEU_ReloadEventData;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_ReloadDataEvent
  class HEU_ReloadDataEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ReloadDataEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ReloadDataEvent*, "HoudiniEngineUnity", "HEU_ReloadDataEvent");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: HoudiniEngineUnity.HEU_ReloadDataEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ReloadDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_ReloadEventData*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1B0D0B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ReloadDataEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_ReloadDataEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ReloadDataEvent*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_ReloadDataEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ReloadDataEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
