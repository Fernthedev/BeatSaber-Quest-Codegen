#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Memory_1)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Buffers {
struct MemoryHandle;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T>
struct Memory_1<T>;
}
namespace System {
template<>
struct Memory_1<uint8_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::Memory_1);
// Type: System::Memory`1
// Type: System::Memory`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2437))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2437), inst: 741 })
// CS Name: ::System::Memory`1<T>
struct CORDL_TYPE Memory_1<uint8_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RemoveFlagsBitMask offset 0x0
static constexpr int32_t  RemoveFlagsBitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field _object offset 0x0
 __declspec(property(get=__get__object, put=__set__object)) ::System::Object*  _object;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _length offset 0xc
 __declspec(property(get=__get__length, put=__set__length)) int32_t  _length;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Span)) ::System::Span_1<uint8_t>  Span;

/// @brief Convert operator to "::System::IEquatable_1<::System::Memory_1<uint8_t>>"
constexpr operator  ::System::IEquatable_1<::System::Memory_1<uint8_t>>*() ;

constexpr void __set__object(::System::Object*  value) ;

constexpr ::System::Object* __get__object() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__object() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__length(int32_t  value) ;

constexpr int32_t& __get__length() ;

constexpr int32_t const& __get__length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  obj, int32_t  start, int32_t  length) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Memory_1<uint8_t> op_Implicit___System__Memory_1_uint8_t_(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlyMemory_1<uint8_t> op_Implicit___System__ReadOnlyMemory_1_uint8_t_(::System::Memory_1<uint8_t>  memory) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Memory_1<uint8_t> Slice(int32_t  start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Memory_1<uint8_t> Slice(int32_t  start, int32_t  length) ;

/// @brief Method get_Span addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Span_1<uint8_t> get_Span() ;

/// @brief Method Pin addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Buffers::MemoryHandle Pin() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ToArray() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::Memory_1<uint8_t>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method CombineHashCodes addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t CombineHashCodes(int32_t  left, int32_t  right) ;

/// @brief Method CombineHashCodes addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3) ;

// Ctor Parameters [CppParam { name: "_object", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Memory_1(::System::Object*  _object, int32_t  _index, int32_t  _length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Memory_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Memory_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Memory`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2437))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2437), inst: 2 })
// CS Name: ::System::Memory`1<T>
struct CORDL_TYPE Memory_1<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RemoveFlagsBitMask offset 0x0
static constexpr int32_t  RemoveFlagsBitMask{static_cast<int32_t>(0x7fffffff)};

/// @brief Field _object offset 0x0
 __declspec(property(get=__get__object, put=__set__object)) ::System::Object*  _object;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _length offset 0xc
 __declspec(property(get=__get__length, put=__set__length)) int32_t  _length;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Span)) ::System::Span_1<T>  Span;

/// @brief Convert operator to "::System::IEquatable_1<::System::Memory_1<T>>"
constexpr operator  ::System::IEquatable_1<::System::Memory_1<T>>*() ;

constexpr void __set__object(::System::Object*  value) ;

constexpr ::System::Object* __get__object() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__object() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__length(int32_t  value) ;

constexpr int32_t& __get__length() ;

constexpr int32_t const& __get__length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<T,::Array<T>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<T,::Array<T>*>  array, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  obj, int32_t  start, int32_t  length) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Memory_1<T> op_Implicit___System__Memory_1_T_(::ArrayW<T,::Array<T>*>  array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlyMemory_1<T> op_Implicit___System__ReadOnlyMemory_1_T_(::System::Memory_1<T>  memory) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Memory_1<T> Slice(int32_t  start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Memory_1<T> Slice(int32_t  start, int32_t  length) ;

/// @brief Method get_Span addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Span_1<T> get_Span() ;

/// @brief Method Pin addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Buffers::MemoryHandle Pin() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> ToArray() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::Memory_1<T>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method CombineHashCodes addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t CombineHashCodes(int32_t  left, int32_t  right) ;

/// @brief Method CombineHashCodes addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3) ;

// Ctor Parameters [CppParam { name: "_object", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Memory_1(::System::Object*  _object, int32_t  _index, int32_t  _length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Memory_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Memory_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Memory_1, "System", "Memory`1");
