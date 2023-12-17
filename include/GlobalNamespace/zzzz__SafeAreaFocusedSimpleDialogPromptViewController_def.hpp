#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
CORDL_MODULE_EXPORT(SafeAreaFocusedSimpleDialogPromptViewController)
// Forward declare root types
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController);
// Type: ::SafeAreaFocusedSimpleDialogPromptViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5763))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5745))
// CS Name: ::SafeAreaFocusedSimpleDialogPromptViewController*
class CORDL_TYPE SafeAreaFocusedSimpleDialogPromptViewController : public ::GlobalNamespace::SimpleDialogPromptViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::GlobalNamespace::SimpleDialogPromptViewController)]{};

static inline ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d7ef0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SafeAreaFocusedSimpleDialogPromptViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeAreaFocusedSimpleDialogPromptViewController(SafeAreaFocusedSimpleDialogPromptViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeAreaFocusedSimpleDialogPromptViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeAreaFocusedSimpleDialogPromptViewController(SafeAreaFocusedSimpleDialogPromptViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SafeAreaFocusedSimpleDialogPromptViewController()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*, "", "SafeAreaFocusedSimpleDialogPromptViewController");
