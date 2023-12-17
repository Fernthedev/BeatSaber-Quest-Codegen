#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerVideotexString)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerVideotexString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerVideotexString);
// Type: Org.BouncyCastle.Asn1::DerVideotexString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(521))
// CS Name: ::Org.BouncyCastle.Asn1::DerVideotexString*
class CORDL_TYPE DerVideotexString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::DerStringBase)]{};

/// @brief Field mString offset 0x10
 __declspec(property(get=__get_mString, put=__set_mString)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mString;

constexpr void __set_mString(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mString() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mString() const;

/// @brief Method GetInstance addr 0x11c58d4 size 0x220 virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerVideotexString* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0x11c5af4 size 0x130 virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerVideotexString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

static inline ::Org::BouncyCastle::Asn1::DerVideotexString* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  encoding) ;

/// @brief Method .ctor addr 0x11b7488 size 0x78 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  encoding) ;

/// @brief Method GetString addr 0x11c5c24 size 0xc virtual true final false
inline ::StringW GetString() ;

/// @brief Method GetOctets addr 0x11c5c30 size 0x5c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetOctets() ;

/// @brief Method Encode addr 0x11c5c8c size 0x24 virtual true final false
inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream*  derOut) ;

/// @brief Method Asn1GetHashCode addr 0x11c5cb0 size 0x5c virtual true final false
inline int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0x11c5d0c size 0xc8 virtual true final false
inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object*  asn1Object) ;

// Ctor Parameters [CppParam { name: "", ty: "DerVideotexString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerVideotexString(DerVideotexString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerVideotexString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerVideotexString(DerVideotexString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DerVideotexString()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerVideotexString, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerVideotexString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerVideotexString*, "Org.BouncyCastle.Asn1", "DerVideotexString");
