// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.SceneManagement.LoadSceneMode
#include "UnityEngine/SceneManagement/LoadSceneMode.hpp"
// Including type: UnityEngine.SceneManagement.LocalPhysicsMode
#include "UnityEngine/SceneManagement/LocalPhysicsMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.SceneManagement.LoadSceneParameters
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoadSceneParameters/*, public System::ValueType*/ {
    public:
    // private UnityEngine.SceneManagement.LoadSceneMode m_LoadSceneMode
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode;
    // Field size check
    static_assert(sizeof(UnityEngine::SceneManagement::LoadSceneMode) == 0x4);
    // private UnityEngine.SceneManagement.LocalPhysicsMode m_LocalPhysicsMode
    // Size: 0x4
    // Offset: 0x4
    UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode;
    // Field size check
    static_assert(sizeof(UnityEngine::SceneManagement::LocalPhysicsMode) == 0x4);
    // Creating value type constructor for type: LoadSceneParameters
    constexpr LoadSceneParameters(UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode_ = {}, UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode_ = {}) noexcept : m_LoadSceneMode{m_LoadSceneMode_}, m_LocalPhysicsMode{m_LocalPhysicsMode_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.SceneManagement.LoadSceneMode m_LoadSceneMode
    UnityEngine::SceneManagement::LoadSceneMode& dyn_m_LoadSceneMode();
    // Get instance field reference: private UnityEngine.SceneManagement.LocalPhysicsMode m_LocalPhysicsMode
    UnityEngine::SceneManagement::LocalPhysicsMode& dyn_m_LocalPhysicsMode();
    // public System.Void set_loadSceneMode(UnityEngine.SceneManagement.LoadSceneMode value)
    // Offset: 0x1C4D028
    void set_loadSceneMode(UnityEngine::SceneManagement::LoadSceneMode value);
    // public System.Void .ctor(UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x1C4D030
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    LoadSceneParameters(UnityEngine::SceneManagement::LoadSceneMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::SceneManagement::LoadSceneParameters::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mode)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, mode);
    }
  }; // UnityEngine.SceneManagement.LoadSceneParameters
  #pragma pack(pop)
  static check_size<sizeof(LoadSceneParameters), 4 + sizeof(UnityEngine::SceneManagement::LocalPhysicsMode)> __UnityEngine_SceneManagement_LoadSceneParametersSizeCheck;
  static_assert(sizeof(LoadSceneParameters) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SceneManagement::LoadSceneParameters, "UnityEngine.SceneManagement", "LoadSceneParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SceneManagement::LoadSceneParameters::set_loadSceneMode
// Il2CppName: set_loadSceneMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SceneManagement::LoadSceneParameters::*)(UnityEngine::SceneManagement::LoadSceneMode)>(&UnityEngine::SceneManagement::LoadSceneParameters::set_loadSceneMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::LoadSceneParameters), "set_loadSceneMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::LoadSceneParameters::LoadSceneParameters
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
