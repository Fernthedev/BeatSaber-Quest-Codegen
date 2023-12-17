#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsAuthEnvelopedGenerator)
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthEnvelopedGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator);
// Type: Org.BouncyCastle.Cms::CmsAuthEnvelopedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(627))
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthEnvelopedGenerator*
class CORDL_TYPE CmsAuthEnvelopedGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Aes128Ccm(::StringW  value) ;

static inline ::StringW getStaticF_Aes128Ccm() ;

static inline void setStaticF_Aes192Ccm(::StringW  value) ;

static inline ::StringW getStaticF_Aes192Ccm() ;

static inline void setStaticF_Aes256Ccm(::StringW  value) ;

static inline ::StringW getStaticF_Aes256Ccm() ;

static inline void setStaticF_Aes128Gcm(::StringW  value) ;

static inline ::StringW getStaticF_Aes128Gcm() ;

static inline void setStaticF_Aes192Gcm(::StringW  value) ;

static inline ::StringW getStaticF_Aes192Gcm() ;

static inline void setStaticF_Aes256Gcm(::StringW  value) ;

static inline ::StringW getStaticF_Aes256Gcm() ;

static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x11dc62c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsAuthEnvelopedGenerator(CmsAuthEnvelopedGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsAuthEnvelopedGenerator(CmsAuthEnvelopedGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsAuthEnvelopedGenerator()  = default;
public:


// Fields

// Static field Aes128Ccm

// Static field Aes192Ccm

// Static field Aes256Ccm

// Static field Aes128Gcm

// Static field Aes192Gcm

// Static field Aes256Gcm


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedGenerator");
