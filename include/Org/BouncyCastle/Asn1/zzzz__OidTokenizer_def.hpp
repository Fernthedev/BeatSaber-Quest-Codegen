#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OidTokenizer)
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class OidTokenizer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::OidTokenizer);
// Type: Org.BouncyCastle.Asn1::OidTokenizer
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(527))
// CS Name: ::Org.BouncyCastle.Asn1::OidTokenizer*
class CORDL_TYPE OidTokenizer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field oid offset 0x10
 __declspec(property(get=__get_oid, put=__set_oid)) ::StringW  oid;

/// @brief Field index offset 0x18
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

 __declspec(property(get=get_HasMoreTokens)) bool  HasMoreTokens;

constexpr void __set_oid(::StringW  value) ;

constexpr ::StringW& __get_oid() ;

constexpr ::StringW const& __get_oid() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

static inline ::Org::BouncyCastle::Asn1::OidTokenizer* New_ctor(::StringW  oid) ;

/// @brief Method .ctor addr 0x11c6ac8 size 0x28 virtual false final false
inline void _ctor(::StringW  oid) ;

/// @brief Method get_HasMoreTokens addr 0x11c6af0 size 0x10 virtual false final false
inline bool get_HasMoreTokens() ;

/// @brief Method NextToken addr 0x11c6b00 size 0x88 virtual false final false
inline ::StringW NextToken() ;

// Ctor Parameters [CppParam { name: "", ty: "OidTokenizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OidTokenizer(OidTokenizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OidTokenizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OidTokenizer(OidTokenizer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OidTokenizer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::OidTokenizer, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::OidTokenizer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::OidTokenizer*, "Org.BouncyCastle.Asn1", "OidTokenizer");
