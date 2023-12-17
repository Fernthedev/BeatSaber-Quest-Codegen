#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/zzzz__OrderedEnumerable_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OrderedEnumerable_2)
namespace System::Linq {
template<typename TElement>
class OrderedEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Linq {
template<typename TElement>
class EnumerableSorter_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
class Object;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace Zenject {
struct __DisposableManager__DisposableInfo;
}
namespace Zenject {
struct __PoolableManager__PoolableInfo;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement,typename TKey>
class OrderedEnumerable_2;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
class OrderedEnumerable_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
class OrderedEnumerable_2<TElement,TKey>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class OrderedEnumerable_2<TElement,float_t>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class OrderedEnumerable_2<TElement,int32_t>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class OrderedEnumerable_2<TElement,uint32_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<float_t,float_t>;
}
namespace System::Linq {
template<>
class OrderedEnumerable_2<int32_t,float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::OrderedEnumerable_2);
// Type: System.Linq::OrderedEnumerable`2
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 }), TypeDefinitionIndex(TypeDefinitionIndex(14292)), TypeDefinitionIndex(TypeDefinitionIndex(14291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 7385 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t> : public ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<int32_t>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  value) ;

constexpr ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  source, ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  source, ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14292)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 }), TypeDefinitionIndex(TypeDefinitionIndex(14291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 2462 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<::Zenject::__PoolableManager__PoolableInfo,int32_t> : public ::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<int32_t>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  value) ;

constexpr ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*  source, ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*  source, ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 }), TypeDefinitionIndex(TypeDefinitionIndex(14292)), TypeDefinitionIndex(TypeDefinitionIndex(14291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 2441 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<::Zenject::__DisposableManager__DisposableInfo,int32_t> : public ::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<int32_t>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  value) ;

constexpr ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*  source, ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*  source, ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14291)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 }), TypeDefinitionIndex(TypeDefinitionIndex(14292))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 2305 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> : public ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  value) ;

constexpr ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<uint32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<uint32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  source, ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  source, ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14292)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 }), TypeDefinitionIndex(TypeDefinitionIndex(14291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 2279 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> : public ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<int32_t>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  value) ;

constexpr ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  source, ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  source, ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14292)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 }), TypeDefinitionIndex(TypeDefinitionIndex(14291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 1638 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<TElement,uint32_t> : public ::System::Linq::OrderedEnumerable_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<TElement>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<TElement>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TElement,uint32_t>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<TElement>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<TElement>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<TElement>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<TElement,uint32_t>*  value) ;

constexpr ::System::Func_2<TElement,uint32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,uint32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<uint32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<uint32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<TElement,uint32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<TElement>*  source, ::System::Func_2<TElement,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<TElement>*  source, ::System::Func_2<TElement,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 }), TypeDefinitionIndex(TypeDefinitionIndex(14291)), TypeDefinitionIndex(TypeDefinitionIndex(14292))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 1634 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<TElement,float_t> : public ::System::Linq::OrderedEnumerable_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<TElement>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<TElement>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TElement,float_t>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<float_t>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<TElement>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<TElement>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<TElement>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<TElement,float_t>*  value) ;

constexpr ::System::Func_2<TElement,float_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,float_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<float_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<float_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<float_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<TElement,float_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<TElement>*  source, ::System::Func_2<TElement,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<TElement>*  source, ::System::Func_2<TElement,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 }), TypeDefinitionIndex(TypeDefinitionIndex(14292)), TypeDefinitionIndex(TypeDefinitionIndex(14291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 1629 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<TElement,int32_t> : public ::System::Linq::OrderedEnumerable_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<TElement>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<TElement>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TElement,int32_t>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<int32_t>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<TElement>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<TElement>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<TElement>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<TElement,int32_t>*  value) ;

constexpr ::System::Func_2<TElement,int32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,int32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<TElement,int32_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<TElement>*  source, ::System::Func_2<TElement,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<TElement>*  source, ::System::Func_2<TElement,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14292)), TypeDefinitionIndex(TypeDefinitionIndex(14291)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 582 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<float_t,float_t> : public ::System::Linq::OrderedEnumerable_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<float_t>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<float_t>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<float_t,float_t>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<float_t>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<float_t>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<float_t>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<float_t>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<float_t,float_t>*  value) ;

constexpr ::System::Func_2<float_t,float_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t,float_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<float_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<float_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<float_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<float_t,float_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<float_t>*  source, ::System::Func_2<float_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<float_t>*  source, ::System::Func_2<float_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<float_t>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<float_t>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14292)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 }), TypeDefinitionIndex(TypeDefinitionIndex(14291))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 534 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<int32_t,float_t> : public ::System::Linq::OrderedEnumerable_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<int32_t>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<int32_t>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<int32_t,float_t>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<float_t>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<int32_t>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<int32_t>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<int32_t>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<int32_t,float_t>*  value) ;

constexpr ::System::Func_2<int32_t,float_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t,float_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<float_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<float_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<float_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<int32_t,float_t>* New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>*  source, ::System::Func_2<int32_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t>*  source, ::System::Func_2<int32_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<int32_t>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<int32_t>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::OrderedEnumerable`2
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14291), inst: 1678 }), TypeDefinitionIndex(TypeDefinitionIndex(14291)), TypeDefinitionIndex(TypeDefinitionIndex(14292))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14292), inst: 81 })
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2<TElement,TKey> : public ::System::Linq::OrderedEnumerable_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::OrderedEnumerable_1<TElement>)]{};

/// @brief Field parent offset 0x18
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Linq::OrderedEnumerable_1<TElement>*  parent;

/// @brief Field keySelector offset 0x20
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TElement,TKey>*  keySelector;

/// @brief Field comparer offset 0x28
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<TKey>*  comparer;

/// @brief Field descending offset 0x30
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<TElement>*  value) ;

constexpr ::System::Linq::OrderedEnumerable_1<TElement>* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<TElement>*> __get_parent() const;

constexpr void __set_keySelector(::System::Func_2<TElement,TKey>*  value) ;

constexpr ::System::Func_2<TElement,TKey>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,TKey>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<TKey>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<TKey>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

static inline ::System::Linq::OrderedEnumerable_2<TElement,TKey>* New_ctor(::System::Collections::Generic::IEnumerable_1<TElement>*  source, ::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<TElement>*  source, ::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

/// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>*  next) ;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedEnumerable_2(OrderedEnumerable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedEnumerable_2(OrderedEnumerable_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OrderedEnumerable_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::OrderedEnumerable_2, "System.Linq", "OrderedEnumerable`2");
