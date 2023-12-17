#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectDigestInfo)
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class ObjectDigestInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo);
// Type: Org.BouncyCastle.Asn1.X509::ObjectDigestInfo
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(372))
// CS Name: ::Org.BouncyCastle.Asn1.X509::ObjectDigestInfo*
class CORDL_TYPE ObjectDigestInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field PublicKey offset 0x0
static constexpr int32_t  PublicKey{static_cast<int32_t>(0x0)};

/// @brief Field PublicKeyCert offset 0x0
static constexpr int32_t  PublicKeyCert{static_cast<int32_t>(0x1)};

/// @brief Field OtherObjectDigest offset 0x0
static constexpr int32_t  OtherObjectDigest{static_cast<int32_t>(0x2)};

/// @brief Field digestedObjectType offset 0x10
 __declspec(property(get=__get_digestedObjectType, put=__set_digestedObjectType)) ::Org::BouncyCastle::Asn1::DerEnumerated*  digestedObjectType;

/// @brief Field otherObjectTypeID offset 0x18
 __declspec(property(get=__get_otherObjectTypeID, put=__set_otherObjectTypeID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  otherObjectTypeID;

/// @brief Field digestAlgorithm offset 0x20
 __declspec(property(get=__get_digestAlgorithm, put=__set_digestAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithm;

/// @brief Field objectDigest offset 0x28
 __declspec(property(get=__get_objectDigest, put=__set_objectDigest)) ::Org::BouncyCastle::Asn1::DerBitString*  objectDigest;

 __declspec(property(get=get_DigestedObjectType)) ::Org::BouncyCastle::Asn1::DerEnumerated*  DigestedObjectType;

 __declspec(property(get=get_OtherObjectTypeID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  OtherObjectTypeID;

 __declspec(property(get=get_DigestAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  DigestAlgorithm;

 __declspec(property(get=get_ObjectDigest)) ::Org::BouncyCastle::Asn1::DerBitString*  ObjectDigest;

constexpr void __set_digestedObjectType(::Org::BouncyCastle::Asn1::DerEnumerated*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerEnumerated* __get_digestedObjectType() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerEnumerated*> __get_digestedObjectType() const;

constexpr void __set_otherObjectTypeID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_otherObjectTypeID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_otherObjectTypeID() const;

constexpr void __set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_digestAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_digestAlgorithm() const;

constexpr void __set_objectDigest(::Org::BouncyCastle::Asn1::DerBitString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString* __get_objectDigest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> __get_objectDigest() const;

/// @brief Method GetInstance addr 0x1193800 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0x1190218 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* New_ctor(int32_t  digestedObjectType, ::StringW  otherObjectTypeID, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  objectDigest) ;

/// @brief Method .ctor addr 0x1193bd8 size 0x104 virtual false final false
inline void _ctor(int32_t  digestedObjectType, ::StringW  otherObjectTypeID, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  objectDigest) ;

static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x1193988 size 0x250 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_DigestedObjectType addr 0x1193cdc size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerEnumerated* get_DigestedObjectType() ;

/// @brief Method get_OtherObjectTypeID addr 0x1193ce4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_OtherObjectTypeID() ;

/// @brief Method get_DigestAlgorithm addr 0x1193cec size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithm() ;

/// @brief Method get_ObjectDigest addr 0x1193cf4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerBitString* get_ObjectDigest() ;

/// @brief Method ToAsn1Object addr 0x1193cfc size 0x1c0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectDigestInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectDigestInfo(ObjectDigestInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectDigestInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectDigestInfo(ObjectDigestInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectDigestInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*, "Org.BouncyCastle.Asn1.X509", "ObjectDigestInfo");
