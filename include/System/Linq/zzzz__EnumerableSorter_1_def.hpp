#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnumerableSorter_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
class Object;
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
template<typename TElement>
class EnumerableSorter_1;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
class EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class EnumerableSorter_1<TElement>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<float_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::EnumerableSorter_1);
// Type: System.Linq::EnumerableSorter`1
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 6424 })
// CS Name: ::System.Linq::EnumerableSorter`1<TElement>*
class CORDL_TYPE EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> Sort(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>  elements, int32_t  count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QuickSort(::ArrayW<int32_t,::Array<int32_t>*>  map, int32_t  left, int32_t  right) ;

static inline ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_1(EnumerableSorter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_1(EnumerableSorter_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 6152 })
// CS Name: ::System.Linq::EnumerableSorter`1<TElement>*
class CORDL_TYPE EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> Sort(::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>  elements, int32_t  count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QuickSort(::ArrayW<int32_t,::Array<int32_t>*>  map, int32_t  left, int32_t  right) ;

static inline ::System::Linq::EnumerableSorter_1<::Zenject::__PoolableManager__PoolableInfo>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_1(EnumerableSorter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_1(EnumerableSorter_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14293))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 4356 })
// CS Name: ::System.Linq::EnumerableSorter`1<TElement>*
class CORDL_TYPE EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> Sort(::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>  elements, int32_t  count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QuickSort(::ArrayW<int32_t,::Array<int32_t>*>  map, int32_t  left, int32_t  right) ;

static inline ::System::Linq::EnumerableSorter_1<::Zenject::__DisposableManager__DisposableInfo>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_1(EnumerableSorter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_1(EnumerableSorter_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 3290 })
// CS Name: ::System.Linq::EnumerableSorter`1<TElement>*
class CORDL_TYPE EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> Sort(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>  elements, int32_t  count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QuickSort(::ArrayW<int32_t,::Array<int32_t>*>  map, int32_t  left, int32_t  right) ;

static inline ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_1(EnumerableSorter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_1(EnumerableSorter_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 391 })
// CS Name: ::System.Linq::EnumerableSorter`1<TElement>*
class CORDL_TYPE EnumerableSorter_1<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<float_t,::Array<float_t>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> Sort(::ArrayW<float_t,::Array<float_t>*>  elements, int32_t  count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QuickSort(::ArrayW<int32_t,::Array<int32_t>*>  map, int32_t  left, int32_t  right) ;

static inline ::System::Linq::EnumerableSorter_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_1(EnumerableSorter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_1(EnumerableSorter_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 302 })
// CS Name: ::System.Linq::EnumerableSorter`1<TElement>*
class CORDL_TYPE EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> Sort(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>  elements, int32_t  count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QuickSort(::ArrayW<int32_t,::Array<int32_t>*>  map, int32_t  left, int32_t  right) ;

static inline ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_1(EnumerableSorter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_1(EnumerableSorter_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14293)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 98 })
// CS Name: ::System.Linq::EnumerableSorter`1<TElement>*
class CORDL_TYPE EnumerableSorter_1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<int32_t,::Array<int32_t>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> Sort(::ArrayW<int32_t,::Array<int32_t>*>  elements, int32_t  count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QuickSort(::ArrayW<int32_t,::Array<int32_t>*>  map, int32_t  left, int32_t  right) ;

static inline ::System::Linq::EnumerableSorter_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_1(EnumerableSorter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_1(EnumerableSorter_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14293))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 2 })
// CS Name: ::System.Linq::EnumerableSorter`1<TElement>*
class CORDL_TYPE EnumerableSorter_1<TElement> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ComputeKeys(::ArrayW<TElement,::Array<TElement>*>  elements, int32_t  count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> Sort(::ArrayW<TElement,::Array<TElement>*>  elements, int32_t  count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
inline void QuickSort(::ArrayW<int32_t,::Array<int32_t>*>  map, int32_t  left, int32_t  right) ;

static inline ::System::Linq::EnumerableSorter_1<TElement>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableSorter_1(EnumerableSorter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableSorter_1(EnumerableSorter_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumerableSorter_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::EnumerableSorter_1, "System.Linq", "EnumerableSorter`1");
