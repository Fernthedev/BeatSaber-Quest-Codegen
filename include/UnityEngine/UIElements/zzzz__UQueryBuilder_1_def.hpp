#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UQueryBuilder_1)
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
namespace UnityEngine::UIElements {
struct StyleSelectorPart;
}
namespace UnityEngine::UIElements {
template<typename T>
struct UQueryState_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct StyleSelectorRelationship;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class StyleSelector;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
struct UQueryBuilder_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
struct UQueryBuilder_1<T>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::UQueryBuilder_1);
// Type: UnityEngine.UIElements::UQueryBuilder`1
// Type: UnityEngine.UIElements::UQueryBuilder`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6931))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6931), inst: 2 })
// CS Name: ::UnityEngine.UIElements::UQueryBuilder`1<T>
struct CORDL_TYPE UQueryBuilder_1<T> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_StyleSelectors offset 0x0
 __declspec(property(get=__get_m_StyleSelectors, put=__set_m_StyleSelectors)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*  m_StyleSelectors;

/// @brief Field m_Parts offset 0x8
 __declspec(property(get=__get_m_Parts, put=__set_m_Parts)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*  m_Parts;

/// @brief Field m_Element offset 0x10
 __declspec(property(get=__get_m_Element, put=__set_m_Element)) ::UnityEngine::UIElements::VisualElement*  m_Element;

/// @brief Field m_Matchers offset 0x18
 __declspec(property(get=__get_m_Matchers, put=__set_m_Matchers)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*  m_Matchers;

/// @brief Field m_Relationship offset 0x20
 __declspec(property(get=__get_m_Relationship, put=__set_m_Relationship)) ::UnityEngine::UIElements::StyleSelectorRelationship  m_Relationship;

/// @brief Field pseudoStatesMask offset 0x24
 __declspec(property(get=__get_pseudoStatesMask, put=__set_pseudoStatesMask)) int32_t  pseudoStatesMask;

/// @brief Field negatedPseudoStatesMask offset 0x28
 __declspec(property(get=__get_negatedPseudoStatesMask, put=__set_negatedPseudoStatesMask)) int32_t  negatedPseudoStatesMask;

 __declspec(property(get=get_styleSelectors)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*  styleSelectors;

 __declspec(property(get=get_parts)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*  parts;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*() ;

constexpr void __set_m_StyleSelectors(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>* __get_m_StyleSelectors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*> __get_m_StyleSelectors() const;

constexpr void __set_m_Parts(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* __get_m_Parts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*> __get_m_Parts() const;

constexpr void __set_m_Element(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_Element() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_Element() const;

constexpr void __set_m_Matchers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* __get_m_Matchers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*> __get_m_Matchers() const;

constexpr void __set_m_Relationship(::UnityEngine::UIElements::StyleSelectorRelationship  value) ;

constexpr ::UnityEngine::UIElements::StyleSelectorRelationship& __get_m_Relationship() ;

constexpr ::UnityEngine::UIElements::StyleSelectorRelationship const& __get_m_Relationship() const;

constexpr void __set_pseudoStatesMask(int32_t  value) ;

constexpr int32_t& __get_pseudoStatesMask() ;

constexpr int32_t const& __get_pseudoStatesMask() const;

constexpr void __set_negatedPseudoStatesMask(int32_t  value) ;

constexpr int32_t& __get_negatedPseudoStatesMask() ;

constexpr int32_t const& __get_negatedPseudoStatesMask() const;

/// @brief Method get_styleSelectors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>* get_styleSelectors() ;

/// @brief Method get_parts addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* get_parts() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  visualElement) ;

/// @brief Method Class addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UQueryBuilder_1<T> Class(::StringW  classname) ;

/// @brief Method Name addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UQueryBuilder_1<T> Name(::StringW  id) ;

/// @brief Method OfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T2>
inline ::UnityEngine::UIElements::UQueryBuilder_1<T2> OfType(::StringW  name, ::StringW  className) ;

/// @brief Method SingleBaseType addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UQueryBuilder_1<T> SingleBaseType() ;

/// @brief Method AddClass addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddClass(::StringW  c) ;

/// @brief Method AddName addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddName(::StringW  id) ;

/// @brief Method AddType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T2>
inline void AddType() ;

/// @brief Method AddRelationship addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T2>
inline ::UnityEngine::UIElements::UQueryBuilder_1<T2> AddRelationship(::UnityEngine::UIElements::StyleSelectorRelationship  relationship) ;

/// @brief Method AddPseudoStatesRuleIfNecessasy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddPseudoStatesRuleIfNecessasy() ;

/// @brief Method FinishSelector addr 0x0 size 0xffffffffffffffff virtual false final false
inline void FinishSelector() ;

/// @brief Method CurrentSelectorEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool CurrentSelectorEmpty() ;

/// @brief Method FinishCurrentSelector addr 0x0 size 0xffffffffffffffff virtual false final false
inline void FinishCurrentSelector() ;

/// @brief Method Build addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UQueryState_1<T> Build() ;

/// @brief Method ToList addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ToList(::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::UQueryBuilder_1<T>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_StyleSelectors", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*", modifiers: "", def_value: None }, CppParam { name: "m_Parts", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*", modifiers: "", def_value: None }, CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_Matchers", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*", modifiers: "", def_value: None }, CppParam { name: "m_Relationship", ty: "::UnityEngine::UIElements::StyleSelectorRelationship", modifiers: "", def_value: None }, CppParam { name: "pseudoStatesMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "negatedPseudoStatesMask", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UQueryBuilder_1(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*  m_StyleSelectors, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*  m_Parts, ::UnityEngine::UIElements::VisualElement*  m_Element, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*  m_Matchers, ::UnityEngine::UIElements::StyleSelectorRelationship  m_Relationship, int32_t  pseudoStatesMask, int32_t  negatedPseudoStatesMask) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UQueryBuilder_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UQueryBuilder_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::UQueryBuilder_1, "UnityEngine.UIElements", "UQueryBuilder`1");
