// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.TerrainAPI.TerrainUtility
#include "UnityEngine/Experimental/TerrainAPI/TerrainUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_0*, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility/<>c__DisplayClass4_0");
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TerrainUtility::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean onlyAutoConnectedTerrains
    // Size: 0x1
    // Offset: 0x10
    bool onlyAutoConnectedTerrains;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return onlyAutoConnectedTerrains;
    }
    // Get instance field reference: public System.Boolean onlyAutoConnectedTerrains
    [[deprecated("Use field access instead!")]] bool& dyn_onlyAutoConnectedTerrains();
    // public System.Void .ctor()
    // Offset: 0x2AE28F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainUtility::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainUtility::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(TerrainUtility::$$c__DisplayClass4_0), 16 + sizeof(bool)> __UnityEngine_Experimental_TerrainAPI_TerrainUtility_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(TerrainUtility::$$c__DisplayClass4_0) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
