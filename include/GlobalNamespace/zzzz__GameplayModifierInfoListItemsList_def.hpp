#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(GameplayModifierInfoListItemsList)
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifierInfoListItemsList);
// Type: ::GameplayModifierInfoListItemsList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13674), inst: 5216 }), TypeDefinitionIndex(TypeDefinitionIndex(5419)), TypeDefinitionIndex(TypeDefinitionIndex(13674))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5420))
// CS Name: ::GameplayModifierInfoListItemsList*
class CORDL_TYPE GameplayModifierInfoListItemsList : public ::HMUI::UIItemsList_1<::GlobalNamespace::GameplayModifierInfoListItem*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::HMUI::UIItemsList_1<::GlobalNamespace::GameplayModifierInfoListItem*>)]{};

static inline ::GlobalNamespace::GameplayModifierInfoListItemsList* New_ctor() ;

/// @brief Method .ctor addr 0x2278cc8 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItemsList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayModifierInfoListItemsList(GameplayModifierInfoListItemsList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItemsList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayModifierInfoListItemsList(GameplayModifierInfoListItemsList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameplayModifierInfoListItemsList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierInfoListItemsList, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierInfoListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierInfoListItemsList*, "", "GameplayModifierInfoListItemsList");
