// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerApplicationSpecific
#include "Org/BouncyCastle/Asn1/DerApplicationSpecific.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerApplicationSpecific
  // [TokenAttribute] Offset: FFFFFFFF
  class BerApplicationSpecific : public Org::BouncyCastle::Asn1::DerApplicationSpecific {
    public:
    // Creating value type constructor for type: BerApplicationSpecific
    BerApplicationSpecific() noexcept {}
    // public System.Void .ctor(System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1EncodableVector vec)
    // Offset: 0x1734AE0
    // Implemented from: Org.BouncyCastle.Asn1.DerApplicationSpecific
    // Base method: System.Void DerApplicationSpecific::.ctor(System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1EncodableVector vec)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerApplicationSpecific* New_ctor(int tagNo, Org::BouncyCastle::Asn1::Asn1EncodableVector* vec) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerApplicationSpecific::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerApplicationSpecific*, creationType>(tagNo, vec)));
    }
  }; // Org.BouncyCastle.Asn1.BerApplicationSpecific
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerApplicationSpecific*, "Org.BouncyCastle.Asn1", "BerApplicationSpecific");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerApplicationSpecific::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
