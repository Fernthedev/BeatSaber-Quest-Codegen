// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1Exception
  // [TokenAttribute] Offset: FFFFFFFF
  class Asn1Exception : public System::IO::IOException {
    public:
    // Creating value type constructor for type: Asn1Exception
    Asn1Exception() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x172D474
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1Exception* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1Exception*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x172D47C
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1Exception* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1Exception*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception exception)
    // Offset: 0x172D484
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message, System.Exception exception)
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception exception)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception exception)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1Exception* New_ctor(::Il2CppString* message, System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1Exception*, creationType>(message, exception)));
    }
  }; // Org.BouncyCastle.Asn1.Asn1Exception
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Exception*, "Org.BouncyCastle.Asn1", "Asn1Exception");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
