#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerBitString)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerBitString);
// Type: Org.BouncyCastle.Asn1::DerBitString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(34))
// CS Name: ::Org.BouncyCastle.Asn1::DerBitString*
class CORDL_TYPE DerBitString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::DerStringBase)]{};

/// @brief Field mData offset 0x10
 __declspec(property(get=__get_mData, put=__set_mData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mData;

/// @brief Field mPadBits offset 0x18
 __declspec(property(get=__get_mPadBits, put=__set_mPadBits)) int32_t  mPadBits;

 __declspec(property(get=get_PadBits)) int32_t  PadBits;

 __declspec(property(get=get_IntValue)) int32_t  IntValue;

static inline void setStaticF_table(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_table() ;

constexpr void __set_mData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mData() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mData() const;

constexpr void __set_mPadBits(int32_t  value) ;

constexpr int32_t& __get_mPadBits() ;

constexpr int32_t const& __get_mPadBits() const;

/// @brief Method GetInstance addr 0xe68790 size 0x20c virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerBitString* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0xe6a61c size 0x140 virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerBitString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  padBits) ;

/// @brief Method .ctor addr 0xe6a8e4 size 0x168 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  padBits) ;

static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0xe6aa4c size 0x8 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(int32_t  namedBits) ;

/// @brief Method .ctor addr 0xe6aa54 size 0x128 virtual false final false
inline void _ctor(int32_t  namedBits) ;

static inline ::Org::BouncyCastle::Asn1::DerBitString* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable*  obj) ;

/// @brief Method .ctor addr 0xe6ab7c size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable*  obj) ;

/// @brief Method GetOctets addr 0xe6aba8 size 0xb0 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetOctets() ;

/// @brief Method GetBytes addr 0xe6ac58 size 0xa0 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes() ;

/// @brief Method get_PadBits addr 0xe6acf8 size 0x8 virtual true final false
inline int32_t get_PadBits() ;

/// @brief Method get_IntValue addr 0xe6ad00 size 0x10c virtual true final false
inline int32_t get_IntValue() ;

/// @brief Method Encode addr 0xe6ae0c size 0x118 virtual true final false
inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream*  derOut) ;

/// @brief Method Asn1GetHashCode addr 0xe6af24 size 0x88 virtual true final false
inline int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0xe6afac size 0xd8 virtual true final false
inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object*  asn1Object) ;

/// @brief Method GetString addr 0xe6b084 size 0x168 virtual true final false
inline ::StringW GetString() ;

/// @brief Method FromAsn1Octets addr 0xe6a75c size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerBitString* FromAsn1Octets(::ArrayW<uint8_t,::Array<uint8_t>*>  octets) ;

// Ctor Parameters [CppParam { name: "", ty: "DerBitString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerBitString(DerBitString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerBitString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerBitString(DerBitString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DerBitString()  = default;
public:


// Fields

// Static field table


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerBitString, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerBitString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerBitString*, "Org.BouncyCastle.Asn1", "DerBitString");
