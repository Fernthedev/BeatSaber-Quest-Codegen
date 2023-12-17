#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIElementsPackageUtility)
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsPackageUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIElementsPackageUtility);
// Type: UnityEngine.UIElements::UIElementsPackageUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6782))
// CS Name: ::UnityEngine.UIElements::UIElementsPackageUtility*
class CORDL_TYPE UIElementsPackageUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_EditorResourcesBasePath(::StringW  value) ;

static inline ::StringW getStaticF_EditorResourcesBasePath() ;

static inline void setStaticF_IsUIEPackageLoaded(bool  value) ;

static inline bool getStaticF_IsUIEPackageLoaded() ;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsPackageUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIElementsPackageUtility(UIElementsPackageUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsPackageUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIElementsPackageUtility(UIElementsPackageUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UIElementsPackageUtility()  = default;
public:


// Fields

// Static field EditorResourcesBasePath

// Static field IsUIEPackageLoaded


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsPackageUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsPackageUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsPackageUtility*, "UnityEngine.UIElements", "UIElementsPackageUtility");
