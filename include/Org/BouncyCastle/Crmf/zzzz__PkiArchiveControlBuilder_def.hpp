#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkiArchiveControlBuilder)
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Crmf {
class PkiArchiveControl;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessableByteArray;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PkiArchiveControlBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder);
// Type: Org.BouncyCastle.Crmf::PkiArchiveControlBuilder
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(704))
// CS Name: ::Org.BouncyCastle.Crmf::PkiArchiveControlBuilder*
class CORDL_TYPE PkiArchiveControlBuilder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field envGen offset 0x10
 __declspec(property(get=__get_envGen, put=__set_envGen)) ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*  envGen;

/// @brief Field keyContent offset 0x18
 __declspec(property(get=__get_keyContent, put=__set_keyContent)) ::Org::BouncyCastle::Cms::CmsProcessableByteArray*  keyContent;

constexpr void __set_envGen(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*  value) ;

constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* __get_envGen() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*> __get_envGen() const;

constexpr void __set_keyContent(::Org::BouncyCastle::Cms::CmsProcessableByteArray*  value) ;

constexpr ::Org::BouncyCastle::Cms::CmsProcessableByteArray* __get_keyContent() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsProcessableByteArray*> __get_keyContent() const;

static inline ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*  privateKeyInfo, ::Org::BouncyCastle::Asn1::X509::GeneralName*  generalName) ;

/// @brief Method .ctor addr 0x1211b8c size 0x1f8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*  privateKeyInfo, ::Org::BouncyCastle::Asn1::X509::GeneralName*  generalName) ;

/// @brief Method AddRecipientGenerator addr 0x1211d84 size 0x28 virtual false final false
inline ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* AddRecipientGenerator(::Org::BouncyCastle::Cms::RecipientInfoGenerator*  recipientGen) ;

/// @brief Method Build addr 0x1211dac size 0x100 virtual false final false
inline ::Org::BouncyCastle::Crmf::PkiArchiveControl* Build(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*  contentEncryptor) ;

// Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControlBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkiArchiveControlBuilder(PkiArchiveControlBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControlBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkiArchiveControlBuilder(PkiArchiveControlBuilder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkiArchiveControlBuilder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*, "Org.BouncyCastle.Crmf", "PkiArchiveControlBuilder");
