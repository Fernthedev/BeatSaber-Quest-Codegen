#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
CORDL_MODULE_EXPORT(MiscFacetsChecker)
// Forward declare root types
namespace System::Xml::Schema {
class MiscFacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::MiscFacetsChecker);
// Type: System.Xml.Schema::MiscFacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11693))
// CS Name: ::System.Xml.Schema::MiscFacetsChecker*
class CORDL_TYPE MiscFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Xml::Schema::FacetsChecker)]{};

static inline ::System::Xml::Schema::MiscFacetsChecker* New_ctor() ;

/// @brief Method .ctor addr 0x28c3240 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MiscFacetsChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MiscFacetsChecker(MiscFacetsChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MiscFacetsChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MiscFacetsChecker(MiscFacetsChecker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MiscFacetsChecker()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::MiscFacetsChecker, 0x10>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::MiscFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::MiscFacetsChecker*, "System.Xml.Schema", "MiscFacetsChecker");
