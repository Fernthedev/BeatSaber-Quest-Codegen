#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Set_1)
namespace System::Linq {
template<typename TElement>
struct __Set_1__Slot;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class Set_1;
}
namespace System::Linq {
template<>
class Set_1<::UnityEngine::ProBuilder::Edge>;
}
namespace System::Linq {
template<>
class Set_1<::UnityEngine::ProBuilder::EdgeLookup>;
}
namespace System::Linq {
template<>
class Set_1<::UnityEngine::SceneManagement::Scene>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class Set_1<TElement>;
}
namespace System::Linq {
template<>
class Set_1<char16_t>;
}
namespace System::Linq {
template<>
class Set_1<int32_t>;
}
namespace System::Linq {
template<typename TElement>
struct __Set_1__Slot;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Set_1);
MARK_GEN_VAL_T(::System::Linq::__Set_1__Slot);
// Type: ::Slot
namespace System::Linq {
// cpp template
template<typename TElement>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14287))
// CS Name: ::Set`1::Slot<TElement>
struct CORDL_TYPE __Set_1__Slot : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hashCode offset 0x0
 __declspec(property(get=__get_hashCode, put=__set_hashCode)) int32_t  hashCode;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) TElement  value;

/// @brief Field next offset 0x10
 __declspec(property(get=__get_next, put=__set_next)) int32_t  next;

constexpr void __set_hashCode(int32_t  value) ;

constexpr int32_t& __get_hashCode() ;

constexpr int32_t const& __get_hashCode() const;

constexpr void __set_value(TElement  value) ;

constexpr TElement& __get_value() ;

constexpr TElement const& __get_value() const;

constexpr void __set_next(int32_t  value) ;

constexpr int32_t& __get_next() ;

constexpr int32_t const& __get_next() const;

// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TElement", modifiers: "", def_value: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Set_1__Slot(int32_t  hashCode, TElement  value, int32_t  next) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Set_1__Slot(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Set_1__Slot()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14288))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14288), inst: 3121 })
// CS Name: ::System.Linq::Set`1<TElement>*
class CORDL_TYPE Set_1<::UnityEngine::SceneManagement::Scene> : public ::System::Object {
public:
// Declarations
using Slot = ::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field buckets offset 0x10
 __declspec(property(get=__get_buckets, put=__set_buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  buckets;

/// @brief Field slots offset 0x18
 __declspec(property(get=__get_slots, put=__set_slots)) ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*>  slots;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field freeList offset 0x24
 __declspec(property(get=__get_freeList, put=__set_freeList)) int32_t  freeList;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*  comparer;

constexpr void __set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_buckets() const;

constexpr void __set_slots(::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*>  value) ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*>& __get_slots() ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::SceneManagement::Scene>>*> const& __get_slots() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_freeList(int32_t  value) ;

constexpr int32_t& __get_freeList() ;

constexpr int32_t const& __get_freeList() const;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*> __get_comparer() const;

static inline ::System::Linq::Set_1<::UnityEngine::SceneManagement::Scene>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*  comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Add(::UnityEngine::SceneManagement::Scene  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Remove(::UnityEngine::SceneManagement::Scene  value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Find(::UnityEngine::SceneManagement::Scene  value, bool  add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(::UnityEngine::SceneManagement::Scene  value) ;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Set_1(Set_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Set_1(Set_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Set_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14288)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14288), inst: 2593 })
// CS Name: ::System.Linq::Set`1<TElement>*
class CORDL_TYPE Set_1<::UnityEngine::ProBuilder::EdgeLookup> : public ::System::Object {
public:
// Declarations
using Slot = ::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field buckets offset 0x10
 __declspec(property(get=__get_buckets, put=__set_buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  buckets;

/// @brief Field slots offset 0x18
 __declspec(property(get=__get_slots, put=__set_slots)) ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>  slots;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field freeList offset 0x24
 __declspec(property(get=__get_freeList, put=__set_freeList)) int32_t  freeList;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer;

constexpr void __set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_buckets() const;

constexpr void __set_slots(::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>  value) ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*>& __get_slots() ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::EdgeLookup>>*> const& __get_slots() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_freeList(int32_t  value) ;

constexpr int32_t& __get_freeList() ;

constexpr int32_t const& __get_freeList() const;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*> __get_comparer() const;

static inline ::System::Linq::Set_1<::UnityEngine::ProBuilder::EdgeLookup>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::EdgeLookup>*  comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Add(::UnityEngine::ProBuilder::EdgeLookup  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Remove(::UnityEngine::ProBuilder::EdgeLookup  value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Find(::UnityEngine::ProBuilder::EdgeLookup  value, bool  add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(::UnityEngine::ProBuilder::EdgeLookup  value) ;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Set_1(Set_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Set_1(Set_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Set_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14288))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14288), inst: 2592 })
// CS Name: ::System.Linq::Set`1<TElement>*
class CORDL_TYPE Set_1<::UnityEngine::ProBuilder::Edge> : public ::System::Object {
public:
// Declarations
using Slot = ::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field buckets offset 0x10
 __declspec(property(get=__get_buckets, put=__set_buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  buckets;

/// @brief Field slots offset 0x18
 __declspec(property(get=__get_slots, put=__set_slots)) ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*>  slots;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field freeList offset 0x24
 __declspec(property(get=__get_freeList, put=__set_freeList)) int32_t  freeList;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer;

constexpr void __set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_buckets() const;

constexpr void __set_slots(::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*>  value) ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*>& __get_slots() ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>,::Array<::System::Linq::__Set_1__Slot<::UnityEngine::ProBuilder::Edge>>*> const& __get_slots() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_freeList(int32_t  value) ;

constexpr int32_t& __get_freeList() ;

constexpr int32_t const& __get_freeList() const;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*> __get_comparer() const;

static inline ::System::Linq::Set_1<::UnityEngine::ProBuilder::Edge>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::ProBuilder::Edge>*  comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Add(::UnityEngine::ProBuilder::Edge  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Remove(::UnityEngine::ProBuilder::Edge  value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Find(::UnityEngine::ProBuilder::Edge  value, bool  add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(::UnityEngine::ProBuilder::Edge  value) ;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Set_1(Set_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Set_1(Set_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Set_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14288)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14288), inst: 292 })
// CS Name: ::System.Linq::Set`1<TElement>*
class CORDL_TYPE Set_1<char16_t> : public ::System::Object {
public:
// Declarations
using Slot = ::System::Linq::__Set_1__Slot<char16_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field buckets offset 0x10
 __declspec(property(get=__get_buckets, put=__set_buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  buckets;

/// @brief Field slots offset 0x18
 __declspec(property(get=__get_slots, put=__set_slots)) ::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*>  slots;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field freeList offset 0x24
 __declspec(property(get=__get_freeList, put=__set_freeList)) int32_t  freeList;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<char16_t>*  comparer;

constexpr void __set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_buckets() const;

constexpr void __set_slots(::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*>  value) ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*>& __get_slots() ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<char16_t>,::Array<::System::Linq::__Set_1__Slot<char16_t>>*> const& __get_slots() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_freeList(int32_t  value) ;

constexpr int32_t& __get_freeList() ;

constexpr int32_t const& __get_freeList() const;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<char16_t>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<char16_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<char16_t>*> __get_comparer() const;

static inline ::System::Linq::Set_1<char16_t>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<char16_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<char16_t>*  comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Add(char16_t  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Remove(char16_t  value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Find(char16_t  value, bool  add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(char16_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Set_1(Set_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Set_1(Set_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Set_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14288))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14288), inst: 98 })
// CS Name: ::System.Linq::Set`1<TElement>*
class CORDL_TYPE Set_1<int32_t> : public ::System::Object {
public:
// Declarations
using Slot = ::System::Linq::__Set_1__Slot<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field buckets offset 0x10
 __declspec(property(get=__get_buckets, put=__set_buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  buckets;

/// @brief Field slots offset 0x18
 __declspec(property(get=__get_slots, put=__set_slots)) ::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*>  slots;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field freeList offset 0x24
 __declspec(property(get=__get_freeList, put=__set_freeList)) int32_t  freeList;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer;

constexpr void __set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_buckets() const;

constexpr void __set_slots(::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*>  value) ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*>& __get_slots() ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<int32_t>,::Array<::System::Linq::__Set_1__Slot<int32_t>>*> const& __get_slots() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_freeList(int32_t  value) ;

constexpr int32_t& __get_freeList() ;

constexpr int32_t const& __get_freeList() const;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<int32_t>*> __get_comparer() const;

static inline ::System::Linq::Set_1<int32_t>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Add(int32_t  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Remove(int32_t  value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Find(int32_t  value, bool  add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Set_1(Set_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Set_1(Set_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Set_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Set`1
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14288))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14288), inst: 2 })
// CS Name: ::System.Linq::Set`1<TElement>*
class CORDL_TYPE Set_1<TElement> : public ::System::Object {
public:
// Declarations
using Slot = ::System::Linq::__Set_1__Slot<TElement>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field buckets offset 0x10
 __declspec(property(get=__get_buckets, put=__set_buckets)) ::ArrayW<int32_t,::Array<int32_t>*>  buckets;

/// @brief Field slots offset 0x18
 __declspec(property(get=__get_slots, put=__set_slots)) ::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*>  slots;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field freeList offset 0x24
 __declspec(property(get=__get_freeList, put=__set_freeList)) int32_t  freeList;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TElement>*  comparer;

constexpr void __set_buckets(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_buckets() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_buckets() const;

constexpr void __set_slots(::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*>  value) ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*>& __get_slots() ;

constexpr ::ArrayW<::System::Linq::__Set_1__Slot<TElement>,::Array<::System::Linq::__Set_1__Slot<TElement>>*> const& __get_slots() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_freeList(int32_t  value) ;

constexpr int32_t& __get_freeList() ;

constexpr int32_t const& __get_freeList() const;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<TElement>*  value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TElement>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TElement>*> __get_comparer() const;

static inline ::System::Linq::Set_1<TElement>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TElement>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TElement>*  comparer) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Add(TElement  value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Remove(TElement  value) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Find(TElement  value, bool  add) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Resize() ;

/// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t InternalGetHashCode(TElement  value) ;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Set_1(Set_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Set_1(Set_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Set_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Set_1, "System.Linq", "Set`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Linq::__Set_1__Slot, "System.Linq", "Set`1/Slot");
