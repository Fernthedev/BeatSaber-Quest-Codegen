#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsException);
// Type: Org.BouncyCastle.Cms::CmsException
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(612))
// CS Name: ::Org.BouncyCastle.Cms::CmsException*
class CORDL_TYPE CmsException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::Org::BouncyCastle::Cms::CmsException* New_ctor() ;

/// @brief Method .ctor addr 0x11d8230 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Cms::CmsException* New_ctor(::StringW  msg) ;

/// @brief Method .ctor addr 0x11d8288 size 0x68 virtual false final false
inline void _ctor(::StringW  msg) ;

static inline ::Org::BouncyCastle::Cms::CmsException* New_ctor(::StringW  msg, ::System::Exception*  e) ;

/// @brief Method .ctor addr 0x11d82f0 size 0x70 virtual false final false
inline void _ctor(::StringW  msg, ::System::Exception*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "CmsException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsException(CmsException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsException(CmsException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsException*, "Org.BouncyCastle.Cms", "CmsException");
