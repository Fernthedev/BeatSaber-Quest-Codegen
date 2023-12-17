#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTuple_5)
namespace System {
class IValueTupleInternal;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System {
class Object;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IStructuralEquatable;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace System {
template<>
struct ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4,::il2cpp_utils::il2cpp_reference_type T5>
struct ValueTuple_5<T1,T2,T3,T4,T5>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T4,::il2cpp_utils::il2cpp_reference_type T5>
struct ValueTuple_5<T1,bool,bool,T4,T5>;
}
// Write type traits
MARK_GEN_VAL_T(::System::ValueTuple_5);
// Type: System::ValueTuple`5
// Type: System::ValueTuple`5
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4,::il2cpp_utils::il2cpp_reference_type T5>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2510))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2510), inst: 6125 })
// CS Name: ::System::ValueTuple`5<T1,T2,T3,T4,T5>
struct CORDL_TYPE ValueTuple_5<T1,T2,T3,T4,T5> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

/// @brief Field Item3 offset 0x10
 __declspec(property(get=__get_Item3, put=__set_Item3)) T3  Item3;

/// @brief Field Item4 offset 0x18
 __declspec(property(get=__get_Item4, put=__set_Item4)) T4  Item4;

/// @brief Field Item5 offset 0x20
 __declspec(property(get=__get_Item5, put=__set_Item5)) T5  Item5;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>*() ;

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

constexpr void __set_Item3(T3  value) ;

constexpr T3& __get_Item3() ;

constexpr T3 const& __get_Item3() const;

constexpr void __set_Item4(T4  value) ;

constexpr T4& __get_Item4() ;

constexpr T4 const& __get_Item4() const;

constexpr void __set_Item5(T5  value) ;

constexpr T5& __get_Item5() ;

constexpr T5 const& __get_Item5() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2, T3  item3, T4  item4, T5  item5) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_5<T1,T2,T3,T4,T5>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_5<T1,T2,T3,T4,T5>  other) ;

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

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: None }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: None }, CppParam { name: "Item5", ty: "T5", modifiers: "", def_value: None }]
constexpr ValueTuple_5(T1  Item1, T2  Item2, T3  Item3, T4  Item4, T5  Item5) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_5(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_5()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`5
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T4,::il2cpp_utils::il2cpp_reference_type T5>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2510))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2510), inst: 5339 })
// CS Name: ::System::ValueTuple`5<T1,T2,T3,T4,T5>
struct CORDL_TYPE ValueTuple_5<T1,bool,bool,T4,T5> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) bool  Item2;

/// @brief Field Item3 offset 0x9
 __declspec(property(get=__get_Item3, put=__set_Item3)) bool  Item3;

/// @brief Field Item4 offset 0x10
 __declspec(property(get=__get_Item4, put=__set_Item4)) T4  Item4;

/// @brief Field Item5 offset 0x18
 __declspec(property(get=__get_Item5, put=__set_Item5)) T5  Item5;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_5<T1,bool,bool,T4,T5>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_5<T1,bool,bool,T4,T5>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_5<T1,bool,bool,T4,T5>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_5<T1,bool,bool,T4,T5>>*() ;

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

constexpr void __set_Item3(bool  value) ;

constexpr bool& __get_Item3() ;

constexpr bool const& __get_Item3() const;

constexpr void __set_Item4(T4  value) ;

constexpr T4& __get_Item4() ;

constexpr T4 const& __get_Item4() const;

constexpr void __set_Item5(T5  value) ;

constexpr T5& __get_Item5() ;

constexpr T5 const& __get_Item5() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, bool  item2, bool  item3, T4  item4, T5  item5) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_5<T1,bool,bool,T4,T5>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_5<T1,bool,bool,T4,T5>  other) ;

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

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: None }, CppParam { name: "Item5", ty: "T5", modifiers: "", def_value: None }]
constexpr ValueTuple_5(T1  Item1, bool  Item2, bool  Item3, T4  Item4, T5  Item5) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_5(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_5()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`5
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2510))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2510), inst: 5338 })
// CS Name: ::System::ValueTuple`5<T1,T2,T3,T4,T5>
struct CORDL_TYPE ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) ::cordl_internals::intptr_t  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) int32_t  Item2;

/// @brief Field Item3 offset 0x10
 __declspec(property(get=__get_Item3, put=__set_Item3)) ::cordl_internals::intptr_t  Item3;

/// @brief Field Item4 offset 0x18
 __declspec(property(get=__get_Item4, put=__set_Item4)) int32_t  Item4;

/// @brief Field Item5 offset 0x1c
 __declspec(property(get=__get_Item5, put=__set_Item5)) bool  Item5;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_Item1() ;

constexpr ::cordl_internals::intptr_t const& __get_Item1() const;

constexpr void __set_Item2(int32_t  value) ;

constexpr int32_t& __get_Item2() ;

constexpr int32_t const& __get_Item2() const;

constexpr void __set_Item3(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_Item3() ;

constexpr ::cordl_internals::intptr_t const& __get_Item3() const;

constexpr void __set_Item4(int32_t  value) ;

constexpr int32_t& __get_Item4() ;

constexpr int32_t const& __get_Item4() const;

constexpr void __set_Item5(bool  value) ;

constexpr bool& __get_Item5() ;

constexpr bool const& __get_Item5() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::intptr_t  item1, int32_t  item2, ::cordl_internals::intptr_t  item3, int32_t  item4, bool  item5) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>  other) ;

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

// Ctor Parameters [CppParam { name: "Item1", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "Item4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item5", ty: "bool", modifiers: "", def_value: None }]
constexpr ValueTuple_5(::cordl_internals::intptr_t  Item1, int32_t  Item2, ::cordl_internals::intptr_t  Item3, int32_t  Item4, bool  Item5) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_5(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_5()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ValueTuple_5, "System", "ValueTuple`5");
