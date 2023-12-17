#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LazyCopyHashSet_1)
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class LazyCopyHashSet_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::LazyCopyHashSet_1);
// Type: ::LazyCopyHashSet`1
// Type: ::LazyCopyHashSet`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15821))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15821), inst: 2 })
// CS Name: ::LazyCopyHashSet`1<T>*
class CORDL_TYPE LazyCopyHashSet_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _itemsCopy offset 0x10
 __declspec(property(get=__get__itemsCopy, put=__set__itemsCopy)) ::System::Collections::Generic::List_1<T>*  _itemsCopy;

/// @brief Field _items offset 0x18
 __declspec(property(get=__get__items, put=__set__items)) ::System::Collections::Generic::HashSet_1<T>*  _items;

/// @brief Field _dirty offset 0x20
 __declspec(property(get=__get__dirty, put=__set__dirty)) bool  _dirty;

 __declspec(property(get=get_items)) ::System::Collections::Generic::List_1<T>*  items;

/// @brief Convert operator to "::GlobalNamespace::ILazyCopyHashSet_1<T>"
constexpr operator  ::GlobalNamespace::ILazyCopyHashSet_1<T>*() noexcept;

constexpr void __set__itemsCopy(::System::Collections::Generic::List_1<T>*  value) ;

constexpr ::System::Collections::Generic::List_1<T>* __get__itemsCopy() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> __get__itemsCopy() const;

constexpr void __set__items(::System::Collections::Generic::HashSet_1<T>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<T>* __get__items() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> __get__items() const;

constexpr void __set__dirty(bool  value) ;

constexpr bool& __get__dirty() ;

constexpr bool const& __get__dirty() const;

/// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::List_1<T>* get_items() ;

static inline ::GlobalNamespace::LazyCopyHashSet_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::GlobalNamespace::LazyCopyHashSet_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Add(T  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Remove(T  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

// Ctor Parameters [CppParam { name: "", ty: "LazyCopyHashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LazyCopyHashSet_1(LazyCopyHashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LazyCopyHashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LazyCopyHashSet_1(LazyCopyHashSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LazyCopyHashSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::LazyCopyHashSet_1, "", "LazyCopyHashSet`1");
