#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTuple_3)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IStructuralEquatable;
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
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<>
struct ValueTuple_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
struct ValueTuple_3<T1,T2,T3>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2,::il2cpp_utils::il2cpp_reference_type T3>
struct ValueTuple_3<T1,T2,T3>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
struct ValueTuple_3<T1,T2,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
struct ValueTuple_3<T1,int32_t,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
struct ValueTuple_3<int32_t,T2,int32_t>;
}
namespace System {
template<>
struct ValueTuple_3<int32_t,int32_t,int32_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::ValueTuple_3);
// Type: System::ValueTuple`3
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2508))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2508), inst: 5331 })
// CS Name: ::System::ValueTuple`3<T1,T2,T3>
struct CORDL_TYPE ValueTuple_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose> : public ::bs_hook::ValueTypeWrapper<0x54> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x54};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) ::UnityEngine::Pose  Item1;

/// @brief Field Item2 offset 0x1c
 __declspec(property(get=__get_Item2, put=__set_Item2)) ::UnityEngine::Pose  Item2;

/// @brief Field Item3 offset 0x38
 __declspec(property(get=__get_Item3, put=__set_Item3)) ::UnityEngine::Pose  Item3;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>>*() ;

/// @brief Convert operator to "::System::IValueTupleInternal"
constexpr operator  ::System::IValueTupleInternal*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() ;

constexpr void __set_Item1(::UnityEngine::Pose  value) ;

constexpr ::UnityEngine::Pose& __get_Item1() ;

constexpr ::UnityEngine::Pose const& __get_Item1() const;

constexpr void __set_Item2(::UnityEngine::Pose  value) ;

constexpr ::UnityEngine::Pose& __get_Item2() ;

constexpr ::UnityEngine::Pose const& __get_Item2() const;

constexpr void __set_Item3(::UnityEngine::Pose  value) ;

constexpr ::UnityEngine::Pose& __get_Item3() ;

constexpr ::UnityEngine::Pose const& __get_Item3() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Pose  item1, ::UnityEngine::Pose  item2, ::UnityEngine::Pose  item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>  other) ;

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

// Ctor Parameters [CppParam { name: "Item1", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }]
constexpr ValueTuple_3(::UnityEngine::Pose  Item1, ::UnityEngine::Pose  Item2, ::UnityEngine::Pose  Item3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x54>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_3()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2508))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2508), inst: 5330 })
// CS Name: ::System::ValueTuple`3<T1,T2,T3>
struct CORDL_TYPE ValueTuple_3<T1,T2,T3> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

/// @brief Field Item3 offset 0x10
 __declspec(property(get=__get_Item3, put=__set_Item3)) T3  Item3;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_3<T1,T2,T3>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_3<T1,T2,T3>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_3<T1,T2,T3>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_3<T1,T2,T3>>*() ;

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

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2, T3  item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_3<T1,T2,T3>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_3<T1,T2,T3>  other) ;

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

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: None }]
constexpr ValueTuple_3(T1  Item1, T2  Item2, T3  Item3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_3()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2508))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2508), inst: 5329 })
// CS Name: ::System::ValueTuple`3<T1,T2,T3>
struct CORDL_TYPE ValueTuple_3<T1,T2,int32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

/// @brief Field Item3 offset 0x10
 __declspec(property(get=__get_Item3, put=__set_Item3)) int32_t  Item3;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_3<T1,T2,int32_t>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_3<T1,T2,int32_t>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_3<T1,T2,int32_t>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_3<T1,T2,int32_t>>*() ;

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

constexpr void __set_Item3(int32_t  value) ;

constexpr int32_t& __get_Item3() ;

constexpr int32_t const& __get_Item3() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2, int32_t  item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_3<T1,T2,int32_t>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_3<T1,T2,int32_t>  other) ;

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

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTuple_3(T1  Item1, T2  Item2, int32_t  Item3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_3()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2508))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2508), inst: 5328 })
// CS Name: ::System::ValueTuple`3<T1,T2,T3>
struct CORDL_TYPE ValueTuple_3<T1,int32_t,int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) int32_t  Item2;

/// @brief Field Item3 offset 0xc
 __declspec(property(get=__get_Item3, put=__set_Item3)) int32_t  Item3;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_3<T1,int32_t,int32_t>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_3<T1,int32_t,int32_t>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_3<T1,int32_t,int32_t>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_3<T1,int32_t,int32_t>>*() ;

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

constexpr void __set_Item3(int32_t  value) ;

constexpr int32_t& __get_Item3() ;

constexpr int32_t const& __get_Item3() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, int32_t  item2, int32_t  item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_3<T1,int32_t,int32_t>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_3<T1,int32_t,int32_t>  other) ;

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

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTuple_3(T1  Item1, int32_t  Item2, int32_t  Item3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_3()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2508))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2508), inst: 5326 })
// CS Name: ::System::ValueTuple`3<T1,T2,T3>
struct CORDL_TYPE ValueTuple_3<T1,T2,T3> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x4
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

/// @brief Field Item3 offset 0x8
 __declspec(property(get=__get_Item3, put=__set_Item3)) T3  Item3;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_3<T1,T2,T3>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_3<T1,T2,T3>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_3<T1,T2,T3>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_3<T1,T2,T3>>*() ;

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

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2, T3  item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_3<T1,T2,T3>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_3<T1,T2,T3>  other) ;

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

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: None }]
constexpr ValueTuple_3(T1  Item1, T2  Item2, T3  Item3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_3()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2508))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2508), inst: 5324 })
// CS Name: ::System::ValueTuple`3<T1,T2,T3>
struct CORDL_TYPE ValueTuple_3<int32_t,T2,int32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) int32_t  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

/// @brief Field Item3 offset 0x10
 __declspec(property(get=__get_Item3, put=__set_Item3)) int32_t  Item3;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_3<int32_t,T2,int32_t>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_3<int32_t,T2,int32_t>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_3<int32_t,T2,int32_t>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_3<int32_t,T2,int32_t>>*() ;

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

constexpr void __set_Item3(int32_t  value) ;

constexpr int32_t& __get_Item3() ;

constexpr int32_t const& __get_Item3() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  item1, T2  item2, int32_t  item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_3<int32_t,T2,int32_t>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_3<int32_t,T2,int32_t>  other) ;

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

// Ctor Parameters [CppParam { name: "Item1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTuple_3(int32_t  Item1, T2  Item2, int32_t  Item3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_3()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ValueTuple`3
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2508))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2508), inst: 5323 })
// CS Name: ::System::ValueTuple`3<T1,T2,T3>
struct CORDL_TYPE ValueTuple_3<int32_t,int32_t,int32_t> : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) int32_t  Item1;

/// @brief Field Item2 offset 0x4
 __declspec(property(get=__get_Item2, put=__set_Item2)) int32_t  Item2;

/// @brief Field Item3 offset 0x8
 __declspec(property(get=__get_Item3, put=__set_Item3)) int32_t  Item3;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
constexpr operator  ::System::IEquatable_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*() ;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() ;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
constexpr operator  ::System::IComparable_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*() ;

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

constexpr void __set_Item3(int32_t  value) ;

constexpr int32_t& __get_Item3() ;

constexpr int32_t const& __get_Item3() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  item1, int32_t  item2, int32_t  item3) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::ValueTuple_3<int32_t,int32_t,int32_t>  other) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  other) ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t CompareTo(::System::ValueTuple_3<int32_t,int32_t,int32_t>  other) ;

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

// Ctor Parameters [CppParam { name: "Item1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueTuple_3(int32_t  Item1, int32_t  Item2, int32_t  Item3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_3()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ValueTuple_3, "System", "ValueTuple`3");
