#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GuestNameButtonsListItem_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(GuestNameButtonsListItemsList)
// Forward declare root types
namespace GlobalNamespace {
class GuestNameButtonsListItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GuestNameButtonsListItemsList);
// Type: ::GuestNameButtonsListItemsList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5531)), TypeDefinitionIndex(TypeDefinitionIndex(13674)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13674), inst: 5217 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5532))
// CS Name: ::GuestNameButtonsListItemsList*
class CORDL_TYPE GuestNameButtonsListItemsList : public ::HMUI::UIItemsList_1<::GlobalNamespace::GuestNameButtonsListItem*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::HMUI::UIItemsList_1<::GlobalNamespace::GuestNameButtonsListItem*>)]{};

static inline ::GlobalNamespace::GuestNameButtonsListItemsList* New_ctor() ;

/// @brief Method .ctor addr 0x229e624 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItemsList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GuestNameButtonsListItemsList(GuestNameButtonsListItemsList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItemsList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuestNameButtonsListItemsList(GuestNameButtonsListItemsList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GuestNameButtonsListItemsList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GuestNameButtonsListItemsList, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GuestNameButtonsListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GuestNameButtonsListItemsList*, "", "GuestNameButtonsListItemsList");
