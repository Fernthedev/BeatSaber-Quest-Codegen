#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RevDetails)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevDetails;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::RevDetails);
// Type: Org.BouncyCastle.Asn1.Cmp::RevDetails
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(50))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::RevDetails*
class CORDL_TYPE RevDetails : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field certDetails offset 0x10
 __declspec(property(get=__get_certDetails, put=__set_certDetails)) ::Org::BouncyCastle::Asn1::Crmf::CertTemplate*  certDetails;

/// @brief Field crlEntryDetails offset 0x18
 __declspec(property(get=__get_crlEntryDetails, put=__set_crlEntryDetails)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  crlEntryDetails;

 __declspec(property(get=get_CertDetails)) ::Org::BouncyCastle::Asn1::Crmf::CertTemplate*  CertDetails;

 __declspec(property(get=get_CrlEntryDetails)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  CrlEntryDetails;

constexpr void __set_certDetails(::Org::BouncyCastle::Asn1::Crmf::CertTemplate*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* __get_certDetails() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*> __get_certDetails() const;

constexpr void __set_crlEntryDetails(::Org::BouncyCastle::Asn1::X509::X509Extensions*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* __get_crlEntryDetails() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> __get_crlEntryDetails() const;

static inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe6e84c size 0xd4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe6e920 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate*  certDetails) ;

/// @brief Method .ctor addr 0xe6eaa8 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate*  certDetails) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate*  certDetails, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  crlEntryDetails) ;

/// @brief Method .ctor addr 0xe6ead0 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate*  certDetails, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  crlEntryDetails) ;

/// @brief Method get_CertDetails addr 0xe6eafc size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* get_CertDetails() ;

/// @brief Method get_CrlEntryDetails addr 0xe6eb04 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_CrlEntryDetails() ;

/// @brief Method ToAsn1Object addr 0xe6eb0c size 0x148 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "RevDetails", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RevDetails(RevDetails && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RevDetails", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RevDetails(RevDetails const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RevDetails()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::RevDetails, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::RevDetails);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::RevDetails*, "Org.BouncyCastle.Asn1.Cmp", "RevDetails");
