// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationElementCollection
#include "System/Configuration/ConfigurationElementCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.ConnectionManagementElementCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DA78F8
  // [ConfigurationCollectionAttribute] Offset: FFFFFFFF
  class ConnectionManagementElementCollection : public System::Configuration::ConfigurationElementCollection {
    public:
    // Creating value type constructor for type: ConnectionManagementElementCollection
    ConnectionManagementElementCollection() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x16D0158
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionManagementElementCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Configuration::ConnectionManagementElementCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionManagementElementCollection*, creationType>()));
    }
  }; // System.Net.Configuration.ConnectionManagementElementCollection
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::ConnectionManagementElementCollection*, "System.Net.Configuration", "ConnectionManagementElementCollection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::ConnectionManagementElementCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
