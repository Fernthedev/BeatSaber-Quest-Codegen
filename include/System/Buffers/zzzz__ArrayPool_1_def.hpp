#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPool_1)
// Forward declare root types
namespace System::Buffers {
template<typename T>
class ArrayPool_1;
}
namespace System::Buffers {
template<::il2cpp_utils::il2cpp_reference_type T>
class ArrayPool_1<T>;
}
namespace System::Buffers {
template<>
class ArrayPool_1<char16_t>;
}
namespace System::Buffers {
template<>
class ArrayPool_1<int32_t>;
}
namespace System::Buffers {
template<>
class ArrayPool_1<uint8_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Buffers::ArrayPool_1);
// Type: System.Buffers::ArrayPool`1
// Type: System.Buffers::ArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3880))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3880), inst: 741 })
// CS Name: ::System.Buffers::ArrayPool`1<T>*
class CORDL_TYPE ArrayPool_1<uint8_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__Shared_k__BackingField(::System::Buffers::ArrayPool_1<uint8_t>*  value) ;

static inline ::System::Buffers::ArrayPool_1<uint8_t>* getStaticF__Shared_k__BackingField() ;

/// @brief Method get_Shared addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Buffers::ArrayPool_1<uint8_t>* get_Shared() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Rent(int32_t  minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Return(::ArrayW<uint8_t,::Array<uint8_t>*>  array, bool  clearArray) ;

static inline ::System::Buffers::ArrayPool_1<uint8_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPool_1(ArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPool_1(ArrayPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArrayPool_1()  = default;
public:


// Fields

// Static field <Shared>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::ArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3880))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3880), inst: 292 })
// CS Name: ::System.Buffers::ArrayPool`1<T>*
class CORDL_TYPE ArrayPool_1<char16_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__Shared_k__BackingField(::System::Buffers::ArrayPool_1<char16_t>*  value) ;

static inline ::System::Buffers::ArrayPool_1<char16_t>* getStaticF__Shared_k__BackingField() ;

/// @brief Method get_Shared addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Buffers::ArrayPool_1<char16_t>* get_Shared() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<char16_t,::Array<char16_t>*> Rent(int32_t  minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Return(::ArrayW<char16_t,::Array<char16_t>*>  array, bool  clearArray) ;

static inline ::System::Buffers::ArrayPool_1<char16_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPool_1(ArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPool_1(ArrayPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArrayPool_1()  = default;
public:


// Fields

// Static field <Shared>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::ArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3880)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3880), inst: 98 })
// CS Name: ::System.Buffers::ArrayPool`1<T>*
class CORDL_TYPE ArrayPool_1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__Shared_k__BackingField(::System::Buffers::ArrayPool_1<int32_t>*  value) ;

static inline ::System::Buffers::ArrayPool_1<int32_t>* getStaticF__Shared_k__BackingField() ;

/// @brief Method get_Shared addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Buffers::ArrayPool_1<int32_t>* get_Shared() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<int32_t,::Array<int32_t>*> Rent(int32_t  minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Return(::ArrayW<int32_t,::Array<int32_t>*>  array, bool  clearArray) ;

static inline ::System::Buffers::ArrayPool_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPool_1(ArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPool_1(ArrayPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArrayPool_1()  = default;
public:


// Fields

// Static field <Shared>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::ArrayPool`1
namespace System::Buffers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3880)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3880), inst: 2 })
// CS Name: ::System.Buffers::ArrayPool`1<T>*
class CORDL_TYPE ArrayPool_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__Shared_k__BackingField(::System::Buffers::ArrayPool_1<T>*  value) ;

static inline ::System::Buffers::ArrayPool_1<T>* getStaticF__Shared_k__BackingField() ;

/// @brief Method get_Shared addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Buffers::ArrayPool_1<T>* get_Shared() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<T,::Array<T>*> Rent(int32_t  minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Return(::ArrayW<T,::Array<T>*>  array, bool  clearArray) ;

static inline ::System::Buffers::ArrayPool_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPool_1(ArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPool_1(ArrayPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArrayPool_1()  = default;
public:


// Fields

// Static field <Shared>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::ArrayPool_1, "System.Buffers", "ArrayPool`1");
