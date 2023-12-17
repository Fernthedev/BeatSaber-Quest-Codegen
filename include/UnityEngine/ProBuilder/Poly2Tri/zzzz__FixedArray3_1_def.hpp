#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedArray3_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
template<typename T>
class __FixedArray3_1___Enumerate_d__10;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
template<typename T>
class __FixedArray3_1___Enumerate_d__10;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
template<::il2cpp_utils::il2cpp_reference_type T>
class __FixedArray3_1___Enumerate_d__10<T>;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
template<typename T>
struct FixedArray3_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
template<::il2cpp_utils::il2cpp_reference_type T>
struct FixedArray3_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10);
MARK_GEN_VAL_T(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1);
// Type: ::<Enumerate>d__10
// Type: UnityEngine.ProBuilder.Poly2Tri::FixedArray3`1
// Type: ::<Enumerate>d__10
namespace UnityEngine::ProBuilder::Poly2Tri {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15348)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15348), inst: 2 })
// CS Name: ::FixedArray3`1::<Enumerate>d__10<T>*
class CORDL_TYPE __FixedArray3_1___Enumerate_d__10<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) T  __2__current;

/// @brief Field <>l__initialThreadId offset 0x20
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>  __4__this;

/// @brief Field <>3__<>4__this offset 0x40
 __declspec(property(get=__get___3____4__this, put=__set___3____4__this)) ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>  __3____4__this;

/// @brief Field <i>5__2 offset 0x58
 __declspec(property(get=__get__i_5__2, put=__set__i_5__2)) int32_t  _i_5__2;

 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(T  value) ;

constexpr T& __get___2__current() ;

constexpr T const& __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set___4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>& __get___4__this() ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> const& __get___4__this() const;

constexpr void __set___3____4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>& __get___3____4__this() ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> const& __get___3____4__this() const;

constexpr void __set__i_5__2(int32_t  value) ;

constexpr int32_t& __get__i_5__2() ;

constexpr int32_t const& __get__i_5__2() const;

static inline ::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__FixedArray3_1___Enumerate_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FixedArray3_1___Enumerate_d__10(__FixedArray3_1___Enumerate_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FixedArray3_1___Enumerate_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FixedArray3_1___Enumerate_d__10(__FixedArray3_1___Enumerate_d__10 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FixedArray3_1___Enumerate_d__10()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
// Type: UnityEngine.ProBuilder.Poly2Tri::FixedArray3`1
namespace UnityEngine::ProBuilder::Poly2Tri {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15349))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15349), inst: 2 })
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::FixedArray3`1<T>
struct CORDL_TYPE FixedArray3_1<T> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using _Enumerate_d__10 = ::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _0 offset 0x0
 __declspec(property(get=__get__0, put=__set__0)) T  _0;

/// @brief Field _1 offset 0x8
 __declspec(property(get=__get__1, put=__set__1)) T  _1;

/// @brief Field _2 offset 0x10
 __declspec(property(get=__get__2, put=__set__2)) T  _2;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set__0(T  value) ;

constexpr T& __get__0() ;

constexpr T const& __get__0() const;

constexpr void __set__1(T  value) ;

constexpr T& __get__1() ;

constexpr T const& __get__1() const;

constexpr void __set__2(T  value) ;

constexpr T& __get__2() ;

constexpr T const& __get__2() const;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, T  value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(T  value) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t IndexOf(T  value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear(T  value) ;

/// @brief Method Enumerate addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<T>* Enumerate() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "_0", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_1", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_2", ty: "T", modifiers: "", def_value: None }]
constexpr FixedArray3_1(T  _0, T  _1, T  _2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FixedArray3_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FixedArray3_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10, "UnityEngine.ProBuilder.Poly2Tri", "FixedArray3`1/<Enumerate>d__10");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1, "UnityEngine.ProBuilder.Poly2Tri", "FixedArray3`1");
