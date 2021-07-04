// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PlayerPrefsException
  class PlayerPrefsException : public System::Exception {
    public:
    // Creating value type constructor for type: PlayerPrefsException
    PlayerPrefsException() noexcept {}
    // public System.Void .ctor(System.String error)
    // Offset: 0x1B23FEC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String error)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerPrefsException* New_ctor(::Il2CppString* error) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::PlayerPrefsException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerPrefsException*, creationType>(error)));
    }
  }; // UnityEngine.PlayerPrefsException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerPrefsException*, "UnityEngine", "PlayerPrefsException");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::PlayerPrefsException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
