#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryHeap_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class BinaryHeap_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class BinaryHeap_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::BinaryHeap_1);
// Type: ::BinaryHeap`1
// Type: ::BinaryHeap`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14341)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14341), inst: 2 })
// CS Name: ::BinaryHeap`1<T>*
class CORDL_TYPE BinaryHeap_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _data offset 0x10
 __declspec(property(get=__get__data, put=__set__data)) ::ArrayW<T,::Array<T>*>  _data;

/// @brief Field _tail offset 0x18
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

constexpr void __set__data(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__data() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__data() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

static inline ::GlobalNamespace::BinaryHeap_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::GlobalNamespace::BinaryHeap_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Insert(T  item) ;

/// @brief Method RemoveMin addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool RemoveMin(ByRef<T>  output) ;

// Ctor Parameters [CppParam { name: "", ty: "BinaryHeap_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryHeap_1(BinaryHeap_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryHeap_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryHeap_1(BinaryHeap_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BinaryHeap_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BinaryHeap_1, "", "BinaryHeap`1");
