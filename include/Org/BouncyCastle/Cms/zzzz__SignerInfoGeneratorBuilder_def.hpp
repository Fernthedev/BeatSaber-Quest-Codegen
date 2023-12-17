#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerInfoGeneratorBuilder)
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Cms {
class SignerInfoGenerator;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerInfoGeneratorBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder);
// Type: Org.BouncyCastle.Cms::SignerInfoGeneratorBuilder
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(690))
// CS Name: ::Org.BouncyCastle.Cms::SignerInfoGeneratorBuilder*
class CORDL_TYPE SignerInfoGeneratorBuilder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field directSignature offset 0x10
 __declspec(property(get=__get_directSignature, put=__set_directSignature)) bool  directSignature;

/// @brief Field signedGen offset 0x18
 __declspec(property(get=__get_signedGen, put=__set_signedGen)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*  signedGen;

/// @brief Field unsignedGen offset 0x20
 __declspec(property(get=__get_unsignedGen, put=__set_unsignedGen)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*  unsignedGen;

constexpr void __set_directSignature(bool  value) ;

constexpr bool& __get_directSignature() ;

constexpr bool const& __get_directSignature() const;

constexpr void __set_signedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*  value) ;

constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* __get_signedGen() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> __get_signedGen() const;

constexpr void __set_unsignedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*  value) ;

constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* __get_unsignedGen() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> __get_unsignedGen() const;

static inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* New_ctor() ;

/// @brief Method .ctor addr 0x1208cd8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method SetDirectSignature addr 0x1208ce0 size 0xc virtual false final false
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* SetDirectSignature(bool  hasNoSignedAttributes) ;

/// @brief Method WithSignedAttributeGenerator addr 0x1208cec size 0x8 virtual false final false
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* WithSignedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*  signedGen) ;

/// @brief Method WithUnsignedAttributeGenerator addr 0x1208cf4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* WithUnsignedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*  unsignedGen) ;

/// @brief Method Build addr 0x1208cfc size 0x12c virtual false final false
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Build(::Org::BouncyCastle::Crypto::ISignatureFactory*  contentSigner, ::Org::BouncyCastle::X509::X509Certificate*  certificate) ;

/// @brief Method Build addr 0x1208f38 size 0xac virtual false final false
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Build(::Org::BouncyCastle::Crypto::ISignatureFactory*  signerFactory, ::ArrayW<uint8_t,::Array<uint8_t>*>  subjectKeyIdentifier) ;

/// @brief Method CreateGenerator addr 0x1208e28 size 0x110 virtual false final false
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* CreateGenerator(::Org::BouncyCastle::Crypto::ISignatureFactory*  contentSigner, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*  sigId) ;

// Ctor Parameters [CppParam { name: "", ty: "SignerInfoGeneratorBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignerInfoGeneratorBuilder(SignerInfoGeneratorBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignerInfoGeneratorBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignerInfoGeneratorBuilder(SignerInfoGeneratorBuilder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignerInfoGeneratorBuilder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*, "Org.BouncyCastle.Cms", "SignerInfoGeneratorBuilder");
