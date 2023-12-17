#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
CORDL_MODULE_EXPORT(TestFlowCoordinator)
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class TestFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestFlowCoordinator);
// Type: ::TestFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5529))
// CS Name: ::TestFlowCoordinator*
class CORDL_TYPE TestFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::HMUI::FlowCoordinator)]{};

/// @brief Field _viewController offset 0xa8
 __declspec(property(get=__get__viewController, put=__set__viewController)) ::HMUI::ViewController*  _viewController;

/// @brief Field _leftViewController offset 0xb0
 __declspec(property(get=__get__leftViewController, put=__set__leftViewController)) ::HMUI::ViewController*  _leftViewController;

/// @brief Field _rightViewController offset 0xb8
 __declspec(property(get=__get__rightViewController, put=__set__rightViewController)) ::HMUI::ViewController*  _rightViewController;

/// @brief Field _bottomScreenViewController offset 0xc0
 __declspec(property(get=__get__bottomScreenViewController, put=__set__bottomScreenViewController)) ::HMUI::ViewController*  _bottomScreenViewController;

/// @brief Field _topScreenViewController offset 0xc8
 __declspec(property(get=__get__topScreenViewController, put=__set__topScreenViewController)) ::HMUI::ViewController*  _topScreenViewController;

constexpr void __set__viewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__viewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__viewController() const;

constexpr void __set__leftViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__leftViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__leftViewController() const;

constexpr void __set__rightViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__rightViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__rightViewController() const;

constexpr void __set__bottomScreenViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__bottomScreenViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__bottomScreenViewController() const;

constexpr void __set__topScreenViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__topScreenViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__topScreenViewController() const;

/// @brief Method DidActivate addr 0x229e188 size 0x1c virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::TestFlowCoordinator* New_ctor() ;

/// @brief Method .ctor addr 0x229e1a4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TestFlowCoordinator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TestFlowCoordinator(TestFlowCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestFlowCoordinator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestFlowCoordinator(TestFlowCoordinator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TestFlowCoordinator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestFlowCoordinator, 0xd0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestFlowCoordinator*, "", "TestFlowCoordinator");
