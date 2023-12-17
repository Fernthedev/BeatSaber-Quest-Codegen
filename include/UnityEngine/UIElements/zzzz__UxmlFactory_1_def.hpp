#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
CORDL_MODULE_EXPORT(UxmlFactory_1)
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TCreatedType>
class UxmlFactory_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TCreatedType>
class UxmlFactory_1<TCreatedType>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlFactory_1);
// Type: UnityEngine.UIElements::UxmlFactory`1
// Type: UnityEngine.UIElements::UxmlFactory`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCreatedType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(6737)), TypeDefinitionIndex(TypeDefinitionIndex(6998)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5255 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6998), inst: 2 })
// CS Name: ::UnityEngine.UIElements::UxmlFactory`1<TCreatedType>*
class CORDL_TYPE UxmlFactory_1<TCreatedType> : public ::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,::UnityEngine::UIElements::__VisualElement__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,::UnityEngine::UIElements::__VisualElement__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::UxmlFactory_1<TCreatedType>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlFactory_1(UxmlFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlFactory_1(UxmlFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UxmlFactory_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlFactory_1, "UnityEngine.UIElements", "UxmlFactory`1");
