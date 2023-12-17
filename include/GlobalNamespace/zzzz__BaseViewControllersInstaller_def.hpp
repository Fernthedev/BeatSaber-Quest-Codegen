#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(BaseViewControllersInstaller)
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseViewControllersInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseViewControllersInstaller);
// Type: ::BaseViewControllersInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11147))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5387))
// CS Name: ::BaseViewControllersInstaller*
class CORDL_TYPE BaseViewControllersInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::ScriptableObjectInstaller)]{};

/// @brief Field _simpleDialogPromptViewControllerPrefab offset 0x20
 __declspec(property(get=__get__simpleDialogPromptViewControllerPrefab, put=__set__simpleDialogPromptViewControllerPrefab)) ::GlobalNamespace::SimpleDialogPromptViewController*  _simpleDialogPromptViewControllerPrefab;

/// @brief Field _safeAreaFocusedSimpleDialogPromptViewControllerPrefab offset 0x28
 __declspec(property(get=__get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab, put=__set__safeAreaFocusedSimpleDialogPromptViewControllerPrefab)) ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*  _safeAreaFocusedSimpleDialogPromptViewControllerPrefab;

constexpr void __set__simpleDialogPromptViewControllerPrefab(::GlobalNamespace::SimpleDialogPromptViewController*  value) ;

constexpr ::GlobalNamespace::SimpleDialogPromptViewController* __get__simpleDialogPromptViewControllerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> __get__simpleDialogPromptViewControllerPrefab() const;

constexpr void __set__safeAreaFocusedSimpleDialogPromptViewControllerPrefab(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*  value) ;

constexpr ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* __get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*> __get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab() const;

/// @brief Method InstallBindings addr 0x226f00c size 0xac virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::BaseViewControllersInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x226f0b8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseViewControllersInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseViewControllersInstaller(BaseViewControllersInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseViewControllersInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseViewControllersInstaller(BaseViewControllersInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseViewControllersInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseViewControllersInstaller, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseViewControllersInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseViewControllersInstaller*, "", "BaseViewControllersInstaller");
