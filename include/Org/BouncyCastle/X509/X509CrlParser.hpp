// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Set
  class Asn1Set;
  // Forward declaring type: Asn1InputStream
  class Asn1InputStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Org::BouncyCastle::X509
namespace Org::BouncyCastle::X509 {
  // Forward declaring type: PemParser
  class PemParser;
  // Forward declaring type: X509Crl
  class X509Crl;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: CertificateList
  class CertificateList;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.X509.X509CrlParser
  class X509CrlParser : public ::Il2CppObject {
    public:
    // private readonly System.Boolean lazyAsn1
    // Size: 0x1
    // Offset: 0x10
    bool lazyAsn1;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lazyAsn1 and: sCrlData
    char __padding0[0x7] = {};
    // private Org.BouncyCastle.Asn1.Asn1Set sCrlData
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1Set* sCrlData;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    // private System.Int32 sCrlDataObjectCount
    // Size: 0x4
    // Offset: 0x20
    int sCrlDataObjectCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sCrlDataObjectCount and: currentCrlStream
    char __padding2[0x4] = {};
    // private System.IO.Stream currentCrlStream
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* currentCrlStream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // Creating value type constructor for type: X509CrlParser
    X509CrlParser(bool lazyAsn1_ = {}, Org::BouncyCastle::Asn1::Asn1Set* sCrlData_ = {}, int sCrlDataObjectCount_ = {}, System::IO::Stream* currentCrlStream_ = {}) noexcept : lazyAsn1{lazyAsn1_}, sCrlData{sCrlData_}, sCrlDataObjectCount{sCrlDataObjectCount_}, currentCrlStream{currentCrlStream_} {}
    // Get static field: static private readonly Org.BouncyCastle.X509.PemParser PemCrlParser
    static Org::BouncyCastle::X509::PemParser* _get_PemCrlParser();
    // Set static field: static private readonly Org.BouncyCastle.X509.PemParser PemCrlParser
    static void _set_PemCrlParser(Org::BouncyCastle::X509::PemParser* value);
    // public System.Void .ctor(System.Boolean lazyAsn1)
    // Offset: 0x1F91BF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CrlParser* New_ctor(bool lazyAsn1) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::X509CrlParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CrlParser*, creationType>(lazyAsn1)));
    }
    // private Org.BouncyCastle.X509.X509Crl ReadPemCrl(System.IO.Stream inStream)
    // Offset: 0x1F91C28
    Org::BouncyCastle::X509::X509Crl* ReadPemCrl(System::IO::Stream* inStream);
    // private Org.BouncyCastle.X509.X509Crl ReadDerCrl(Org.BouncyCastle.Asn1.Asn1InputStream dIn)
    // Offset: 0x1F91CDC
    Org::BouncyCastle::X509::X509Crl* ReadDerCrl(Org::BouncyCastle::Asn1::Asn1InputStream* dIn);
    // private Org.BouncyCastle.X509.X509Crl GetCrl()
    // Offset: 0x1F91EE0
    Org::BouncyCastle::X509::X509Crl* GetCrl();
    // protected Org.BouncyCastle.X509.X509Crl CreateX509Crl(Org.BouncyCastle.Asn1.X509.CertificateList c)
    // Offset: 0x1F91F68
    Org::BouncyCastle::X509::X509Crl* CreateX509Crl(Org::BouncyCastle::Asn1::X509::CertificateList* c);
    // public Org.BouncyCastle.X509.X509Crl ReadCrl(System.Byte[] input)
    // Offset: 0x1F91FC8
    Org::BouncyCastle::X509::X509Crl* ReadCrl(::Array<uint8_t>* input);
    // public Org.BouncyCastle.X509.X509Crl ReadCrl(System.IO.Stream inStream)
    // Offset: 0x1F92040
    Org::BouncyCastle::X509::X509Crl* ReadCrl(System::IO::Stream* inStream);
    // static private System.Void .cctor()
    // Offset: 0x1F9233C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1F91BD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CrlParser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::X509CrlParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CrlParser*, creationType>()));
    }
  }; // Org.BouncyCastle.X509.X509CrlParser
  #pragma pack(pop)
  static check_size<sizeof(X509CrlParser), 40 + sizeof(System::IO::Stream*)> __Org_BouncyCastle_X509_X509CrlParserSizeCheck;
  static_assert(sizeof(X509CrlParser) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509CrlParser*, "Org.BouncyCastle.X509", "X509CrlParser");
// Writing includes for template specializations
#include "System/IO/Stream.hpp"
#include "Org/BouncyCastle/Asn1/Asn1InputStream.hpp"
#include "Org/BouncyCastle/Asn1/X509/CertificateList.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlParser::ReadPemCrl
// Il2CppName: ReadPemCrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Crl* (Org::BouncyCastle::X509::X509CrlParser::*)(System::IO::Stream*)>(&Org::BouncyCastle::X509::X509CrlParser::ReadPemCrl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlParser*), "ReadPemCrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlParser::ReadDerCrl
// Il2CppName: ReadDerCrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Crl* (Org::BouncyCastle::X509::X509CrlParser::*)(Org::BouncyCastle::Asn1::Asn1InputStream*)>(&Org::BouncyCastle::X509::X509CrlParser::ReadDerCrl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlParser*), "ReadDerCrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::Asn1InputStream*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlParser::GetCrl
// Il2CppName: GetCrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Crl* (Org::BouncyCastle::X509::X509CrlParser::*)()>(&Org::BouncyCastle::X509::X509CrlParser::GetCrl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlParser*), "GetCrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlParser::CreateX509Crl
// Il2CppName: CreateX509Crl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Crl* (Org::BouncyCastle::X509::X509CrlParser::*)(Org::BouncyCastle::Asn1::X509::CertificateList*)>(&Org::BouncyCastle::X509::X509CrlParser::CreateX509Crl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlParser*), "CreateX509Crl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::X509::CertificateList*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlParser::ReadCrl
// Il2CppName: ReadCrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Crl* (Org::BouncyCastle::X509::X509CrlParser::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::X509::X509CrlParser::ReadCrl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlParser*), "ReadCrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlParser::ReadCrl
// Il2CppName: ReadCrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Crl* (Org::BouncyCastle::X509::X509CrlParser::*)(System::IO::Stream*)>(&Org::BouncyCastle::X509::X509CrlParser::ReadCrl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlParser*), "ReadCrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlParser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::X509::X509CrlParser::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlParser*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
