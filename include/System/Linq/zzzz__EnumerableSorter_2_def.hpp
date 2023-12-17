#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnumerableSorter_2)
namespace System {
class Object;
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
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
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
class EnumerableSorter_2;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
class EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
class EnumerableSorter_2<TElement,TKey>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class EnumerableSorter_2<TElement,float_t>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class EnumerableSorter_2<TElement,int32_t>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class EnumerableSorter_2<TElement,uint32_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<float_t,float_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_2<int32_t,float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::EnumerableSorter_2);
// Type: System.Linq::EnumerableSorter`2
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 }), TypeDefinitionIndex(TypeDefinitionIndex(14294)), TypeDefinitionIndex(TypeDefinitionIndex(14293))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 7385 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t> : public ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<int32_t>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<int32_t,::Array<int32_t>*>  keys;

constexpr void __set_keySelector(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  value) ;

constexpr ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*> __get_next() const;

constexpr void __set_keys(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_keys() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>* New_ctor(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 }), TypeDefinitionIndex(TypeDefinitionIndex(14294)), TypeDefinitionIndex(TypeDefinitionIndex(14293))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 2462 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t> : public ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<int32_t>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<int32_t,::Array<int32_t>*>  keys;

constexpr void __set_keySelector(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  value) ;

constexpr ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*> __get_next() const;

constexpr void __set_keys(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_keys() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>* New_ctor(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), TypeDefinitionIndex(TypeDefinitionIndex(14294)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 2441 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t> : public ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<int32_t>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<int32_t,::Array<int32_t>*>  keys;

constexpr void __set_keySelector(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  value) ;

constexpr ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*> __get_next() const;

constexpr void __set_keys(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_keys() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>* New_ctor(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), TypeDefinitionIndex(TypeDefinitionIndex(14294)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 2305 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> : public ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<uint32_t,::Array<uint32_t>*>  keys;

constexpr void __set_keySelector(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  value) ;

constexpr ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<uint32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<uint32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> __get_next() const;

constexpr void __set_keys(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_keys() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>* New_ctor(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), TypeDefinitionIndex(TypeDefinitionIndex(14294)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 2279 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> : public ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<int32_t>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<int32_t,::Array<int32_t>*>  keys;

constexpr void __set_keySelector(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  value) ;

constexpr ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> __get_next() const;

constexpr void __set_keys(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_keys() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>* New_ctor(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), TypeDefinitionIndex(TypeDefinitionIndex(14294)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 1638 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<TElement,uint32_t> : public ::System::Linq::EnumerableSorter_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<TElement>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TElement,uint32_t>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<TElement>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<uint32_t,::Array<uint32_t>*>  keys;

constexpr void __set_keySelector(::System::Func_2<TElement,uint32_t>*  value) ;

constexpr ::System::Func_2<TElement,uint32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,uint32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<uint32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<uint32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<TElement>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<TElement>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<TElement>*> __get_next() const;

constexpr void __set_keys(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_keys() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<TElement,uint32_t>* New_ctor(::System::Func_2<TElement,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<TElement,uint32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<TElement,::Array<TElement>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 }), TypeDefinitionIndex(TypeDefinitionIndex(14294))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 1634 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<TElement,float_t> : public ::System::Linq::EnumerableSorter_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<TElement>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TElement,float_t>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<float_t>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<TElement>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<float_t,::Array<float_t>*>  keys;

constexpr void __set_keySelector(::System::Func_2<TElement,float_t>*  value) ;

constexpr ::System::Func_2<TElement,float_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,float_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<float_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<float_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<float_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<TElement>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<TElement>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<TElement>*> __get_next() const;

constexpr void __set_keys(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_keys() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<TElement,float_t>* New_ctor(::System::Func_2<TElement,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<TElement,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<TElement,::Array<TElement>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 }), TypeDefinitionIndex(TypeDefinitionIndex(14294)), TypeDefinitionIndex(TypeDefinitionIndex(14293))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 1629 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<TElement,int32_t> : public ::System::Linq::EnumerableSorter_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<TElement>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TElement,int32_t>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<int32_t>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<TElement>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<int32_t,::Array<int32_t>*>  keys;

constexpr void __set_keySelector(::System::Func_2<TElement,int32_t>*  value) ;

constexpr ::System::Func_2<TElement,int32_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,int32_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<int32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<int32_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<TElement>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<TElement>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<TElement>*> __get_next() const;

constexpr void __set_keys(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_keys() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<TElement,int32_t>* New_ctor(::System::Func_2<TElement,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<TElement,int32_t>*  keySelector, ::System::Collections::Generic::IComparer_1<int32_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<TElement,::Array<TElement>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14294)), TypeDefinitionIndex(TypeDefinitionIndex(14293)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 582 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<float_t,float_t> : public ::System::Linq::EnumerableSorter_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<float_t>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<float_t,float_t>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<float_t>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<float_t>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<float_t,::Array<float_t>*>  keys;

constexpr void __set_keySelector(::System::Func_2<float_t,float_t>*  value) ;

constexpr ::System::Func_2<float_t,float_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t,float_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<float_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<float_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<float_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<float_t>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<float_t>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<float_t>*> __get_next() const;

constexpr void __set_keys(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_keys() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<float_t,float_t>* New_ctor(::System::Func_2<float_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<float_t>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<float_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<float_t>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<float_t,::Array<float_t>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14294)), TypeDefinitionIndex(TypeDefinitionIndex(14293)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 534 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<int32_t,float_t> : public ::System::Linq::EnumerableSorter_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<int32_t>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<int32_t,float_t>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<float_t>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<int32_t>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<float_t,::Array<float_t>*>  keys;

constexpr void __set_keySelector(::System::Func_2<int32_t,float_t>*  value) ;

constexpr ::System::Func_2<int32_t,float_t>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t,float_t>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<float_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<float_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<float_t>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<int32_t>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<int32_t>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<int32_t>*> __get_next() const;

constexpr void __set_keys(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_keys() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<int32_t,float_t>* New_ctor(::System::Func_2<int32_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<int32_t>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<int32_t,float_t>*  keySelector, ::System::Collections::Generic::IComparer_1<float_t>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<int32_t>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<int32_t,::Array<int32_t>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`2
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement,::il2cpp_utils::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 }), TypeDefinitionIndex(TypeDefinitionIndex(14294)), TypeDefinitionIndex(TypeDefinitionIndex(14293))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14294), inst: 81 })
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2<TElement,TKey> : public ::System::Linq::EnumerableSorter_1<TElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Linq::EnumerableSorter_1<TElement>)]{};

/// @brief Field keySelector offset 0x10
 __declspec(property(get=__get_keySelector, put=__set_keySelector)) ::System::Func_2<TElement,TKey>*  keySelector;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<TKey>*  comparer;

/// @brief Field descending offset 0x20
 __declspec(property(get=__get_descending, put=__set_descending)) bool  descending;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Linq::EnumerableSorter_1<TElement>*  next;

/// @brief Field keys offset 0x30
 __declspec(property(get=__get_keys, put=__set_keys)) ::ArrayW<TKey,::Array<TKey>*>  keys;

constexpr void __set_keySelector(::System::Func_2<TElement,TKey>*  value) ;

constexpr ::System::Func_2<TElement,TKey>* __get_keySelector() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement,TKey>*> __get_keySelector() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<TKey>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<TKey>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> __get_comparer() const;

constexpr void __set_descending(bool  value) ;

constexpr bool& __get_descending() ;

constexpr bool const& __get_descending() const;

constexpr void __set_next(::System::Linq::EnumerableSorter_1<TElement>*  value) ;

constexpr ::System::Linq::EnumerableSorter_1<TElement>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<TElement>*> __get_next() const;

constexpr void __set_keys(::ArrayW<TKey,::Array<TKey>*>  value) ;

constexpr ::ArrayW<TKey,::Array<TKey>*>& __get_keys() ;

constexpr ::ArrayW<TKey,::Array<TKey>*> const& __get_keys() const;

static inline ::System::Linq::EnumerableSorter_2<TElement,TKey>* New_ctor(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::System::Linq::EnumerableSorter_1<TElement>*  next) ;

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<TElement,::Array<TElement>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_2(EnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_2(EnumerableSorter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::EnumerableSorter_2, "System.Linq", "EnumerableSorter`2");
