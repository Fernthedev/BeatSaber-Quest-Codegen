#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StylePropertyNameCollection)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
struct __StylePropertyNameCollection__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
struct __List_1__Enumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StylePropertyNameCollection;
}
namespace UnityEngine::UIElements {
struct __StylePropertyNameCollection__Enumerator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StylePropertyNameCollection);
MARK_VAL_T(::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator);
// Type: ::Enumerator
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7186))
// CS Name: ::StylePropertyNameCollection::Enumerator
struct CORDL_TYPE __StylePropertyNameCollection__Enumerator : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Enumerator offset 0x0
 __declspec(property(get=__get_m_Enumerator, put=__set_m_Enumerator)) ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName>  m_Enumerator;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::StylePropertyName  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Enumerator(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName>  value) ;

constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName>& __get_m_Enumerator() ;

constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName> const& __get_m_Enumerator() const;

/// @brief Method .ctor addr 0x2e4e6e0 size 0xc virtual false final false
inline void _ctor(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName>  enumerator) ;

/// @brief Method MoveNext addr 0x2e4e7bc size 0x48 virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x2e4e804 size 0x3c virtual true final true
inline ::UnityEngine::UIElements::StylePropertyName get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2e4e840 size 0x7c virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Reset addr 0x2e4e8bc size 0x4 virtual true final true
inline void Reset() ;

/// @brief Method Dispose addr 0x2e4e8c0 size 0x48 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName>", modifiers: "", def_value: None }]
constexpr __StylePropertyNameCollection__Enumerator(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StylePropertyName>  m_Enumerator) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StylePropertyNameCollection__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StylePropertyNameCollection__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StylePropertyNameCollection
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7187))
// CS Name: ::UnityEngine.UIElements::StylePropertyNameCollection
struct CORDL_TYPE StylePropertyNameCollection : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using Enumerator = ::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field propertiesList offset 0x0
 __declspec(property(get=__get_propertiesList, put=__set_propertiesList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*  propertiesList;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_propertiesList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* __get_propertiesList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*> __get_propertiesList() const;

/// @brief Method .ctor addr 0x2e4e668 size 0x8 virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*  list) ;

/// @brief Method GetEnumerator addr 0x2e4e670 size 0x70 virtual false final false
inline ::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StylePropertyName>.GetEnumerator addr 0x2e4e6ec size 0x68 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StylePropertyName__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2e4e754 size 0x68 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "propertiesList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*", modifiers: "", def_value: None }]
constexpr StylePropertyNameCollection(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*  propertiesList) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StylePropertyNameCollection(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StylePropertyNameCollection()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyNameCollection, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyNameCollection, "UnityEngine.UIElements", "StylePropertyNameCollection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StylePropertyNameCollection__Enumerator, "UnityEngine.UIElements", "StylePropertyNameCollection/Enumerator");
