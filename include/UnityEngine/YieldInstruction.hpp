// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.YieldInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DB5A34
  class YieldInstruction : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: YieldInstruction
    YieldInstruction() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23641D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static YieldInstruction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::YieldInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<YieldInstruction*, creationType>()));
    }
  }; // UnityEngine.YieldInstruction
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::YieldInstruction*, "UnityEngine", "YieldInstruction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::YieldInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
