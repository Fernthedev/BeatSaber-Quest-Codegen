#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__AbstractProgressBar_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
CORDL_MODULE_EXPORT(ProgressBar)
namespace UnityEngine::UIElements {
class __ProgressBar__UxmlFactory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ProgressBar;
}
namespace UnityEngine::UIElements {
class __ProgressBar__UxmlFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ProgressBar);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ProgressBar__UxmlFactory);
// Type: UnityEngine.UIElements::ProgressBar
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7117))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7119))
// CS Name: ::UnityEngine.UIElements::ProgressBar*
class CORDL_TYPE ProgressBar : public ::UnityEngine::UIElements::AbstractProgressBar {
public:
// Declarations
using UxmlFactory = ::UnityEngine::UIElements::__ProgressBar__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x3e8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x3e8 - sizeof(::UnityEngine::UIElements::AbstractProgressBar)]{};

static inline ::UnityEngine::UIElements::ProgressBar* New_ctor() ;

/// @brief Method .ctor addr 0x2e387a8 size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressBar(ProgressBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressBar(ProgressBar const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProgressBar()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ProgressBar, 0x3e8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(7116)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5270 }), TypeDefinitionIndex(TypeDefinitionIndex(7119))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7118))
// CS Name: ::ProgressBar::UxmlFactory*
class CORDL_TYPE __ProgressBar__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ProgressBar*,::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ProgressBar*,::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::__ProgressBar__UxmlFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e387fc size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ProgressBar__UxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ProgressBar__UxmlFactory(__ProgressBar__UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ProgressBar__UxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ProgressBar__UxmlFactory(__ProgressBar__UxmlFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ProgressBar__UxmlFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ProgressBar__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ProgressBar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ProgressBar*, "UnityEngine.UIElements", "ProgressBar");
NEED_NO_BOX(::UnityEngine::UIElements::__ProgressBar__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ProgressBar__UxmlFactory*, "UnityEngine.UIElements", "ProgressBar/UxmlFactory");
