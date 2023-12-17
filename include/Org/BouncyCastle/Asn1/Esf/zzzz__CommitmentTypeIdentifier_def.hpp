#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CommitmentTypeIdentifier)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CommitmentTypeIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier);
// Type: Org.BouncyCastle.Asn1.Esf::CommitmentTypeIdentifier
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(135))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::CommitmentTypeIdentifier*
class CORDL_TYPE CommitmentTypeIdentifier : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_ProofOfOrigin(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfOrigin() ;

static inline void setStaticF_ProofOfReceipt(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfReceipt() ;

static inline void setStaticF_ProofOfDelivery(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfDelivery() ;

static inline void setStaticF_ProofOfSender(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfSender() ;

static inline void setStaticF_ProofOfApproval(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfApproval() ;

static inline void setStaticF_ProofOfCreation(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfCreation() ;

static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier* New_ctor() ;

/// @brief Method .ctor addr 0xe8f3c0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIdentifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommitmentTypeIdentifier(CommitmentTypeIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIdentifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommitmentTypeIdentifier(CommitmentTypeIdentifier const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CommitmentTypeIdentifier()  = default;
public:


// Fields

// Static field ProofOfOrigin

// Static field ProofOfReceipt

// Static field ProofOfDelivery

// Static field ProofOfSender

// Static field ProofOfApproval

// Static field ProofOfCreation


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*, "Org.BouncyCastle.Asn1.Esf", "CommitmentTypeIdentifier");
