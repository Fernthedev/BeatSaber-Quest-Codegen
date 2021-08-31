// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MockPlayerSettings
#include "GlobalNamespace/MockPlayerSettings.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: MockServerSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class MockServerSettings : public GlobalNamespace::MockPlayerSettings {
    public:
    // Creating value type constructor for type: MockServerSettings
    MockServerSettings() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x11DFFAC
    // Implemented from: MockPlayerSettings
    // Base method: System.Void MockPlayerSettings::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockServerSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockServerSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockServerSettings*, creationType>()));
    }
  }; // MockServerSettings
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockServerSettings*, "", "MockServerSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockServerSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
