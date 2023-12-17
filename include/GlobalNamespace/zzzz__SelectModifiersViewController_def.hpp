#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(SelectModifiersViewController)
namespace GlobalNamespace {
class GameplayModifiersPanelController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectModifiersViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectModifiersViewController);
// Type: ::SelectModifiersViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5721))
// CS Name: ::SelectModifiersViewController*
class CORDL_TYPE SelectModifiersViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _gameplayModifiersPanelController offset 0x70
 __declspec(property(get=__get__gameplayModifiersPanelController, put=__set__gameplayModifiersPanelController)) ::GlobalNamespace::GameplayModifiersPanelController*  _gameplayModifiersPanelController;

 __declspec(property(get=get_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  gameplayModifiers;

constexpr void __set__gameplayModifiersPanelController(::GlobalNamespace::GameplayModifiersPanelController*  value) ;

constexpr ::GlobalNamespace::GameplayModifiersPanelController* __get__gameplayModifiersPanelController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersPanelController*> __get__gameplayModifiersPanelController() const;

/// @brief Method get_gameplayModifiers addr 0x22d0164 size 0x1c virtual false final false
inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers() ;

/// @brief Method Setup addr 0x22d0180 size 0x1c virtual false final false
inline void Setup(::GlobalNamespace::GameplayModifiers*  gameplayModifiers) ;

/// @brief Method DidActivate addr 0x22d019c size 0xa0 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::SelectModifiersViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d023c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SelectModifiersViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectModifiersViewController(SelectModifiersViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectModifiersViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectModifiersViewController(SelectModifiersViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectModifiersViewController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectModifiersViewController, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectModifiersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectModifiersViewController*, "", "SelectModifiersViewController");
