// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_AssetEventData
#include "HoudiniEngineUnity/HEU_AssetEventData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_CookedEventData
  class HEU_CookedEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_CookedEventData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_CookedEventData*, "HoudiniEngineUnity", "HEU_CookedEventData");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_CookedEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_CookedEventData : public HoudiniEngineUnity::HEU_AssetEventData {
    public:
    // public System.Void .ctor(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.Boolean successful, System.Collections.Generic.List`1<UnityEngine.GameObject> outputObjects)
    // Offset: 0x1640C64
    // Implemented from: HoudiniEngineUnity.HEU_AssetEventData
    // Base method: System.Void HEU_AssetEventData::.ctor(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.Boolean successful, System.Collections.Generic.List`1<UnityEngine.GameObject> outputObjects)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_CookedEventData* New_ctor(HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject*>* outputObjects) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_CookedEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_CookedEventData*, creationType>(asset, successful, outputObjects)));
    }
  }; // HoudiniEngineUnity.HEU_CookedEventData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_CookedEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
