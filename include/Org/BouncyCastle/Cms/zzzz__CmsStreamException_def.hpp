#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsStreamException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsStreamException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsStreamException);
// Type: Org.BouncyCastle.Cms::CmsStreamException
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(661))
// CS Name: ::Org.BouncyCastle.Cms::CmsStreamException*
class CORDL_TYPE CmsStreamException : public ::System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::IO::IOException)]{};

static inline ::Org::BouncyCastle::Cms::CmsStreamException* New_ctor() ;

/// @brief Method .ctor addr 0x11ffea4 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Cms::CmsStreamException* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x11ffeac size 0x8 virtual false final false
inline void _ctor(::StringW  name) ;

static inline ::Org::BouncyCastle::Cms::CmsStreamException* New_ctor(::StringW  name, ::System::Exception*  e) ;

/// @brief Method .ctor addr 0x11f3264 size 0x8 virtual false final false
inline void _ctor(::StringW  name, ::System::Exception*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "CmsStreamException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsStreamException(CmsStreamException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsStreamException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsStreamException(CmsStreamException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsStreamException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsStreamException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsStreamException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsStreamException*, "Org.BouncyCastle.Cms", "CmsStreamException");
