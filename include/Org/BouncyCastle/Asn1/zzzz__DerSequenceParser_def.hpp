#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DerSequenceParser)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerSequenceParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerSequenceParser);
// Type: Org.BouncyCastle.Asn1::DerSequenceParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(514))
// CS Name: ::Org.BouncyCastle.Asn1::DerSequenceParser*
class CORDL_TYPE DerSequenceParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _parser offset 0x10
 __declspec(property(get=__get__parser, put=__set__parser)) ::Org::BouncyCastle::Asn1::Asn1StreamParser*  _parser;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1SequenceParser"
constexpr operator  ::Org::BouncyCastle::Asn1::Asn1SequenceParser*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

constexpr void __set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser* __get__parser() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1StreamParser*> __get__parser() const;

static inline ::Org::BouncyCastle::Asn1::DerSequenceParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser*  parser) ;

/// @brief Method .ctor addr 0x11ba3d0 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser*  parser) ;

/// @brief Method ReadObject addr 0x11c3efc size 0x20 virtual true final true
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject() ;

/// @brief Method ToAsn1Object addr 0x11c3f1c size 0x74 virtual true final true
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerSequenceParser(DerSequenceParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerSequenceParser(DerSequenceParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DerSequenceParser()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerSequenceParser, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerSequenceParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerSequenceParser*, "Org.BouncyCastle.Asn1", "DerSequenceParser");
