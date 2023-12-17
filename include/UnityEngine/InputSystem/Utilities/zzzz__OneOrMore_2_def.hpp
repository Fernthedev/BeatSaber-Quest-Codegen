#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OneOrMore_2)
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue,typename TList>
class __OneOrMore_2__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue,typename TList>
class __OneOrMore_2__Enumerator;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_1>
class __OneOrMore_2__Enumerator<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type TList>
class __OneOrMore_2__Enumerator<TValue,TList>;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue,typename TList>
struct OneOrMore_2;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_1>
struct OneOrMore_2<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type TList>
struct OneOrMore_2<TValue,TList>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::OneOrMore_2);
// Type: ::Enumerator
// Type: UnityEngine.InputSystem.Utilities::OneOrMore`2
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6696)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6696), inst: 4804 })
// CS Name: ::OneOrMore`2::Enumerator<TValue,TList>*
class CORDL_TYPE __OneOrMore_2__Enumerator<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

/// @brief Field m_List offset 0x18
 __declspec(property(get=__get_m_List, put=__set_m_List)) ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>>  m_List;

 __declspec(property(get=get_Current)) TValue  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

constexpr void __set_m_List(::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>>& __get_m_List() ;

constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>> const& __get_m_List() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

static inline ::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__OneOrMore_2__Enumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OneOrMore_2__Enumerator(__OneOrMore_2__Enumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OneOrMore_2__Enumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OneOrMore_2__Enumerator(__OneOrMore_2__Enumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OneOrMore_2__Enumerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type TList>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6696)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6696), inst: 81 })
// CS Name: ::OneOrMore`2::Enumerator<TValue,TList>*
class CORDL_TYPE __OneOrMore_2__Enumerator<TValue,TList> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

/// @brief Field m_List offset 0x18
 __declspec(property(get=__get_m_List, put=__set_m_List)) ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>  m_List;

 __declspec(property(get=get_Current)) TValue  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

constexpr void __set_m_List(::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList>& __get_m_List() ;

constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> const& __get_m_List() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

static inline ::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue,TList>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__OneOrMore_2__Enumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OneOrMore_2__Enumerator(__OneOrMore_2__Enumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OneOrMore_2__Enumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OneOrMore_2__Enumerator(__OneOrMore_2__Enumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OneOrMore_2__Enumerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::OneOrMore`2
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6697))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6697), inst: 4804 })
// CS Name: ::UnityEngine.InputSystem.Utilities::OneOrMore`2<TValue,TList>
struct CORDL_TYPE OneOrMore_2<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_IsSingle offset 0x0
 __declspec(property(get=__get_m_IsSingle, put=__set_m_IsSingle)) bool  m_IsSingle;

/// @brief Field m_Single offset 0x8
 __declspec(property(get=__get_m_Single, put=__set_m_Single)) TValue  m_Single;

/// @brief Field m_Multiple offset 0x10
 __declspec(property(get=__get_m_Multiple, put=__set_m_Multiple)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>  m_Multiple;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) TValue  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() ;

constexpr void __set_m_IsSingle(bool  value) ;

constexpr bool& __get_m_IsSingle() ;

constexpr bool const& __get_m_IsSingle() const;

constexpr void __set_m_Single(TValue  value) ;

constexpr TValue& __get_m_Single() ;

constexpr TValue const& __get_m_Single() const;

constexpr void __set_m_Multiple(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>& __get_m_Multiple() ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1> const& __get_m_Multiple() const;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue get_Item(int32_t  index) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TValue  single) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>  multiple) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>> op_Implicit___UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_TValue_cordlgen_1__(TValue  single) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>> op_Implicit___UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_TValue_cordlgen_1__(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>  multiple) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TValue>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "m_IsSingle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Single", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "m_Multiple", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>", modifiers: "", def_value: None }]
constexpr OneOrMore_2(bool  m_IsSingle, TValue  m_Single, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue_cordlgen_1>  m_Multiple) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OneOrMore_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OneOrMore_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::OneOrMore`2
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type TList>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6697))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6697), inst: 81 })
// CS Name: ::UnityEngine.InputSystem.Utilities::OneOrMore`2<TValue,TList>
struct CORDL_TYPE OneOrMore_2<TValue,TList> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_IsSingle offset 0x0
 __declspec(property(get=__get_m_IsSingle, put=__set_m_IsSingle)) bool  m_IsSingle;

/// @brief Field m_Single offset 0x8
 __declspec(property(get=__get_m_Single, put=__set_m_Single)) TValue  m_Single;

/// @brief Field m_Multiple offset 0x10
 __declspec(property(get=__get_m_Multiple, put=__set_m_Multiple)) TList  m_Multiple;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) TValue  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() ;

constexpr void __set_m_IsSingle(bool  value) ;

constexpr bool& __get_m_IsSingle() ;

constexpr bool const& __get_m_IsSingle() const;

constexpr void __set_m_Single(TValue  value) ;

constexpr TValue& __get_m_Single() ;

constexpr TValue const& __get_m_Single() const;

constexpr void __set_m_Multiple(TList  value) ;

constexpr TList& __get_m_Multiple() ;

constexpr TList const& __get_m_Multiple() const;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue get_Item(int32_t  index) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TValue  single) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(TList  multiple) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> op_Implicit___UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue_TList_(TValue  single) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue,TList> op_Implicit___UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue_TList_(TList  multiple) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TValue>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "m_IsSingle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Single", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "m_Multiple", ty: "TList", modifiers: "", def_value: None }]
constexpr OneOrMore_2(bool  m_IsSingle, TValue  m_Single, TList  m_Multiple) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OneOrMore_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OneOrMore_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator, "UnityEngine.InputSystem.Utilities", "OneOrMore`2/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::OneOrMore_2, "UnityEngine.InputSystem.Utilities", "OneOrMore`2");
