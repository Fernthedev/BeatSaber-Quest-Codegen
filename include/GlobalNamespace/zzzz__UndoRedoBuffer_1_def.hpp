#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UndoRedoBuffer_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class UndoRedoBuffer_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class UndoRedoBuffer_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::UndoRedoBuffer_1);
// Type: ::UndoRedoBuffer`1
// Type: ::UndoRedoBuffer`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14382)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14382), inst: 2 })
// CS Name: ::UndoRedoBuffer`1<T>*
class CORDL_TYPE UndoRedoBuffer_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _data offset 0x10
 __declspec(property(get=__get__data, put=__set__data)) ::System::Collections::Generic::List_1<T>*  _data;

/// @brief Field _capacity offset 0x18
 __declspec(property(get=__get__capacity, put=__set__capacity)) int32_t  _capacity;

/// @brief Field _cursor offset 0x1c
 __declspec(property(get=__get__cursor, put=__set__cursor)) int32_t  _cursor;

constexpr void __set__data(::System::Collections::Generic::List_1<T>*  value) ;

constexpr ::System::Collections::Generic::List_1<T>* __get__data() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> __get__data() const;

constexpr void __set__capacity(int32_t  value) ;

constexpr int32_t& __get__capacity() ;

constexpr int32_t const& __get__capacity() const;

constexpr void __set__cursor(int32_t  value) ;

constexpr int32_t& __get__cursor() ;

constexpr int32_t const& __get__cursor() const;

static inline ::GlobalNamespace::UndoRedoBuffer_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(T  item) ;

/// @brief Method Undo addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Undo() ;

/// @brief Method Redo addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Redo() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

// Ctor Parameters [CppParam { name: "", ty: "UndoRedoBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UndoRedoBuffer_1(UndoRedoBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UndoRedoBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UndoRedoBuffer_1(UndoRedoBuffer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UndoRedoBuffer_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::UndoRedoBuffer_1, "", "UndoRedoBuffer`1");
