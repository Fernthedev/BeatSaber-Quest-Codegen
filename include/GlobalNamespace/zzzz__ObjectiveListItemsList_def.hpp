#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObjectiveListItem_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(ObjectiveListItemsList)
// Forward declare root types
namespace GlobalNamespace {
class ObjectiveListItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObjectiveListItemsList);
// Type: ::ObjectiveListItemsList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13674), inst: 5219 }), TypeDefinitionIndex(TypeDefinitionIndex(13674)), TypeDefinitionIndex(TypeDefinitionIndex(5800))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5801))
// CS Name: ::ObjectiveListItemsList*
class CORDL_TYPE ObjectiveListItemsList : public ::HMUI::UIItemsList_1<::GlobalNamespace::ObjectiveListItem*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::HMUI::UIItemsList_1<::GlobalNamespace::ObjectiveListItem*>)]{};

static inline ::GlobalNamespace::ObjectiveListItemsList* New_ctor() ;

/// @brief Method .ctor addr 0x22e795c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItemsList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectiveListItemsList(ObjectiveListItemsList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItemsList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectiveListItemsList(ObjectiveListItemsList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectiveListItemsList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectiveListItemsList, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObjectiveListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectiveListItemsList*, "", "ObjectiveListItemsList");
