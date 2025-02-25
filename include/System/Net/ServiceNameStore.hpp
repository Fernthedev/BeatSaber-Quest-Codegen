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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Security::Authentication::ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: ServiceNameCollection
  class ServiceNameCollection;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServiceNameStore
  // [TokenAttribute] Offset: FFFFFFFF
  class ServiceNameStore : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.String> serviceNames
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* serviceNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Security.Authentication.ExtendedProtection.ServiceNameCollection serviceNameCollection
    // Size: 0x8
    // Offset: 0x18
    System::Security::Authentication::ExtendedProtection::ServiceNameCollection* serviceNameCollection;
    // Field size check
    static_assert(sizeof(System::Security::Authentication::ExtendedProtection::ServiceNameCollection*) == 0x8);
    // Creating value type constructor for type: ServiceNameStore
    ServiceNameStore(System::Collections::Generic::List_1<::Il2CppString*>* serviceNames_ = {}, System::Security::Authentication::ExtendedProtection::ServiceNameCollection* serviceNameCollection_ = {}) noexcept : serviceNames{serviceNames_}, serviceNameCollection{serviceNameCollection_} {}
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> serviceNames
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_serviceNames();
    // Get instance field reference: private System.Security.Authentication.ExtendedProtection.ServiceNameCollection serviceNameCollection
    System::Security::Authentication::ExtendedProtection::ServiceNameCollection*& dyn_serviceNameCollection();
    // public System.Void .ctor()
    // Offset: 0x14A8900
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServiceNameStore* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::ServiceNameStore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServiceNameStore*, creationType>()));
    }
  }; // System.Net.ServiceNameStore
  #pragma pack(pop)
  static check_size<sizeof(ServiceNameStore), 24 + sizeof(System::Security::Authentication::ExtendedProtection::ServiceNameCollection*)> __System_Net_ServiceNameStoreSizeCheck;
  static_assert(sizeof(ServiceNameStore) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServiceNameStore*, "System.Net", "ServiceNameStore");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServiceNameStore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
