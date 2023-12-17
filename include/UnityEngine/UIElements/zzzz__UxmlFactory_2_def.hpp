#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlFactory_2)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlFactory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TCreatedType,typename TTraits>
class UxmlFactory_2;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
class UxmlFactory_2<TCreatedType,TTraits>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlFactory_2);
// Type: UnityEngine.UIElements::UxmlFactory`2
// Type: UnityEngine.UIElements::UxmlFactory`2
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCreatedType,::il2cpp_utils::il2cpp_reference_type TTraits>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6997))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 81 })
// CS Name: ::UnityEngine.UIElements::UxmlFactory`2<TCreatedType,TTraits>*
class CORDL_TYPE UxmlFactory_2<TCreatedType,TTraits> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Traits offset 0x10
 __declspec(property(get=__get_m_Traits, put=__set_m_Traits)) TTraits  m_Traits;

 __declspec(property(get=get_uxmlName)) ::StringW  uxmlName;

 __declspec(property(get=get_uxmlNamespace)) ::StringW  uxmlNamespace;

 __declspec(property(get=get_uxmlQualifiedName)) ::StringW  uxmlQualifiedName;

/// @brief Convert operator to "::UnityEngine::UIElements::IUxmlFactory"
constexpr operator  ::UnityEngine::UIElements::IUxmlFactory*() noexcept;

constexpr void __set_m_Traits(TTraits  value) ;

constexpr TTraits& __get_m_Traits() ;

constexpr TTraits const& __get_m_Traits() const;

static inline ::UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method get_uxmlName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_uxmlName() ;

/// @brief Method get_uxmlNamespace addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_uxmlNamespace() ;

/// @brief Method get_uxmlQualifiedName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_uxmlQualifiedName() ;

/// @brief Method AcceptsAttributeBag addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

// Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlFactory_2(UxmlFactory_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlFactory_2(UxmlFactory_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UxmlFactory_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlFactory_2, "UnityEngine.UIElements", "UxmlFactory`2");
