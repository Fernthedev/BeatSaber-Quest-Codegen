#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlRootElementTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlRootElementFactory)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlRootElementFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlRootElementFactory);
// Type: UnityEngine.UIElements::UxmlRootElementFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(6971)), TypeDefinitionIndex(TypeDefinitionIndex(6744)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5285 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6970))
// CS Name: ::UnityEngine.UIElements::UxmlRootElementFactory*
class CORDL_TYPE UxmlRootElementFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::UxmlRootElementTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::UxmlRootElementTraits*>)]{};

 __declspec(property(get=get_uxmlName)) ::StringW  uxmlName;

 __declspec(property(get=get_uxmlQualifiedName)) ::StringW  uxmlQualifiedName;

/// @brief Method get_uxmlName addr 0x2e0de90 size 0x40 virtual true final false
inline ::StringW get_uxmlName() ;

/// @brief Method get_uxmlQualifiedName addr 0x2e0ded0 size 0x74 virtual true final false
inline ::StringW get_uxmlQualifiedName() ;

/// @brief Method Create addr 0x2e0df44 size 0x8 virtual true final false
inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::UxmlRootElementFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e0df4c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UxmlRootElementFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlRootElementFactory(UxmlRootElementFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlRootElementFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlRootElementFactory(UxmlRootElementFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UxmlRootElementFactory()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlRootElementFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlRootElementFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlRootElementFactory*, "UnityEngine.UIElements", "UxmlRootElementFactory");
