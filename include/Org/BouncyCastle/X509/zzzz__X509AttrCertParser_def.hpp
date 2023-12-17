#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509AttrCertParser)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::X509 {
class PemParser;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509AttrCertParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509AttrCertParser);
// Type: Org.BouncyCastle.X509::X509AttrCertParser
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1858))
// CS Name: ::Org.BouncyCastle.X509::X509AttrCertParser*
class CORDL_TYPE X509AttrCertParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field sData offset 0x10
 __declspec(property(get=__get_sData, put=__set_sData)) ::Org::BouncyCastle::Asn1::Asn1Set*  sData;

/// @brief Field sDataObjectCount offset 0x18
 __declspec(property(get=__get_sDataObjectCount, put=__set_sDataObjectCount)) int32_t  sDataObjectCount;

/// @brief Field currentStream offset 0x20
 __declspec(property(get=__get_currentStream, put=__set_currentStream)) ::System::IO::Stream*  currentStream;

static inline void setStaticF_PemAttrCertParser(::Org::BouncyCastle::X509::PemParser*  value) ;

static inline ::Org::BouncyCastle::X509::PemParser* getStaticF_PemAttrCertParser() ;

constexpr void __set_sData(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_sData() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_sData() const;

constexpr void __set_sDataObjectCount(int32_t  value) ;

constexpr int32_t& __get_sDataObjectCount() ;

constexpr int32_t const& __get_sDataObjectCount() const;

constexpr void __set_currentStream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_currentStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_currentStream() const;

/// @brief Method ReadDerCertificate addr 0x1176164 size 0x240 virtual false final false
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadDerCertificate(::Org::BouncyCastle::Asn1::Asn1InputStream*  dIn) ;

/// @brief Method GetCertificate addr 0x11763a4 size 0x128 virtual false final false
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* GetCertificate() ;

/// @brief Method ReadPemCertificate addr 0x117663c size 0xbc virtual false final false
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadPemCertificate(::System::IO::Stream*  inStream) ;

/// @brief Method ReadAttrCert addr 0x11766f8 size 0x78 virtual false final false
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadAttrCert(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method ReadAttrCerts addr 0x1176a5c size 0x78 virtual false final false
inline ::System::Collections::ICollection* ReadAttrCerts(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method ReadAttrCert addr 0x1176770 size 0x2ec virtual false final false
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadAttrCert(::System::IO::Stream*  inStream) ;

/// @brief Method ReadAttrCerts addr 0x1176ad4 size 0x110 virtual false final false
inline ::System::Collections::ICollection* ReadAttrCerts(::System::IO::Stream*  inStream) ;

static inline ::Org::BouncyCastle::X509::X509AttrCertParser* New_ctor() ;

/// @brief Method .ctor addr 0x1176c74 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "X509AttrCertParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509AttrCertParser(X509AttrCertParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509AttrCertParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509AttrCertParser(X509AttrCertParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509AttrCertParser()  = default;
public:


// Fields

// Static field PemAttrCertParser


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509AttrCertParser, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509AttrCertParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509AttrCertParser*, "Org.BouncyCastle.X509", "X509AttrCertParser");
