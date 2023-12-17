#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PolicyQualifierID)
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyQualifierID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID);
// Type: Org.BouncyCastle.Asn1.X509::PolicyQualifierID
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(350))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(376))
// CS Name: ::Org.BouncyCastle.Asn1.X509::PolicyQualifierID*
class CORDL_TYPE PolicyQualifierID : public ::Org::BouncyCastle::Asn1::DerObjectIdentifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::DerObjectIdentifier)]{};

/// @brief Field IdQt offset 0x0
static constexpr ::ConstString  IdQt{u"1.3.6.1.5.5.7.2"};

static inline void setStaticF_IdQtCps(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* getStaticF_IdQtCps() ;

static inline void setStaticF_IdQtUnotice(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* getStaticF_IdQtUnotice() ;

static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* New_ctor(::StringW  id) ;

/// @brief Method .ctor addr 0x1194b94 size 0x68 virtual false final false
inline void _ctor(::StringW  id) ;

// Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PolicyQualifierID(PolicyQualifierID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolicyQualifierID(PolicyQualifierID const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PolicyQualifierID()  = default;
public:


// Fields

// Static field IdQtCps

// Static field IdQtUnotice


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*, "Org.BouncyCastle.Asn1.X509", "PolicyQualifierID");
