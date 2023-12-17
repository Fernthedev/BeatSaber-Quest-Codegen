#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SparselyPopulatedArrayFragment_1)
// Forward declare root types
namespace System::Threading {
template<typename T>
class SparselyPopulatedArrayFragment_1;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type T>
class SparselyPopulatedArrayFragment_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::SparselyPopulatedArrayFragment_1);
// Type: System.Threading::SparselyPopulatedArrayFragment`1
// Type: System.Threading::SparselyPopulatedArrayFragment`1
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2694))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2694), inst: 2 })
// CS Name: ::System.Threading::SparselyPopulatedArrayFragment`1<T>*
class CORDL_TYPE SparselyPopulatedArrayFragment_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _elements offset 0x10
 __declspec(property(get=__get__elements, put=__set__elements)) ::ArrayW<T,::Array<T>*>  _elements;

/// @brief Field _freeCount offset 0x18
 __declspec(property(get=__get__freeCount, put=__set__freeCount)) int32_t  _freeCount;

/// @brief Field _next offset 0x20
 __declspec(property(get=__get__next, put=__set__next)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  _next;

/// @brief Field _prev offset 0x28
 __declspec(property(get=__get__prev, put=__set__prev)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  _prev;

 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Prev)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  Prev;

constexpr void __set__elements(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__elements() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__elements() const;

constexpr void __set__freeCount(int32_t  value) ;

constexpr int32_t& __get__freeCount() ;

constexpr int32_t const& __get__freeCount() const;

constexpr void __set__next(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value) ;

constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* __get__next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> __get__next() const;

constexpr void __set__prev(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value) ;

constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* __get__prev() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> __get__prev() const;

static inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* New_ctor(int32_t  size) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  size) ;

static inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* New_ctor(int32_t  size, ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  prev) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  size, ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  prev) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Prev addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Prev() ;

/// @brief Method SafeAtomicRemove addr 0x0 size 0xffffffffffffffff virtual false final false
inline T SafeAtomicRemove(int32_t  index, T  expectedElement) ;

// Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArrayFragment_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SparselyPopulatedArrayFragment_1(SparselyPopulatedArrayFragment_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArrayFragment_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SparselyPopulatedArrayFragment_1(SparselyPopulatedArrayFragment_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SparselyPopulatedArrayFragment_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::SparselyPopulatedArrayFragment_1, "System.Threading", "SparselyPopulatedArrayFragment`1");
