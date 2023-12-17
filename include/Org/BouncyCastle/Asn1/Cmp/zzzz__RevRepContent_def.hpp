#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(RevRepContent)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevRepContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::RevRepContent);
// Type: Org.BouncyCastle.Asn1.Cmp::RevRepContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(51))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::RevRepContent*
class CORDL_TYPE RevRepContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field status offset 0x10
 __declspec(property(get=__get_status, put=__set_status)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  status;

/// @brief Field revCerts offset 0x18
 __declspec(property(get=__get_revCerts, put=__set_revCerts)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  revCerts;

/// @brief Field crls offset 0x20
 __declspec(property(get=__get_crls, put=__set_crls)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  crls;

constexpr void __set_status(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_status() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_status() const;

constexpr void __set_revCerts(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_revCerts() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_revCerts() const;

constexpr void __set_crls(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_crls() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_crls() const;

static inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe6ec54 size 0xe0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe698b8 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContent* GetInstance(::System::Object*  obj) ;

/// @brief Method GetStatus addr 0xe6ed34 size 0xf4 virtual true final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>*> GetStatus() ;

/// @brief Method GetRevCerts addr 0xe6ee28 size 0x100 virtual true final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::CertId*,::Array<::Org::BouncyCastle::Asn1::Crmf::CertId*>*> GetRevCerts() ;

/// @brief Method GetCrls addr 0xe6ef28 size 0x100 virtual true final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*,::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> GetCrls() ;

/// @brief Method ToAsn1Object addr 0xe6f028 size 0x12c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "RevRepContent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RevRepContent(RevRepContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RevRepContent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RevRepContent(RevRepContent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RevRepContent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::RevRepContent, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::RevRepContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::RevRepContent*, "Org.BouncyCastle.Asn1.Cmp", "RevRepContent");
