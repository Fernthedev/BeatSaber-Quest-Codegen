#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayMultipleIndexFilter)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class __ArrayMultipleIndexFilter___ExecuteFilter_d__4;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
struct __List_1__Enumerator;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class ArrayMultipleIndexFilter;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class __ArrayMultipleIndexFilter___ExecuteFilter_d__4;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::__ArrayMultipleIndexFilter___ExecuteFilter_d__4);
// Type: ::<ExecuteFilter>d__4
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12010))
// CS Name: ::ArrayMultipleIndexFilter::<ExecuteFilter>d__4*
class CORDL_TYPE __ArrayMultipleIndexFilter___ExecuteFilter_d__4 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::Newtonsoft::Json::Linq::JToken*  __2__current;

/// @brief Field <>l__initialThreadId offset 0x20
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field current offset 0x28
 __declspec(property(get=__get_current, put=__set_current)) ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*  current;

/// @brief Field <>3__current offset 0x30
 __declspec(property(get=__get___3__current, put=__set___3__current)) ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*  __3__current;

/// @brief Field <>4__this offset 0x38
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter*  __4__this;

/// @brief Field <t>5__1 offset 0x40
 __declspec(property(get=__get__t_5__1, put=__set__t_5__1)) ::Newtonsoft::Json::Linq::JToken*  _t_5__1;

/// @brief Field errorWhenNoMatch offset 0x48
 __declspec(property(get=__get_errorWhenNoMatch, put=__set_errorWhenNoMatch)) bool  errorWhenNoMatch;

/// @brief Field <>3__errorWhenNoMatch offset 0x49
 __declspec(property(get=__get___3__errorWhenNoMatch, put=__set___3__errorWhenNoMatch)) bool  __3__errorWhenNoMatch;

/// @brief Field <>7__wrap1 offset 0x50
 __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*  __7__wrap1;

/// @brief Field <>7__wrap2 offset 0x58
 __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2)) ::System::Collections::Generic::__List_1__Enumerator<int32_t>  __7__wrap2;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)) ::Newtonsoft::Json::Linq::JToken*  System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::Newtonsoft::Json::Linq::JToken*  value) ;

constexpr ::Newtonsoft::Json::Linq::JToken* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set_current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __get_current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> __get_current() const;

constexpr void __set___3__current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __get___3__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> __get___3__current() const;

constexpr void __set___4__this(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter*  value) ;

constexpr ::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter*> __get___4__this() const;

constexpr void __set__t_5__1(::Newtonsoft::Json::Linq::JToken*  value) ;

constexpr ::Newtonsoft::Json::Linq::JToken* __get__t_5__1() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> __get__t_5__1() const;

constexpr void __set_errorWhenNoMatch(bool  value) ;

constexpr bool& __get_errorWhenNoMatch() ;

constexpr bool const& __get_errorWhenNoMatch() const;

constexpr void __set___3__errorWhenNoMatch(bool  value) ;

constexpr bool& __get___3__errorWhenNoMatch() ;

constexpr bool const& __get___3__errorWhenNoMatch() const;

constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __get___7__wrap1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> __get___7__wrap1() const;

constexpr void __set___7__wrap2(::System::Collections::Generic::__List_1__Enumerator<int32_t>  value) ;

constexpr ::System::Collections::Generic::__List_1__Enumerator<int32_t>& __get___7__wrap2() ;

constexpr ::System::Collections::Generic::__List_1__Enumerator<int32_t> const& __get___7__wrap2() const;

static inline ::Newtonsoft::Json::Linq::JsonPath::__ArrayMultipleIndexFilter___ExecuteFilter_d__4* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x26ac268 size 0x44 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x26ac2b4 size 0xb0 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x26ac364 size 0x358 virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x26ac70c size 0xb0 virtual false final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x26ac6bc size 0x50 virtual false final false
inline void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current addr 0x26ac7bc size 0x8 virtual true final true
inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x26ac7c4 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x26ac804 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator addr 0x26ac80c size 0xb0 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x26ac8bc size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__ArrayMultipleIndexFilter___ExecuteFilter_d__4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ArrayMultipleIndexFilter___ExecuteFilter_d__4(__ArrayMultipleIndexFilter___ExecuteFilter_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ArrayMultipleIndexFilter___ExecuteFilter_d__4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ArrayMultipleIndexFilter___ExecuteFilter_d__4(__ArrayMultipleIndexFilter___ExecuteFilter_d__4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ArrayMultipleIndexFilter___ExecuteFilter_d__4()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::__ArrayMultipleIndexFilter___ExecuteFilter_d__4, 0x70>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq::JsonPath
// Type: Newtonsoft.Json.Linq.JsonPath::ArrayMultipleIndexFilter
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12011))
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::ArrayMultipleIndexFilter*
class CORDL_TYPE ArrayMultipleIndexFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
// Declarations
using _ExecuteFilter_d__4 = ::Newtonsoft::Json::Linq::JsonPath::__ArrayMultipleIndexFilter___ExecuteFilter_d__4;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Newtonsoft::Json::Linq::JsonPath::PathFilter)]{};

/// @brief Field <Indexes>k__BackingField offset 0x10
 __declspec(property(get=__get__Indexes_k__BackingField, put=__set__Indexes_k__BackingField)) ::System::Collections::Generic::List_1<int32_t>*  _Indexes_k__BackingField;

 __declspec(property(get=get_Indexes, put=set_Indexes)) ::System::Collections::Generic::List_1<int32_t>*  Indexes;

constexpr void __set__Indexes_k__BackingField(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* __get__Indexes_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> __get__Indexes_k__BackingField() const;

/// @brief Method get_Indexes addr 0x26ac1dc size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<int32_t>* get_Indexes() ;

/// @brief Method set_Indexes addr 0x26ac1e4 size 0x8 virtual false final false
inline void set_Indexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method ExecuteFilter addr 0x26ac1ec size 0x7c virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*  current, bool  errorWhenNoMatch) ;

static inline ::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter* New_ctor() ;

/// @brief Method .ctor addr 0x26ac2ac size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ArrayMultipleIndexFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayMultipleIndexFilter(ArrayMultipleIndexFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayMultipleIndexFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayMultipleIndexFilter(ArrayMultipleIndexFilter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArrayMultipleIndexFilter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter*, "Newtonsoft.Json.Linq.JsonPath", "ArrayMultipleIndexFilter");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::__ArrayMultipleIndexFilter___ExecuteFilter_d__4);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::__ArrayMultipleIndexFilter___ExecuteFilter_d__4*, "Newtonsoft.Json.Linq.JsonPath", "ArrayMultipleIndexFilter/<ExecuteFilter>d__4");
