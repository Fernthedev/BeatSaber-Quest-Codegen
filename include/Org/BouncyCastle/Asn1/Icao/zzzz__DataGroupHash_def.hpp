#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataGroupHash)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class DataGroupHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Icao::DataGroupHash);
// Type: Org.BouncyCastle.Asn1.Icao::DataGroupHash
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(175))
// CS Name: ::Org.BouncyCastle.Asn1.Icao::DataGroupHash*
class CORDL_TYPE DataGroupHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field dataGroupNumber offset 0x10
 __declspec(property(get=__get_dataGroupNumber, put=__set_dataGroupNumber)) ::Org::BouncyCastle::Asn1::DerInteger*  dataGroupNumber;

/// @brief Field dataGroupHashValue offset 0x18
 __declspec(property(get=__get_dataGroupHashValue, put=__set_dataGroupHashValue)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  dataGroupHashValue;

 __declspec(property(get=get_DataGroupNumber)) int32_t  DataGroupNumber;

 __declspec(property(get=get_DataGroupHashValue)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  DataGroupHashValue;

constexpr void __set_dataGroupNumber(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_dataGroupNumber() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_dataGroupNumber() const;

constexpr void __set_dataGroupHashValue(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_dataGroupHashValue() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_dataGroupHashValue() const;

/// @brief Method GetInstance addr 0xf74820 size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Icao::DataGroupHash* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Icao::DataGroupHash* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf748c4 size 0xe8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Icao::DataGroupHash* New_ctor(int32_t  dataGroupNumber, ::Org::BouncyCastle::Asn1::Asn1OctetString*  dataGroupHashValue) ;

/// @brief Method .ctor addr 0xf749ac size 0x80 virtual false final false
inline void _ctor(int32_t  dataGroupNumber, ::Org::BouncyCastle::Asn1::Asn1OctetString*  dataGroupHashValue) ;

/// @brief Method get_DataGroupNumber addr 0xf74a2c size 0x1c virtual false final false
inline int32_t get_DataGroupNumber() ;

/// @brief Method get_DataGroupHashValue addr 0xf74a48 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_DataGroupHashValue() ;

/// @brief Method ToAsn1Object addr 0xf74a50 size 0xf0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "DataGroupHash", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataGroupHash(DataGroupHash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataGroupHash", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataGroupHash(DataGroupHash const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DataGroupHash()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Icao::DataGroupHash, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::DataGroupHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::DataGroupHash*, "Org.BouncyCastle.Asn1.Icao", "DataGroupHash");
