#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTuple_2)
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
class IComparable;
}
namespace System {
class IValueTupleInternal;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
struct ValueTuple_2<T1,::UnityEngine::Vector3>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
struct ValueTuple_2<T1,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
struct ValueTuple_2<T1,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
struct ValueTuple_2<T1,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
struct ValueTuple_2<T1,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
struct ValueTuple_2<T1,int64_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
struct ValueTuple_2<bool,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
struct ValueTuple_2<int32_t,T2>;
}
namespace System {
template<>
struct ValueTuple_2<int32_t,bool>;
}
namespace System {
template<>
struct ValueTuple_2<int32_t,int32_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::ValueTuple_2);
// Type: System::ValueTuple`2
// Type: System::ValueTuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5314 })
// CS Name: ::System::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2<T1,::UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) ::UnityEngine::Vector3  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_2<T1,::UnityEngine::Vector3>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(T1  value) ;

constexpr T1& __get_Item1() ;

constexpr T1 const& __get_Item1() const;

constexpr void __set_Item2(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_Item2() ;

constexpr ::UnityEngine::Vector3 const& __get_Item2() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, ::UnityEngine::Vector3  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_2<T1,::UnityEngine::Vector3>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_2<T1,::UnityEngine::Vector3>  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr ValueTuple_2(T1  Item1, ::UnityEngine::Vector3  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 1631 })
// CS Name: ::System::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2<T1,int64_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) int64_t  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,int64_t>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_2<T1,int64_t>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,int64_t>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_2<T1,int64_t>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(T1  value) ;

constexpr T1& __get_Item1() ;

constexpr T1 const& __get_Item1() const;

constexpr void __set_Item2(int64_t  value) ;

constexpr int64_t& __get_Item2() ;

constexpr int64_t const& __get_Item2() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, int64_t  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_2<T1,int64_t>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_2<T1,int64_t>  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "int64_t", modifiers: "", def_value: None }]
constexpr ValueTuple_2(T1  Item1, int64_t  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 1629 })
// CS Name: ::System::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2<T1,int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) int32_t  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,int32_t>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_2<T1,int32_t>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,int32_t>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_2<T1,int32_t>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(T1  value) ;

constexpr T1& __get_Item1() ;

constexpr T1 const& __get_Item1() const;

constexpr void __set_Item2(int32_t  value) ;

constexpr int32_t& __get_Item2() ;

constexpr int32_t const& __get_Item2() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, int32_t  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_2<T1,int32_t>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_2<T1,int32_t>  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTuple_2(T1  Item1, int32_t  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 1624 })
// CS Name: ::System::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2<T1,bool> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) bool  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,bool>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_2<T1,bool>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,bool>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_2<T1,bool>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(T1  value) ;

constexpr T1& __get_Item1() ;

constexpr T1 const& __get_Item1() const;

constexpr void __set_Item2(bool  value) ;

constexpr bool& __get_Item2() ;

constexpr bool const& __get_Item2() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, bool  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_2<T1,bool>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_2<T1,bool>  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "bool", modifiers: "", def_value: None }]
constexpr ValueTuple_2(T1  Item1, bool  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 1614 })
// CS Name: ::System::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2<T1,T2> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,T2>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_2<T1,T2>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(T1  value) ;

constexpr T1& __get_Item1() ;

constexpr T1 const& __get_Item1() const;

constexpr void __set_Item2(T2  value) ;

constexpr T2& __get_Item2() ;

constexpr T2 const& __get_Item2() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_2<T1,T2>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_2<T1,T2>  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }]
constexpr ValueTuple_2(T1  Item1, T2  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 1610 })
// CS Name: ::System::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2<int32_t,T2> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) int32_t  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<int32_t,T2>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_2<int32_t,T2>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<int32_t,T2>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_2<int32_t,T2>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(int32_t  value) ;

constexpr int32_t& __get_Item1() ;

constexpr int32_t const& __get_Item1() const;

constexpr void __set_Item2(T2  value) ;

constexpr T2& __get_Item2() ;

constexpr T2 const& __get_Item2() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_2<int32_t,T2>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_2<int32_t,T2>  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }]
constexpr ValueTuple_2(int32_t  Item1, T2  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`2
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 1311 })
// CS Name: ::System::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2<int32_t,bool> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) int32_t  Item1;

/// @brief Field Item2 offset 0x4
 __declspec(property(get=__get_Item2, put=__set_Item2)) bool  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<int32_t,bool>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_2<int32_t,bool>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<int32_t,bool>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_2<int32_t,bool>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(int32_t  value) ;

constexpr int32_t& __get_Item1() ;

constexpr int32_t const& __get_Item1() const;

constexpr void __set_Item2(bool  value) ;

constexpr bool& __get_Item2() ;

constexpr bool const& __get_Item2() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  item1, bool  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_2<int32_t,bool>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_2<int32_t,bool>  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "bool", modifiers: "", def_value: None }]
constexpr ValueTuple_2(int32_t  Item1, bool  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 1006 })
// CS Name: ::System::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2<bool,T2> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) bool  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<bool,T2>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_2<bool,T2>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<bool,T2>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_2<bool,T2>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(bool  value) ;

constexpr bool& __get_Item1() ;

constexpr bool const& __get_Item1() const;

constexpr void __set_Item2(T2  value) ;

constexpr T2& __get_Item2() ;

constexpr T2 const& __get_Item2() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(bool  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_2<bool,T2>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_2<bool,T2>  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }]
constexpr ValueTuple_2(bool  Item1, T2  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`2
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 533 })
// CS Name: ::System::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2<int32_t,int32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) int32_t  Item1;

/// @brief Field Item2 offset 0x4
 __declspec(property(get=__get_Item2, put=__set_Item2)) int32_t  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<int32_t,int32_t>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_2<int32_t,int32_t>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<int32_t,int32_t>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_2<int32_t,int32_t>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(int32_t  value) ;

constexpr int32_t& __get_Item1() ;

constexpr int32_t const& __get_Item1() const;

constexpr void __set_Item2(int32_t  value) ;

constexpr int32_t& __get_Item2() ;

constexpr int32_t const& __get_Item2() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  item1, int32_t  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_2<int32_t,int32_t>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_2<int32_t,int32_t>  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTuple_2(int32_t  Item1, int32_t  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 81 })
// CS Name: ::System::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2<T1,T2> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_2<T1,T2>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_2<T1,T2>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_2<T1,T2>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(T1  value) ;

constexpr T1& __get_Item1() ;

constexpr T1 const& __get_Item1() const;

constexpr void __set_Item2(T2  value) ;

constexpr T2& __get_Item2() ;

constexpr T2 const& __get_Item2() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_2<T1,T2>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_2<T1,T2>  other) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method GetHashCodeCore addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetHashCodeCore(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IValueTupleInternal.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.IValueTupleInternal.ToStringEnd addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_IValueTupleInternal_ToStringEnd() ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }]
constexpr ValueTuple_2(T1  Item1, T2  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ValueTuple_2, "System", "ValueTuple`2");
