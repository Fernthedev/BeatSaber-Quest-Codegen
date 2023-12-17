#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CrlParser)
namespace Org::BouncyCastle::X509 {
class PemParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CrlParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509CrlParser);
// Type: Org.BouncyCastle.X509::X509CrlParser
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1866))
// CS Name: ::Org.BouncyCastle.X509::X509CrlParser*
class CORDL_TYPE X509CrlParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field lazyAsn1 offset 0x10
 __declspec(property(get=__get_lazyAsn1, put=__set_lazyAsn1)) bool  lazyAsn1;

/// @brief Field sCrlData offset 0x18
 __declspec(property(get=__get_sCrlData, put=__set_sCrlData)) ::Org::BouncyCastle::Asn1::Asn1Set*  sCrlData;

/// @brief Field sCrlDataObjectCount offset 0x20
 __declspec(property(get=__get_sCrlDataObjectCount, put=__set_sCrlDataObjectCount)) int32_t  sCrlDataObjectCount;

/// @brief Field currentCrlStream offset 0x28
 __declspec(property(get=__get_currentCrlStream, put=__set_currentCrlStream)) ::System::IO::Stream*  currentCrlStream;

static inline void setStaticF_PemCrlParser(::Org::BouncyCastle::X509::PemParser*  value) ;

static inline ::Org::BouncyCastle::X509::PemParser* getStaticF_PemCrlParser() ;

constexpr void __set_lazyAsn1(bool  value) ;

constexpr bool& __get_lazyAsn1() ;

constexpr bool const& __get_lazyAsn1() const;

constexpr void __set_sCrlData(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_sCrlData() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_sCrlData() const;

constexpr void __set_sCrlDataObjectCount(int32_t  value) ;

constexpr int32_t& __get_sCrlDataObjectCount() ;

constexpr int32_t const& __get_sCrlDataObjectCount() const;

constexpr void __set_currentCrlStream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_currentCrlStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_currentCrlStream() const;

static inline ::Org::BouncyCastle::X509::X509CrlParser* New_ctor() ;

/// @brief Method .ctor addr 0x117e4e4 size 0x1c virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::X509::X509CrlParser* New_ctor(bool  lazyAsn1) ;

/// @brief Method .ctor addr 0x117e500 size 0x28 virtual false final false
inline void _ctor(bool  lazyAsn1) ;

/// @brief Method ReadPemCrl addr 0x117e528 size 0xa8 virtual false final false
inline ::Org::BouncyCastle::X509::X509Crl* ReadPemCrl(::System::IO::Stream*  inStream) ;

/// @brief Method ReadDerCrl addr 0x117e5d0 size 0x218 virtual false final false
inline ::Org::BouncyCastle::X509::X509Crl* ReadDerCrl(::Org::BouncyCastle::Asn1::Asn1InputStream*  dIn) ;

/// @brief Method GetCrl addr 0x117e7e8 size 0x84 virtual false final false
inline ::Org::BouncyCastle::X509::X509Crl* GetCrl() ;

/// @brief Method CreateX509Crl addr 0x117e86c size 0x60 virtual true final false
inline ::Org::BouncyCastle::X509::X509Crl* CreateX509Crl(::Org::BouncyCastle::Asn1::X509::CertificateList*  c) ;

/// @brief Method ReadCrl addr 0x117e8cc size 0x78 virtual false final false
inline ::Org::BouncyCastle::X509::X509Crl* ReadCrl(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method ReadCrls addr 0x117eca4 size 0x78 virtual false final false
inline ::System::Collections::ICollection* ReadCrls(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method ReadCrl addr 0x117e944 size 0x360 virtual false final false
inline ::Org::BouncyCastle::X509::X509Crl* ReadCrl(::System::IO::Stream*  inStream) ;

/// @brief Method ReadCrls addr 0x117ed1c size 0x110 virtual false final false
inline ::System::Collections::ICollection* ReadCrls(::System::IO::Stream*  inStream) ;

// Ctor Parameters [CppParam { name: "", ty: "X509CrlParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509CrlParser(X509CrlParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509CrlParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509CrlParser(X509CrlParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509CrlParser()  = default;
public:


// Fields

// Static field PemCrlParser


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509CrlParser, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CrlParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CrlParser*, "Org.BouncyCastle.X509", "X509CrlParser");
