#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PolicyQualifierInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyQualifierInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo);
// Type: Org.BouncyCastle.Asn1.X509::PolicyQualifierInfo
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(377))
// CS Name: ::Org.BouncyCastle.Asn1.X509::PolicyQualifierInfo*
class CORDL_TYPE PolicyQualifierInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field policyQualifierId offset 0x10
 __declspec(property(get=__get_policyQualifierId, put=__set_policyQualifierId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  policyQualifierId;

/// @brief Field qualifier offset 0x18
 __declspec(property(get=__get_qualifier, put=__set_qualifier)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  qualifier;

 __declspec(property(get=get_PolicyQualifierId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  PolicyQualifierId;

 __declspec(property(get=get_Qualifier)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Qualifier;

constexpr void __set_policyQualifierId(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_policyQualifierId() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_policyQualifierId() const;

constexpr void __set_qualifier(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_qualifier() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_qualifier() const;

static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  policyQualifierId, ::Org::BouncyCastle::Asn1::Asn1Encodable*  qualifier) ;

/// @brief Method .ctor addr 0x1194cac size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  policyQualifierId, ::Org::BouncyCastle::Asn1::Asn1Encodable*  qualifier) ;

static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* New_ctor(::StringW  cps) ;

/// @brief Method .ctor addr 0x1194cd8 size 0xb0 virtual false final false
inline void _ctor(::StringW  cps) ;

static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x1194d88 size 0x168 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0x1194ef0 size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* GetInstance(::System::Object*  obj) ;

/// @brief Method get_PolicyQualifierId addr 0x1194f94 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PolicyQualifierId() ;

/// @brief Method get_Qualifier addr 0x1194f9c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Qualifier() ;

/// @brief Method ToAsn1Object addr 0x1194fa4 size 0xf0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PolicyQualifierInfo(PolicyQualifierInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolicyQualifierInfo(PolicyQualifierInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PolicyQualifierInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*, "Org.BouncyCastle.Asn1.X509", "PolicyQualifierInfo");
