#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__LowLevelList_1_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LowLevelListWithIList_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
struct __LowLevelListWithIList_1__Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class LowLevelListWithIList_1;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class LowLevelListWithIList_1<T>;
}
namespace System::Collections::Generic {
template<typename T>
struct __LowLevelListWithIList_1__Enumerator;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __LowLevelListWithIList_1__Enumerator<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LowLevelListWithIList_1);
MARK_GEN_VAL_T(::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator);
// Type: ::Enumerator
// Type: System.Collections.Generic::LowLevelListWithIList`1
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3860))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3860), inst: 2 })
// CS Name: ::LowLevelListWithIList`1::Enumerator<T>
struct CORDL_TYPE __LowLevelListWithIList_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _list offset 0x0
 __declspec(property(get=__get__list, put=__set__list)) ::System::Collections::Generic::LowLevelListWithIList_1<T>*  _list;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _version offset 0xc
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _current offset 0x10
 __declspec(property(get=__get__current, put=__set__current)) T  _current;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__list(::System::Collections::Generic::LowLevelListWithIList_1<T>*  value) ;

constexpr ::System::Collections::Generic::LowLevelListWithIList_1<T>* __get__list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LowLevelListWithIList_1<T>*> __get__list() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__current(T  value) ;

constexpr T& __get__current() ;

constexpr T const& __get__current() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LowLevelListWithIList_1<T>*  list) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method MoveNextRare addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool MoveNextRare() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::LowLevelListWithIList_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: None }]
constexpr __LowLevelListWithIList_1__Enumerator(::System::Collections::Generic::LowLevelListWithIList_1<T>*  _list, int32_t  _index, int32_t  _version, T  _current) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LowLevelListWithIList_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LowLevelListWithIList_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LowLevelListWithIList`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3859)), TypeDefinitionIndex(TypeDefinitionIndex(3861)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3859), inst: 2653 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3861), inst: 2 })
// CS Name: ::System.Collections.Generic::LowLevelListWithIList`1<T>*
class CORDL_TYPE LowLevelListWithIList_1<T> : public ::System::Collections::Generic::LowLevelList_1<T> {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Collections::Generic::LowLevelList_1<T>)]{};

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
constexpr operator  ::System::Collections::Generic::IList_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

static inline ::System::Collections::Generic::LowLevelListWithIList_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::LowLevelListWithIList_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelListWithIList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LowLevelListWithIList_1(LowLevelListWithIList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelListWithIList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LowLevelListWithIList_1(LowLevelListWithIList_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LowLevelListWithIList_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LowLevelListWithIList_1, "System.Collections.Generic", "LowLevelListWithIList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator, "System.Collections.Generic", "LowLevelListWithIList`1/Enumerator");
