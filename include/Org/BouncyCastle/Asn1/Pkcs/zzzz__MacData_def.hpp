#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacData)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class MacData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::MacData);
// Type: Org.BouncyCastle.Asn1.Pkcs::MacData
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(239))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::MacData*
class CORDL_TYPE MacData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field digInfo offset 0x10
 __declspec(property(get=__get_digInfo, put=__set_digInfo)) ::Org::BouncyCastle::Asn1::X509::DigestInfo*  digInfo;

/// @brief Field salt offset 0x18
 __declspec(property(get=__get_salt, put=__set_salt)) ::ArrayW<uint8_t,::Array<uint8_t>*>  salt;

/// @brief Field iterationCount offset 0x20
 __declspec(property(get=__get_iterationCount, put=__set_iterationCount)) ::Org::BouncyCastle::Math::BigInteger*  iterationCount;

 __declspec(property(get=get_Mac)) ::Org::BouncyCastle::Asn1::X509::DigestInfo*  Mac;

 __declspec(property(get=get_IterationCount)) ::Org::BouncyCastle::Math::BigInteger*  IterationCount;

constexpr void __set_digInfo(::Org::BouncyCastle::Asn1::X509::DigestInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::DigestInfo* __get_digInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::DigestInfo*> __get_digInfo() const;

constexpr void __set_salt(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_salt() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_salt() const;

constexpr void __set_iterationCount(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_iterationCount() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_iterationCount() const;

/// @brief Method GetInstance addr 0xf88ee0 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf89068 size 0x1ac virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* New_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo*  digInfo, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, int32_t  iterationCount) ;

/// @brief Method .ctor addr 0xf89214 size 0xec virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo*  digInfo, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, int32_t  iterationCount) ;

/// @brief Method get_Mac addr 0xf89300 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* get_Mac() ;

/// @brief Method GetSalt addr 0xf89308 size 0x78 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetSalt() ;

/// @brief Method get_IterationCount addr 0xf89380 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_IterationCount() ;

/// @brief Method ToAsn1Object addr 0xf89388 size 0x1e4 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "MacData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MacData(MacData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MacData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MacData(MacData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MacData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::MacData, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::MacData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::MacData*, "Org.BouncyCastle.Asn1.Pkcs", "MacData");
