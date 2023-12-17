#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedHoverHint)
namespace Polyglot {
struct LanguageDirection;
}
namespace HMUI {
class HoverHint;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedHoverHint;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizedHoverHint);
// Type: ::LocalizedHoverHint
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15565)), TypeDefinitionIndex(TypeDefinitionIndex(13532)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15565), inst: 4462 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5534))
// CS Name: ::LocalizedHoverHint*
class CORDL_TYPE LocalizedHoverHint : public ::Polyglot::LocalizedTextComponent_1<::HMUI::HoverHint*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Polyglot::LocalizedTextComponent_1<::HMUI::HoverHint*>)]{};

/// @brief Method SetText addr 0x229e810 size 0x18 virtual true final false
inline void SetText(::HMUI::HoverHint*  hoverHint, ::StringW  value) ;

/// @brief Method UpdateAlignment addr 0x229e828 size 0x4 virtual true final false
inline void UpdateAlignment(::HMUI::HoverHint*  hoverHint, ::Polyglot::LanguageDirection  direction) ;

static inline ::GlobalNamespace::LocalizedHoverHint* New_ctor() ;

/// @brief Method .ctor addr 0x229e82c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedHoverHint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedHoverHint(LocalizedHoverHint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedHoverHint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedHoverHint(LocalizedHoverHint const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalizedHoverHint()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedHoverHint, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizedHoverHint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedHoverHint*, "", "LocalizedHoverHint");
