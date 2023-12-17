#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Tuple_2)
namespace System::Collections {
class IComparer;
}
namespace System {
struct Guid;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class ITupleInternal;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Tuple_2<::System::Guid,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
class Tuple_2<T1,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
class Tuple_2<T1,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class Tuple_2<T1,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
class Tuple_2<T1,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
class Tuple_2<T1,T2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Tuple_2<T1,float_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Tuple_2<float_t,T2>;
}
namespace System {
template<>
class Tuple_2<int32_t,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Tuple_2);
// Type: System::Tuple`2
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint16_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 7633 })
// CS Name: ::System::Tuple`2<T1,T2>*
class CORDL_TYPE Tuple_2<T1,T2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Item1 offset 0x10
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x18
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) T2  m_Item2;

 __declspec(property(get=get_Item1)) T1  Item1;

 __declspec(property(get=get_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() noexcept;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::ITupleInternal"
constexpr operator  ::System::ITupleInternal*() noexcept;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() noexcept;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(T2  value) ;

constexpr T2& __get_m_Item2() ;

constexpr T2 const& __get_m_Item2() const;

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T2 get_Item2() ;

static inline ::System::Tuple_2<T1,T2>* New_ctor(T1  item1, T2  item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple_2(Tuple_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple_2(Tuple_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tuple_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint8_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2490))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 6130 })
// CS Name: ::System::Tuple`2<T1,T2>*
class CORDL_TYPE Tuple_2<T1,T2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Item1 offset 0x10
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x18
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) T2  m_Item2;

 __declspec(property(get=get_Item1)) T1  Item1;

 __declspec(property(get=get_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() noexcept;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::ITupleInternal"
constexpr operator  ::System::ITupleInternal*() noexcept;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() noexcept;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(T2  value) ;

constexpr T2& __get_m_Item2() ;

constexpr T2 const& __get_m_Item2() const;

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T2 get_Item2() ;

static inline ::System::Tuple_2<T1,T2>* New_ctor(T1  item1, T2  item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple_2(Tuple_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple_2(Tuple_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tuple_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 1650 })
// CS Name: ::System::Tuple`2<T1,T2>*
class CORDL_TYPE Tuple_2<float_t,T2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Item1 offset 0x10
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) float_t  m_Item1;

/// @brief Field m_Item2 offset 0x18
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) T2  m_Item2;

 __declspec(property(get=get_Item1)) float_t  Item1;

 __declspec(property(get=get_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() noexcept;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::ITupleInternal"
constexpr operator  ::System::ITupleInternal*() noexcept;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() noexcept;

constexpr void __set_m_Item1(float_t  value) ;

constexpr float_t& __get_m_Item1() ;

constexpr float_t const& __get_m_Item1() const;

constexpr void __set_m_Item2(T2  value) ;

constexpr T2& __get_m_Item2() ;

constexpr T2 const& __get_m_Item2() const;

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T2 get_Item2() ;

static inline ::System::Tuple_2<float_t,T2>* New_ctor(float_t  item1, T2  item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(float_t  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple_2(Tuple_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple_2(Tuple_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tuple_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 1634 })
// CS Name: ::System::Tuple`2<T1,T2>*
class CORDL_TYPE Tuple_2<T1,float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Item1 offset 0x10
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x18
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) float_t  m_Item2;

 __declspec(property(get=get_Item1)) T1  Item1;

 __declspec(property(get=get_Item2)) float_t  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() noexcept;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::ITupleInternal"
constexpr operator  ::System::ITupleInternal*() noexcept;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() noexcept;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(float_t  value) ;

constexpr float_t& __get_m_Item2() ;

constexpr float_t const& __get_m_Item2() const;

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_Item2() ;

static inline ::System::Tuple_2<T1,float_t>* New_ctor(T1  item1, float_t  item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, float_t  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple_2(Tuple_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple_2(Tuple_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tuple_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 1614 })
// CS Name: ::System::Tuple`2<T1,T2>*
class CORDL_TYPE Tuple_2<T1,T2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Item1 offset 0x10
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x18
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) T2  m_Item2;

 __declspec(property(get=get_Item1)) T1  Item1;

 __declspec(property(get=get_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() noexcept;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::ITupleInternal"
constexpr operator  ::System::ITupleInternal*() noexcept;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() noexcept;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(T2  value) ;

constexpr T2& __get_m_Item2() ;

constexpr T2 const& __get_m_Item2() const;

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T2 get_Item2() ;

static inline ::System::Tuple_2<T1,T2>* New_ctor(T1  item1, T2  item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple_2(Tuple_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple_2(Tuple_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tuple_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 1613 })
// CS Name: ::System::Tuple`2<T1,T2>*
class CORDL_TYPE Tuple_2<T1,T2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Item1 offset 0x10
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x14
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) T2  m_Item2;

 __declspec(property(get=get_Item1)) T1  Item1;

 __declspec(property(get=get_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() noexcept;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::ITupleInternal"
constexpr operator  ::System::ITupleInternal*() noexcept;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() noexcept;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(T2  value) ;

constexpr T2& __get_m_Item2() ;

constexpr T2 const& __get_m_Item2() const;

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T2 get_Item2() ;

static inline ::System::Tuple_2<T1,T2>* New_ctor(T1  item1, T2  item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple_2(Tuple_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple_2(Tuple_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tuple_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 1608 })
// CS Name: ::System::Tuple`2<T1,T2>*
class CORDL_TYPE Tuple_2<::System::Guid,T2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_Item1 offset 0x10
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) ::System::Guid  m_Item1;

/// @brief Field m_Item2 offset 0x20
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) T2  m_Item2;

 __declspec(property(get=get_Item1)) ::System::Guid  Item1;

 __declspec(property(get=get_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() noexcept;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::ITupleInternal"
constexpr operator  ::System::ITupleInternal*() noexcept;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() noexcept;

constexpr void __set_m_Item1(::System::Guid  value) ;

constexpr ::System::Guid& __get_m_Item1() ;

constexpr ::System::Guid const& __get_m_Item1() const;

constexpr void __set_m_Item2(T2  value) ;

constexpr T2& __get_m_Item2() ;

constexpr T2 const& __get_m_Item2() const;

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T2 get_Item2() ;

static inline ::System::Tuple_2<::System::Guid,T2>* New_ctor(::System::Guid  item1, T2  item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple_2(Tuple_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple_2(Tuple_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tuple_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 533 })
// CS Name: ::System::Tuple`2<T1,T2>*
class CORDL_TYPE Tuple_2<int32_t,int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Item1 offset 0x10
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) int32_t  m_Item1;

/// @brief Field m_Item2 offset 0x14
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) int32_t  m_Item2;

 __declspec(property(get=get_Item1)) int32_t  Item1;

 __declspec(property(get=get_Item2)) int32_t  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() noexcept;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::ITupleInternal"
constexpr operator  ::System::ITupleInternal*() noexcept;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() noexcept;

constexpr void __set_m_Item1(int32_t  value) ;

constexpr int32_t& __get_m_Item1() ;

constexpr int32_t const& __get_m_Item1() const;

constexpr void __set_m_Item2(int32_t  value) ;

constexpr int32_t& __get_m_Item2() ;

constexpr int32_t const& __get_m_Item2() const;

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Item2() ;

static inline ::System::Tuple_2<int32_t,int32_t>* New_ctor(int32_t  item1, int32_t  item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  item1, int32_t  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple_2(Tuple_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple_2(Tuple_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tuple_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Tuple`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2490)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2490), inst: 81 })
// CS Name: ::System::Tuple`2<T1,T2>*
class CORDL_TYPE Tuple_2<T1,T2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Item1 offset 0x10
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x18
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) T2  m_Item2;

 __declspec(property(get=get_Item1)) T1  Item1;

 __declspec(property(get=get_Item2)) T2  Item2;

 __declspec(property(get=System_Runtime_CompilerServices_ITuple_get_Length)) int32_t  System_Runtime_CompilerServices_ITuple_Length;

/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr operator  ::System::Collections::IStructuralEquatable*() noexcept;

/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr operator  ::System::Collections::IStructuralComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::ITupleInternal"
constexpr operator  ::System::ITupleInternal*() noexcept;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
constexpr operator  ::System::Runtime::CompilerServices::ITuple*() noexcept;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(T2  value) ;

constexpr T2& __get_m_Item2() ;

constexpr T2 const& __get_m_Item2() const;

/// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_Item1() ;

/// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T2 get_Item2() ;

static inline ::System::Tuple_2<T1,T2>* New_ctor(T1  item1, T2  item2) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb) ;

/// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Runtime_CompilerServices_ITuple_get_Length() ;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple_2(Tuple_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple_2(Tuple_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tuple_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Tuple_2, "System", "Tuple`2");
