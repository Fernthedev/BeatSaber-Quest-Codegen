#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerUniversalString)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerUniversalString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerUniversalString);
// Type: Org.BouncyCastle.Asn1::DerUniversalString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(518))
// CS Name: ::Org.BouncyCastle.Asn1::DerUniversalString*
class CORDL_TYPE DerUniversalString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::DerStringBase)]{};

/// @brief Field str offset 0x10
 __declspec(property(get=__get_str, put=__set_str)) ::ArrayW<uint8_t,::Array<uint8_t>*>  str;

static inline void setStaticF_table(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_table() ;

constexpr void __set_str(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_str() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_str() const;

/// @brief Method GetInstance addr 0x11c453c size 0xf0 virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerUniversalString* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0x11c462c size 0xfc virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerUniversalString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

static inline ::Org::BouncyCastle::Asn1::DerUniversalString* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str) ;

/// @brief Method .ctor addr 0x11b7388 size 0x78 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str) ;

/// @brief Method GetString addr 0x11c4728 size 0x16c virtual true final false
inline ::StringW GetString() ;

/// @brief Method GetOctets addr 0x11c4894 size 0x78 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetOctets() ;

/// @brief Method Encode addr 0x11c490c size 0x24 virtual true final false
inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream*  derOut) ;

/// @brief Method Asn1Equals addr 0x11c4930 size 0xc8 virtual true final false
inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object*  asn1Object) ;

// Ctor Parameters [CppParam { name: "", ty: "DerUniversalString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerUniversalString(DerUniversalString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerUniversalString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerUniversalString(DerUniversalString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DerUniversalString()  = default;
public:


// Fields

// Static field table


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerUniversalString, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerUniversalString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerUniversalString*, "Org.BouncyCastle.Asn1", "DerUniversalString");
