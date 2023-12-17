#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerEnumerated)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerEnumerated);
// Type: Org.BouncyCastle.Asn1::DerEnumerated
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(213))
// CS Name: ::Org.BouncyCastle.Asn1::DerEnumerated*
class CORDL_TYPE DerEnumerated : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Object)]{};

/// @brief Field bytes offset 0x10
 __declspec(property(get=__get_bytes, put=__set_bytes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes;

/// @brief Field start offset 0x18
 __declspec(property(get=__get_start, put=__set_start)) int32_t  start;

 __declspec(property(get=get_Value)) ::Org::BouncyCastle::Math::BigInteger*  Value;

 __declspec(property(get=get_IntValueExact)) int32_t  IntValueExact;

constexpr void __set_bytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_bytes() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_bytes() const;

constexpr void __set_start(int32_t  value) ;

constexpr int32_t& __get_start() ;

constexpr int32_t const& __get_start() const;

static inline void setStaticF_cache(::ArrayW<::Org::BouncyCastle::Asn1::DerEnumerated*,::Array<::Org::BouncyCastle::Asn1::DerEnumerated*>*>  value) ;

static inline ::ArrayW<::Org::BouncyCastle::Asn1::DerEnumerated*,::Array<::Org::BouncyCastle::Asn1::DerEnumerated*>*> getStaticF_cache() ;

/// @brief Method GetInstance addr 0xf81424 size 0xf0 virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerEnumerated* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0xf816bc size 0x140 virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerEnumerated* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(int32_t  val) ;

/// @brief Method .ctor addr 0xf819a8 size 0xe8 virtual false final false
inline void _ctor(int32_t  val) ;

static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(int64_t  val) ;

/// @brief Method .ctor addr 0xf81a90 size 0xe8 virtual false final false
inline void _ctor(int64_t  val) ;

static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(::Org::BouncyCastle::Math::BigInteger*  val) ;

/// @brief Method .ctor addr 0xf81b78 size 0xa8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  val) ;

static inline ::Org::BouncyCastle::Asn1::DerEnumerated* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method .ctor addr 0xf81c20 size 0x130 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method get_Value addr 0xf81d50 size 0x68 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Value() ;

/// @brief Method HasValue addr 0xf81db8 size 0x78 virtual false final false
inline bool HasValue(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method get_IntValueExact addr 0xf81e30 size 0x84 virtual false final false
inline int32_t get_IntValueExact() ;

/// @brief Method Encode addr 0xf81eb4 size 0x28 virtual true final false
inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream*  derOut) ;

/// @brief Method Asn1Equals addr 0xf81edc size 0xc8 virtual true final false
inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object*  asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0xf81fa4 size 0x5c virtual true final false
inline int32_t Asn1GetHashCode() ;

/// @brief Method FromOctetString addr 0xf817fc size 0x1ac virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerEnumerated* FromOctetString(::ArrayW<uint8_t,::Array<uint8_t>*>  enc) ;

// Ctor Parameters [CppParam { name: "", ty: "DerEnumerated", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerEnumerated(DerEnumerated && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerEnumerated", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerEnumerated(DerEnumerated const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DerEnumerated()  = default;
public:


// Fields

// Static field cache


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerEnumerated, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerEnumerated);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerEnumerated*, "Org.BouncyCastle.Asn1", "DerEnumerated");
