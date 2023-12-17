#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SparselyPopulatedArray_1)
namespace System::Threading {
template<typename T>
class SparselyPopulatedArrayFragment_1;
}
namespace System::Threading {
template<typename T>
struct SparselyPopulatedArrayAddInfo_1;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
class SparselyPopulatedArray_1;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type T>
class SparselyPopulatedArray_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::SparselyPopulatedArray_1);
// Type: System.Threading::SparselyPopulatedArray`1
// Type: System.Threading::SparselyPopulatedArray`1
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2692)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2692), inst: 2 })
// CS Name: ::System.Threading::SparselyPopulatedArray`1<T>*
class CORDL_TYPE SparselyPopulatedArray_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _head offset 0x10
 __declspec(property(get=__get__head, put=__set__head)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  _head;

/// @brief Field _tail offset 0x18
 __declspec(property(get=__get__tail, put=__set__tail)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  _tail;

 __declspec(property(get=get_Tail)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  Tail;

constexpr void __set__head(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value) ;

constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* __get__head() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> __get__head() const;

constexpr void __set__tail(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value) ;

constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* __get__tail() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> __get__tail() const;

static inline ::System::Threading::SparselyPopulatedArray_1<T>* New_ctor(int32_t  initialSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  initialSize) ;

/// @brief Method get_Tail addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Tail() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::SparselyPopulatedArrayAddInfo_1<T> Add(T  element) ;

// Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SparselyPopulatedArray_1(SparselyPopulatedArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SparselyPopulatedArray_1(SparselyPopulatedArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SparselyPopulatedArray_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::SparselyPopulatedArray_1, "System.Threading", "SparselyPopulatedArray`1");
