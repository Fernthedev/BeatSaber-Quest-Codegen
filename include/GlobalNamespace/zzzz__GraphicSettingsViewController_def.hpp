#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(GraphicSettingsViewController)
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GraphicSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GraphicSettingsViewController);
// Type: ::GraphicSettingsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5753))
// CS Name: ::GraphicSettingsViewController*
class CORDL_TYPE GraphicSettingsViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _mainSettingsModel offset 0x70
 __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel)) ::GlobalNamespace::MainSettingsModelSO*  _mainSettingsModel;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO* __get__mainSettingsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> __get__mainSettingsModel() const;

/// @brief Method DidActivate addr 0x22da2ec size 0x4 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::GraphicSettingsViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22da2f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicSettingsViewController(GraphicSettingsViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicSettingsViewController(GraphicSettingsViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GraphicSettingsViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphicSettingsViewController, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphicSettingsViewController*, "", "GraphicSettingsViewController");
