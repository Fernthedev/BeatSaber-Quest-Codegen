#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemParser)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class PemParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::PemParser);
// Type: Org.BouncyCastle.X509::PemParser
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1855))
// CS Name: ::Org.BouncyCastle.X509::PemParser*
class CORDL_TYPE PemParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _header1 offset 0x10
 __declspec(property(get=__get__header1, put=__set__header1)) ::StringW  _header1;

/// @brief Field _header2 offset 0x18
 __declspec(property(get=__get__header2, put=__set__header2)) ::StringW  _header2;

/// @brief Field _footer1 offset 0x20
 __declspec(property(get=__get__footer1, put=__set__footer1)) ::StringW  _footer1;

/// @brief Field _footer2 offset 0x28
 __declspec(property(get=__get__footer2, put=__set__footer2)) ::StringW  _footer2;

constexpr void __set__header1(::StringW  value) ;

constexpr ::StringW& __get__header1() ;

constexpr ::StringW const& __get__header1() const;

constexpr void __set__header2(::StringW  value) ;

constexpr ::StringW& __get__header2() ;

constexpr ::StringW const& __get__header2() const;

constexpr void __set__footer1(::StringW  value) ;

constexpr ::StringW& __get__footer1() ;

constexpr ::StringW const& __get__footer1() const;

constexpr void __set__footer2(::StringW  value) ;

constexpr ::StringW& __get__footer2() ;

constexpr ::StringW const& __get__footer2() const;

static inline ::Org::BouncyCastle::X509::PemParser* New_ctor(::StringW  type) ;

/// @brief Method .ctor addr 0x1174a88 size 0x118 virtual false final false
inline void _ctor(::StringW  type) ;

/// @brief Method ReadLine addr 0x1174ba0 size 0xd0 virtual false final false
inline ::StringW ReadLine(::System::IO::Stream*  inStream) ;

/// @brief Method ReadPemObject addr 0x1174c70 size 0x214 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* ReadPemObject(::System::IO::Stream*  inStream) ;

// Ctor Parameters [CppParam { name: "", ty: "PemParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PemParser(PemParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PemParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PemParser(PemParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PemParser()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::PemParser, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::PemParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::PemParser*, "Org.BouncyCastle.X509", "PemParser");
