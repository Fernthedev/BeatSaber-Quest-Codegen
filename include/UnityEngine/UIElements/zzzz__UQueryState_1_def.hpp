#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UQuery_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UQueryState_1)
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
template<typename T,typename TElement>
class __UQueryState_1__ListQueryMatcher_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template<typename T>
class __UQueryState_1__ActionQueryMatcher;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
class __UQuery__SingleQueryMatcher;
}
namespace UnityEngine::UIElements {
template<typename T>
struct __UQueryState_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class __UQueryState_1__ActionQueryMatcher;
}
namespace UnityEngine::UIElements {
template<typename T,typename TElement>
class __UQueryState_1__ListQueryMatcher_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class __UQueryState_1__ActionQueryMatcher<T>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
class __UQueryState_1__ListQueryMatcher_1<T,TElement>;
}
namespace UnityEngine::UIElements {
template<typename T>
struct UQueryState_1;
}
namespace UnityEngine::UIElements {
template<typename T>
struct __UQueryState_1__Enumerator;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
struct UQueryState_1<T>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __UQueryState_1__Enumerator<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1);
MARK_GEN_VAL_T(::UnityEngine::UIElements::UQueryState_1);
MARK_GEN_VAL_T(::UnityEngine::UIElements::__UQueryState_1__Enumerator);
// Type: ::ListQueryMatcher`1
// Type: ::ActionQueryMatcher
// Type: ::Enumerator
// Type: UnityEngine.UIElements::UQueryState`1
// Type: ::ListQueryMatcher`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6927)), TypeDefinitionIndex(TypeDefinitionIndex(6923))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6927), inst: 81 })
// CS Name: ::UQueryState`1::ListQueryMatcher`1<T,TElement>*
class CORDL_TYPE __UQueryState_1__ListQueryMatcher_1<T,TElement> : public ::UnityEngine::UIElements::__UQuery__UQueryMatcher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::UIElements::__UQuery__UQueryMatcher)]{};

/// @brief Field <matches>k__BackingField offset 0x18
 __declspec(property(get=__get__matches_k__BackingField, put=__set__matches_k__BackingField)) ::System::Collections::Generic::List_1<TElement>*  _matches_k__BackingField;

 __declspec(property(get=get_matches, put=set_matches)) ::System::Collections::Generic::List_1<TElement>*  matches;

constexpr void __set__matches_k__BackingField(::System::Collections::Generic::List_1<TElement>*  value) ;

constexpr ::System::Collections::Generic::List_1<TElement>* __get__matches_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TElement>*> __get__matches_k__BackingField() const;

/// @brief Method get_matches addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::List_1<TElement>* get_matches() ;

/// @brief Method set_matches addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_matches(::System::Collections::Generic::List_1<TElement>*  value) ;

/// @brief Method OnRuleMatchedElement addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher  matcher, ::UnityEngine::UIElements::VisualElement*  element) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Reset() ;

static inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,TElement>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__UQueryState_1__ListQueryMatcher_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UQueryState_1__ListQueryMatcher_1(__UQueryState_1__ListQueryMatcher_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UQueryState_1__ListQueryMatcher_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UQueryState_1__ListQueryMatcher_1(__UQueryState_1__ListQueryMatcher_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UQueryState_1__ListQueryMatcher_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ActionQueryMatcher
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6923)), TypeDefinitionIndex(TypeDefinitionIndex(6928))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6928), inst: 2 })
// CS Name: ::UQueryState`1::ActionQueryMatcher<T>*
class CORDL_TYPE __UQueryState_1__ActionQueryMatcher<T> : public ::UnityEngine::UIElements::__UQuery__UQueryMatcher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::UIElements::__UQuery__UQueryMatcher)]{};

/// @brief Field <callBack>k__BackingField offset 0x18
 __declspec(property(get=__get__callBack_k__BackingField, put=__set__callBack_k__BackingField)) ::System::Action_1<T>*  _callBack_k__BackingField;

 __declspec(property(get=get_callBack)) ::System::Action_1<T>*  callBack;

constexpr void __set__callBack_k__BackingField(::System::Action_1<T>*  value) ;

constexpr ::System::Action_1<T>* __get__callBack_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> __get__callBack_k__BackingField() const;

/// @brief Method get_callBack addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Action_1<T>* get_callBack() ;

/// @brief Method OnRuleMatchedElement addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher  matcher, ::UnityEngine::UIElements::VisualElement*  element) ;

static inline ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__UQueryState_1__ActionQueryMatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UQueryState_1__ActionQueryMatcher(__UQueryState_1__ActionQueryMatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UQueryState_1__ActionQueryMatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UQueryState_1__ActionQueryMatcher(__UQueryState_1__ActionQueryMatcher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UQueryState_1__ActionQueryMatcher()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::Enumerator
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6929))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6929), inst: 2 })
// CS Name: ::UQueryState`1::Enumerator<T>
struct CORDL_TYPE __UQueryState_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field iterationList offset 0x0
 __declspec(property(get=__get_iterationList, put=__set_iterationList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  iterationList;

/// @brief Field currentIndex offset 0x8
 __declspec(property(get=__get_currentIndex, put=__set_currentIndex)) int32_t  currentIndex;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_iterationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* __get_iterationList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> __get_iterationList() const;

constexpr void __set_currentIndex(int32_t  value) ;

constexpr int32_t& __get_currentIndex() ;

constexpr int32_t const& __get_currentIndex() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::UQueryState_1<T>  queryState) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "iterationList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name: "currentIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __UQueryState_1__Enumerator(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  iterationList, int32_t  currentIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __UQueryState_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __UQueryState_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UQueryState`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6930))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6930), inst: 2 })
// CS Name: ::UnityEngine.UIElements::UQueryState`1<T>
struct CORDL_TYPE UQueryState_1<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>;

using ActionQueryMatcher = ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>;

template<typename TElement>
using ListQueryMatcher_1 = ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Element offset 0x0
 __declspec(property(get=__get_m_Element, put=__set_m_Element)) ::UnityEngine::UIElements::VisualElement*  m_Element;

/// @brief Field m_Matchers offset 0x8
 __declspec(property(get=__get_m_Matchers, put=__set_m_Matchers)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*  m_Matchers;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*() ;

static inline void setStaticF_s_Action(::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*  value) ;

static inline ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* getStaticF_s_Action() ;

constexpr void __set_m_Element(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_Element() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_Element() const;

constexpr void __set_m_Matchers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* __get_m_Matchers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*> __get_m_Matchers() const;

static inline void setStaticF_s_List(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,T>*  value) ;

static inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,T>* getStaticF_s_List() ;

static inline void setStaticF_s_EnumerationList(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,::UnityEngine::UIElements::VisualElement*>*  value) ;

static inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T,::UnityEngine::UIElements::VisualElement*>* getStaticF_s_EnumerationList() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  element, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*  matchers) ;

/// @brief Method RebuildOn addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UQueryState_1<T> RebuildOn(::UnityEngine::UIElements::VisualElement*  element) ;

/// @brief Method Single addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Single(::UnityEngine::UIElements::__UQuery__SingleQueryMatcher*  matcher) ;

/// @brief Method First addr 0x0 size 0xffffffffffffffff virtual false final false
inline T First() ;

/// @brief Method ToList addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ToList(::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__UQueryState_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::UQueryState_1<T>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_Matchers", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*", modifiers: "", def_value: None }]
constexpr UQueryState_1(::UnityEngine::UIElements::VisualElement*  m_Element, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*  m_Matchers) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UQueryState_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UQueryState_1()  = default;


// Fields

// Static field s_Action

// Static field s_List

// Static field s_EnumerationList


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher, "UnityEngine.UIElements", "UQueryState`1/ActionQueryMatcher");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1, "UnityEngine.UIElements", "UQueryState`1/ListQueryMatcher`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::UQueryState_1, "UnityEngine.UIElements", "UQueryState`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__UQueryState_1__Enumerator, "UnityEngine.UIElements", "UQueryState`1/Enumerator");
