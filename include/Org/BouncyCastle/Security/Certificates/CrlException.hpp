// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Security.GeneralSecurityException
#include "Org/BouncyCastle/Security/GeneralSecurityException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Security.Certificates
namespace Org::BouncyCastle::Security::Certificates {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.Certificates.CrlException
  class CrlException : public Org::BouncyCastle::Security::GeneralSecurityException {
    public:
    // Creating value type constructor for type: CrlException
    CrlException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x134994C
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrlException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::Certificates::CrlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrlException*, creationType>()));
    }
    // public System.Void .ctor(System.String msg)
    // Offset: 0x1349954
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor(System.String msg)
    // Base method: System.Void Exception::.ctor(System.String msg)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrlException* New_ctor(::Il2CppString* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::Certificates::CrlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrlException*, creationType>(msg)));
    }
  }; // Org.BouncyCastle.Security.Certificates.CrlException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Certificates::CrlException*, "Org.BouncyCastle.Security.Certificates", "CrlException");
// Writing includes for template specializations
// Writing MetadataGetter for method: Org::BouncyCastle::Security::Certificates::CrlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::Certificates::CrlException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
