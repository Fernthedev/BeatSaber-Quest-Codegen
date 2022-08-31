// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1OctetStringParser
#include "Org/BouncyCastle/Asn1/Asn1OctetStringParser.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DefiniteLengthInputStream
  class DefiniteLengthInputStream;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOctetStringParser
  class DerOctetStringParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerOctetStringParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerOctetStringParser*, "Org.BouncyCastle.Asn1", "DerOctetStringParser");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerOctetStringParser
  // [TokenAttribute] Offset: FFFFFFFF
  class DerOctetStringParser : public ::Il2CppObject/*, public ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*/ {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.DefiniteLengthInputStream stream
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser
    operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(this);
    }
    // Creating interface conversion operator: i_Asn1OctetStringParser
    inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* i_Asn1OctetStringParser() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(this);
    }
    // Creating conversion operator: operator ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*
    constexpr operator ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*() const noexcept {
      return stream;
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DefiniteLengthInputStream stream
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*& dyn_stream();
    // System.Void .ctor(Org.BouncyCastle.Asn1.DefiniteLengthInputStream stream)
    // Offset: 0x1C1EABC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerOctetStringParser* New_ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::DerOctetStringParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerOctetStringParser*, creationType>(stream)));
    }
    // public System.IO.Stream GetOctetStream()
    // Offset: 0x1C2B348
    ::System::IO::Stream* GetOctetStream();
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1C2B350
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.DerOctetStringParser
  #pragma pack(pop)
  static check_size<sizeof(DerOctetStringParser), 16 + sizeof(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)> __Org_BouncyCastle_Asn1_DerOctetStringParserSizeCheck;
  static_assert(sizeof(DerOctetStringParser) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOctetStringParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOctetStringParser::GetOctetStream
// Il2CppName: GetOctetStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (Org::BouncyCastle::Asn1::DerOctetStringParser::*)()>(&Org::BouncyCastle::Asn1::DerOctetStringParser::GetOctetStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerOctetStringParser*), "GetOctetStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerOctetStringParser::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::DerOctetStringParser::*)()>(&Org::BouncyCastle::Asn1::DerOctetStringParser::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerOctetStringParser*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
